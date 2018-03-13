#include <iostream>            // for cout and cin

namespace testns1 {

  class Cat                      // begin declaration of the class
  {
    public:                      // begin public section
      Cat(int initialAge);       // constructor
      Cat(const Cat& copy_from); // copy constructor
      Cat& operator=(const Cat& copy_from); // copy assignment
      ~Cat();                    // destructor

      int GetAge() const;        // accessor function
      void SetAge(int age);      // accessor function
      void Meow();
    private:                     // begin private section
      int itsAge;                // member variable
      char * string;
  };

}
