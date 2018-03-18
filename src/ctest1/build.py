#! python3
import os, sys, subprocess, shutil

# MkDocs Build Script
class SrcBuild(object):

    # Class Init
    def __init__(self):
        #self.SRCDIR = os.path.abspath("./")
        self.MBEDROOT = os.path.abspath("../../mbed-build/")
        self.MBEDBUILD = os.path.join(self.MBEDROOT, "BuildOut")
        self.MBEDSRCDIR = os.path.abspath("../../mbed-build/src-bld/")


    # Run a command
    def run_cmd(self, cmdarray, workingdir):
        proc = subprocess.Popen(cmdarray, cwd=workingdir, universal_newlines=True)
        proc_out, proc_err = proc.communicate()
        print(proc_out)
        print(proc_err)
        if proc.returncode != 0:
            raise RuntimeError("Failure to run command")
        return

    # Empty a directory
    def emptydir(self, top):
        if(top == '/' or top == "\\"): return
        else:
            for root, dirs, files in os.walk(top, topdown=False):
                for name in files:
                    os.remove(os.path.join(root, name))
                for name in dirs:
                    os.rmdir(os.path.join(root, name))

    # Print Usage
    def usage(self):
        print ("Please use build.py <target> where <target> is one of")
        print ("  build       to build code")
        print ("  clean       to clean mbed and the output directory:")
        print ("              " + self.MBEDSRCDIR)
 
    # Do the main build of doxygen html
    def build(self):
        # Clean the directory we're copying files into
        self.emptydir(self.MBEDSRCDIR)
        print("Copying Files")
        # For Cpp code just copy it across and let mbed build it
        shutil.copy2("blink.cpp", self.MBEDSRCDIR)
        shutil.copy2("main.cpp", self.MBEDSRCDIR)

        print("Running mbed build")
        # Trying to specify the build_dir in the mbed config doesn't work for some reason
        self.run_cmd(["mbed", "compile", "--profile=debug", "--build", self.MBEDBUILD], self.MBEDROOT)

        print ("Build finished")
 
     # Clean the Build
    def clean(self):
        # Clean directory files are copied to
        print("\nCleaning\n" + self.MBEDSRCDIR + "\n")
        self.emptydir(self.MBEDSRCDIR)
        # do an mbed clean
        print("Cleaning\n" + self.MBEDBUILD)
        self.emptydir(self.MBEDBUILD)
        print ("\nClean finished")

    def main(self):
        if len(sys.argv) != 2:
            self.usage()
            return
        if sys.argv[1] == "build":
            self.build()
        if sys.argv[1] == "clean":
            self.clean()

if __name__ == "__main__":
    SrcBuild().main()
