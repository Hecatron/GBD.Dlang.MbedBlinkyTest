int cpp2d_name(const char *);
typedef unsigned long long uintptr_t;
typedef char *va_list;
void __va_start(va_list *, ...) __attribute__((nothrow));
typedef unsigned long long size_t;
typedef long long ptrdiff_t;
typedef long long intptr_t;
typedef _Bool __vcrt_bool;
typedef unsigned short wchar_t;
void __security_init_cookie();
void __security_check_cookie(uintptr_t _StackCookie);
void __report_gsfailure(uintptr_t _StackCookie);
extern uintptr_t __security_cookie;
typedef _Bool __crt_bool;
void _invalid_parameter_noinfo();
void _invalid_parameter_noinfo_noreturn();
void _invoke_watson(const wchar_t *_Expression, const wchar_t *_FunctionName, const wchar_t *_FileName, unsigned int _LineNo, uintptr_t _Reserved);
typedef int errno_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef long __time32_t;
typedef long long __time64_t;
struct __crt_locale_data_public {
    const unsigned short *_locale_pctype;
    int _locale_mb_cur_max;
    unsigned int _locale_lc_codepage;
};
typedef struct __crt_locale_data_public __crt_locale_data_public;
struct __crt_locale_pointers {
    struct __crt_locale_data;
    struct __crt_locale_data *locinfo;
    struct __crt_multibyte_data;
    struct __crt_multibyte_data *mbcinfo;
};
typedef struct __crt_locale_pointers __crt_locale_pointers;
typedef __crt_locale_pointers *_locale_t;
struct _Mbstatet {
    unsigned long _Wchar;
    unsigned short _Byte;
    unsigned short _State;
};
typedef struct _Mbstatet _Mbstatet;
typedef _Mbstatet mbstate_t;
typedef __time64_t time_t;
typedef size_t rsize_t;
void _Atexit(void (*)(void) __attribute__((cdecl)));
typedef unsigned long _Uint32t;
void *_calloc_base(size_t _Count, size_t _Size) __declspec(restrict);
void *calloc(size_t _Count, size_t _Size) __declspec(restrict);
int _callnewh(size_t _Size);
void *_expand(void *_Block, size_t _Size);
void _free_base(void *_Block);
void free(void *_Block);
void *_malloc_base(size_t _Size) __declspec(restrict);
void *malloc(size_t _Size) __declspec(restrict);
size_t _msize_base(void *_Block);
size_t _msize(void *_Block);
void *_realloc_base(void *_Block, size_t _Size) __declspec(restrict);
void *realloc(void *_Block, size_t _Size) __declspec(restrict);
void *_recalloc_base(void *_Block, size_t _Count, size_t _Size) __declspec(restrict);
void *_recalloc(void *_Block, size_t _Count, size_t _Size) __declspec(restrict);
void _aligned_free(void *_Block);
void *_aligned_malloc(size_t _Size, size_t _Alignment) __declspec(restrict);
void *_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset) __declspec(restrict);
size_t _aligned_msize(void *_Block, size_t _Alignment, size_t _Offset);
void *_aligned_offset_realloc(void *_Block, size_t _Size, size_t _Alignment, size_t _Offset) __declspec(restrict);
void *_aligned_offset_recalloc(void *_Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset) __declspec(restrict);
void *_aligned_realloc(void *_Block, size_t _Size, size_t _Alignment) __declspec(restrict);
void *_aligned_recalloc(void *_Block, size_t _Count, size_t _Size, size_t _Alignment) __declspec(restrict);
int *_errno();
errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
extern unsigned long __threadid();
extern uintptr_t __threadhandle();
typedef int (*_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *) __attribute__((cdecl));
typedef int (*_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *) __attribute__((cdecl));
void *bsearch_s(const void *_Key, const void *_Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void *_Context);
void qsort_s(void *_Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void *_Context);
void *bsearch(const void *_Key, const void *_Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction);
void qsort(void *_Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction);
void *_lfind_s(const void *_Key, const void *_Base, unsigned int *_NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void *_Context);
void *_lfind(const void *_Key, const void *_Base, unsigned int *_NumOfElements, unsigned int _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction);
void *_lsearch_s(const void *_Key, void *_Base, unsigned int *_NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void *_Context);
void *_lsearch(const void *_Key, void *_Base, unsigned int *_NumOfElements, unsigned int _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction);
void *lfind(const void *_Key, const void *_Base, unsigned int *_NumOfElements, unsigned int _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details."));
void *lsearch(const void *_Key, void *_Base, unsigned int *_NumOfElements, unsigned int _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for details."));
errno_t _itow_s(int _Value, wchar_t *_Buffer, size_t _BufferCount, int _Radix);
wchar_t *_itow(int _Value, wchar_t *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _itow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ltow_s(long _Value, wchar_t *_Buffer, size_t _BufferCount, int _Radix);
wchar_t *_ltow(long _Value, wchar_t *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ltow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ultow_s(unsigned long _Value, wchar_t *_Buffer, size_t _BufferCount, int _Radix);
wchar_t *_ultow(unsigned long _Value, wchar_t *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ultow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
double wcstod(const wchar_t *_String, wchar_t **_EndPtr);
double _wcstod_l(const wchar_t *_String, wchar_t **_EndPtr, _locale_t _Locale);
long wcstol(const wchar_t *_String, wchar_t **_EndPtr, int _Radix);
long _wcstol_l(const wchar_t *_String, wchar_t **_EndPtr, int _Radix, _locale_t _Locale);
long long wcstoll(const wchar_t *_String, wchar_t **_EndPtr, int _Radix);
long long _wcstoll_l(const wchar_t *_String, wchar_t **_EndPtr, int _Radix, _locale_t _Locale);
unsigned long wcstoul(const wchar_t *_String, wchar_t **_EndPtr, int _Radix);
unsigned long _wcstoul_l(const wchar_t *_String, wchar_t **_EndPtr, int _Radix, _locale_t _Locale);
unsigned long long wcstoull(const wchar_t *_String, wchar_t **_EndPtr, int _Radix);
unsigned long long _wcstoull_l(const wchar_t *_String, wchar_t **_EndPtr, int _Radix, _locale_t _Locale);
long double wcstold(const wchar_t *_String, wchar_t **_EndPtr);
long double _wcstold_l(const wchar_t *_String, wchar_t **_EndPtr, _locale_t _Locale);
float wcstof(const wchar_t *_String, wchar_t **_EndPtr);
float _wcstof_l(const wchar_t *_String, wchar_t **_EndPtr, _locale_t _Locale);
double _wtof(const wchar_t *_String);
double _wtof_l(const wchar_t *_String, _locale_t _Locale);
int _wtoi(const wchar_t *_String);
int _wtoi_l(const wchar_t *_String, _locale_t _Locale);
long _wtol(const wchar_t *_String);
long _wtol_l(const wchar_t *_String, _locale_t _Locale);
long long _wtoll(const wchar_t *_String);
long long _wtoll_l(const wchar_t *_String, _locale_t _Locale);
errno_t _i64tow_s(long long _Value, wchar_t *_Buffer, size_t _BufferCount, int _Radix);
wchar_t *_i64tow(long long _Value, wchar_t *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _i64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ui64tow_s(unsigned long long _Value, wchar_t *_Buffer, size_t _BufferCount, int _Radix);
wchar_t *_ui64tow(unsigned long long _Value, wchar_t *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ui64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
long long _wtoi64(const wchar_t *_String);
long long _wtoi64_l(const wchar_t *_String, _locale_t _Locale);
long long _wcstoi64(const wchar_t *_String, wchar_t **_EndPtr, int _Radix);
long long _wcstoi64_l(const wchar_t *_String, wchar_t **_EndPtr, int _Radix, _locale_t _Locale);
unsigned long long _wcstoui64(const wchar_t *_String, wchar_t **_EndPtr, int _Radix);
unsigned long long _wcstoui64_l(const wchar_t *_String, wchar_t **_EndPtr, int _Radix, _locale_t _Locale);
wchar_t *_wfullpath(wchar_t *_Buffer, const wchar_t *_Path, size_t _BufferCount);
errno_t _wmakepath_s(wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Drive, const wchar_t *_Dir, const wchar_t *_Filename, const wchar_t *_Ext);
void _wmakepath(wchar_t *_Buffer, const wchar_t *_Drive, const wchar_t *_Dir, const wchar_t *_Filename, const wchar_t *_Ext) __declspec(deprecated("This function or variable may be unsafe. Consider using _wmakepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wmakepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
void _wperror(const wchar_t *_ErrorMessage);
void _wsplitpath(const wchar_t *_FullPath, wchar_t *_Drive, wchar_t *_Dir, wchar_t *_Filename, wchar_t *_Ext) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wsplitpath_s(const wchar_t *_FullPath, wchar_t *_Drive, size_t _DriveCount, wchar_t *_Dir, size_t _DirCount, wchar_t *_Filename, size_t _FilenameCount, wchar_t *_Ext, size_t _ExtCount);
errno_t _wdupenv_s(wchar_t **_Buffer, size_t *_BufferCount, const wchar_t *_VarName);
wchar_t *_wgetenv(const wchar_t *_VarName) __declspec(deprecated("This function or variable may be unsafe. Consider using _wdupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wgetenv_s(size_t *_RequiredCount, wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_VarName);
int _wputenv(const wchar_t *_EnvString);
errno_t _wputenv_s(const wchar_t *_Name, const wchar_t *_Value);
errno_t _wsearchenv_s(const wchar_t *_Filename, const wchar_t *_VarName, wchar_t *_Buffer, size_t _BufferCount);
void _wsearchenv(const wchar_t *_Filename, const wchar_t *_VarName, wchar_t *_ResultPath) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsearchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsearchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int _wsystem(const wchar_t *_Command);
void _swab(char *_Buf1, char *_Buf2, int _SizeInBytes);
void exit(int _Code);
void _exit(int _Code);
void _Exit(int _Code);
void quick_exit(int _Code);
void abort();
unsigned int _set_abort_behavior(unsigned int _Flags, unsigned int _Mask);
typedef int (*_onexit_t)(void) __attribute__((cdecl));
int atexit(void (*)(void) __attribute__((cdecl)));
_onexit_t _onexit(_onexit_t _Func);
int at_quick_exit(void (*)(void) __attribute__((cdecl)));
typedef void (*_purecall_handler)(void) __attribute__((cdecl));
typedef void (*_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t) __attribute__((cdecl));
_purecall_handler _set_purecall_handler(_purecall_handler _Handler);
_purecall_handler _get_purecall_handler();
_invalid_parameter_handler _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
_invalid_parameter_handler _get_invalid_parameter_handler();
_invalid_parameter_handler _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler);
_invalid_parameter_handler _get_thread_local_invalid_parameter_handler();
int _set_error_mode(int _Mode);
int *_errno();
errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
unsigned long *__doserrno();
errno_t _set_doserrno(unsigned long _Value);
errno_t _get_doserrno(unsigned long *_Value);
char **__sys_errlist() __declspec(deprecated("This function or variable may be unsafe. Consider using strerror instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int *__sys_nerr() __declspec(deprecated("This function or variable may be unsafe. Consider using strerror instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
void perror(const char *_ErrMsg);
char **__p__pgmptr() __declspec(deprecated("This function or variable may be unsafe. Consider using _get_pgmptr instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
wchar_t **__p__wpgmptr() __declspec(deprecated("This function or variable may be unsafe. Consider using _get_wpgmptr instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int *__p__fmode() __declspec(deprecated("This function or variable may be unsafe. Consider using _get_fmode instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _get_pgmptr(char **_Value);
errno_t _get_wpgmptr(wchar_t **_Value);
errno_t _set_fmode(int _Mode);
errno_t _get_fmode(int *_PMode);
struct _div_t {
    int quot;
    int rem;
};
typedef struct _div_t div_t;
struct _ldiv_t {
    long quot;
    long rem;
};
typedef struct _ldiv_t ldiv_t;
struct _lldiv_t {
    long long quot;
    long long rem;
};
typedef struct _lldiv_t lldiv_t;
int abs(int _Number) __attribute__((nothrow)) __attribute__((const));
long labs(long _Number) __attribute__((nothrow)) __attribute__((const));
long long llabs(long long _Number) __attribute__((nothrow)) __attribute__((const));
long long _abs64(long long _Number);
unsigned short _byteswap_ushort(unsigned short _Number);
unsigned long _byteswap_ulong(unsigned long _Number);
unsigned long long _byteswap_uint64(unsigned long long _Number);
div_t div(int _Numerator, int _Denominator);
ldiv_t ldiv(long _Numerator, long _Denominator);
lldiv_t lldiv(long long _Numerator, long long _Denominator);
unsigned int _rotl(unsigned int _Value, int _Shift);
unsigned long _lrotl(unsigned long _Value, int _Shift);
unsigned long long _rotl64(unsigned long long _Value, int _Shift);
unsigned int _rotr(unsigned int _Value, int _Shift);
unsigned long _lrotr(unsigned long _Value, int _Shift);
unsigned long long _rotr64(unsigned long long _Value, int _Shift);
void srand(unsigned int _Seed);
int rand();
struct {
    unsigned char ld[10];
} typedef _LDOUBLE;
struct {
    double x;
} typedef _CRT_DOUBLE;
struct {
    float f;
} typedef _CRT_FLOAT;
struct {
    long double x;
} typedef _LONGDOUBLE;
struct {
    unsigned char ld12[12];
} typedef _LDBL12;
double atof(const char *_String);
int atoi(const char *_String);
long atol(const char *_String);
long long atoll(const char *_String);
long long _atoi64(const char *_String);
double _atof_l(const char *_String, _locale_t _Locale);
int _atoi_l(const char *_String, _locale_t _Locale);
long _atol_l(const char *_String, _locale_t _Locale);
long long _atoll_l(const char *_String, _locale_t _Locale);
long long _atoi64_l(const char *_String, _locale_t _Locale);
int _atoflt(_CRT_FLOAT *_Result, const char *_String);
int _atodbl(_CRT_DOUBLE *_Result, char *_String);
int _atoldbl(_LDOUBLE *_Result, char *_String);
int _atoflt_l(_CRT_FLOAT *_Result, const char *_String, _locale_t _Locale);
int _atodbl_l(_CRT_DOUBLE *_Result, char *_String, _locale_t _Locale);
int _atoldbl_l(_LDOUBLE *_Result, char *_String, _locale_t _Locale);
float strtof(const char *_String, char **_EndPtr);
float _strtof_l(const char *_String, char **_EndPtr, _locale_t _Locale);
double strtod(const char *_String, char **_EndPtr);
double _strtod_l(const char *_String, char **_EndPtr, _locale_t _Locale);
long double strtold(const char *_String, char **_EndPtr);
long double _strtold_l(const char *_String, char **_EndPtr, _locale_t _Locale);
long strtol(const char *_String, char **_EndPtr, int _Radix);
long _strtol_l(const char *_String, char **_EndPtr, int _Radix, _locale_t _Locale);
long long strtoll(const char *_String, char **_EndPtr, int _Radix);
long long _strtoll_l(const char *_String, char **_EndPtr, int _Radix, _locale_t _Locale);
unsigned long strtoul(const char *_String, char **_EndPtr, int _Radix);
unsigned long _strtoul_l(const char *_String, char **_EndPtr, int _Radix, _locale_t _Locale);
unsigned long long strtoull(const char *_String, char **_EndPtr, int _Radix);
unsigned long long _strtoull_l(const char *_String, char **_EndPtr, int _Radix, _locale_t _Locale);
long long _strtoi64(const char *_String, char **_EndPtr, int _Radix);
long long _strtoi64_l(const char *_String, char **_EndPtr, int _Radix, _locale_t _Locale);
unsigned long long _strtoui64(const char *_String, char **_EndPtr, int _Radix);
unsigned long long _strtoui64_l(const char *_String, char **_EndPtr, int _Radix, _locale_t _Locale);
errno_t _itoa_s(int _Value, char *_Buffer, size_t _BufferCount, int _Radix);
char *_itoa(int _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _itoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ltoa_s(long _Value, char *_Buffer, size_t _BufferCount, int _Radix);
char *_ltoa(long _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ltoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ultoa_s(unsigned long _Value, char *_Buffer, size_t _BufferCount, int _Radix);
char *_ultoa(unsigned long _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ultoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _i64toa_s(long long _Value, char *_Buffer, size_t _BufferCount, int _Radix);
char *_i64toa(long long _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _i64toa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ui64toa_s(unsigned long long _Value, char *_Buffer, size_t _BufferCount, int _Radix);
char *_ui64toa(unsigned long long _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ui64toa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _ecvt_s(char *_Buffer, size_t _BufferCount, double _Value, int _DigitCount, int *_PtDec, int *_PtSign);
char *_ecvt(double _Value, int _DigitCount, int *_PtDec, int *_PtSign) __declspec(deprecated("This function or variable may be unsafe. Consider using _ecvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _fcvt_s(char *_Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int *_PtDec, int *_PtSign);
char *_fcvt(double _Value, int _FractionalDigitCount, int *_PtDec, int *_PtSign) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _gcvt_s(char *_Buffer, size_t _BufferCount, double _Value, int _DigitCount);
char *_gcvt(double _Value, int _DigitCount, char *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using _gcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int ___mb_cur_max_func();
int ___mb_cur_max_l_func(_locale_t _Locale);
int mblen(const char *_Ch, size_t _MaxCount);
int _mblen_l(const char *_Ch, size_t _MaxCount, _locale_t _Locale);
size_t _mbstrlen(const char *_String);
size_t _mbstrlen_l(const char *_String, _locale_t _Locale);
size_t _mbstrnlen(const char *_String, size_t _MaxCount);
size_t _mbstrnlen_l(const char *_String, size_t _MaxCount, _locale_t _Locale);
int mbtowc(wchar_t *_DstCh, const char *_SrcCh, size_t _SrcSizeInBytes);
int _mbtowc_l(wchar_t *_DstCh, const char *_SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale);
errno_t mbstowcs_s(size_t *_PtNumOfCharConverted, wchar_t *_DstBuf, size_t _SizeInWords, const char *_SrcBuf, size_t _MaxCount);
size_t mbstowcs(wchar_t *_Dest, const char *_Source, size_t _MaxCount) __declspec(deprecated("This function or variable may be unsafe. Consider using mbstowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using mbstowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _mbstowcs_s_l(size_t *_PtNumOfCharConverted, wchar_t *_DstBuf, size_t _SizeInWords, const char *_SrcBuf, size_t _MaxCount, _locale_t _Locale);
size_t _mbstowcs_l(wchar_t *_Dest, const char *_Source, size_t _MaxCount, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _mbstowcs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _mbstowcs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int wctomb(char *_MbCh, wchar_t _WCh) __declspec(deprecated("This function or variable may be unsafe. Consider using wctomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using wctomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int _wctomb_l(char *_MbCh, wchar_t _WCh, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _wctomb_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wctomb_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t wctomb_s(int *_SizeConverted, char *_MbCh, rsize_t _SizeInBytes, wchar_t _WCh);
errno_t _wctomb_s_l(int *_SizeConverted, char *_MbCh, size_t _SizeInBytes, wchar_t _WCh, _locale_t _Locale);
errno_t wcstombs_s(size_t *_PtNumOfCharConverted, char *_Dst, size_t _DstSizeInBytes, const wchar_t *_Src, size_t _MaxCountInBytes);
size_t wcstombs(char *_Dest, const wchar_t *_Source, size_t _MaxCount) __declspec(deprecated("This function or variable may be unsafe. Consider using wcstombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using wcstombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wcstombs_s_l(size_t *_PtNumOfCharConverted, char *_Dst, size_t _DstSizeInBytes, const wchar_t *_Src, size_t _MaxCountInBytes, _locale_t _Locale);
size_t _wcstombs_l(char *_Dest, const wchar_t *_Source, size_t _MaxCount, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcstombs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcstombs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
char *_fullpath(char *_Buffer, const char *_Path, size_t _BufferCount);
errno_t _makepath_s(char *_Buffer, size_t _BufferCount, const char *_Drive, const char *_Dir, const char *_Filename, const char *_Ext);
void _makepath(char *_Buffer, const char *_Drive, const char *_Dir, const char *_Filename, const char *_Ext) __declspec(deprecated("This function or variable may be unsafe. Consider using _makepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _makepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
void _splitpath(const char *_FullPath, char *_Drive, char *_Dir, char *_Filename, char *_Ext) __declspec(deprecated("This function or variable may be unsafe. Consider using _splitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _splitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _splitpath_s(const char *_FullPath, char *_Drive, size_t _DriveCount, char *_Dir, size_t _DirCount, char *_Filename, size_t _FilenameCount, char *_Ext, size_t _ExtCount);
errno_t getenv_s(size_t *_RequiredCount, char *_Buffer, rsize_t _BufferCount, const char *_VarName);
int *__p___argc();
char ***__p___argv();
wchar_t ***__p___wargv();
char ***__p__environ();
wchar_t ***__p__wenviron();
char *getenv(const char *_VarName) __declspec(deprecated("This function or variable may be unsafe. Consider using _dupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _dupenv_s(char **_Buffer, size_t *_BufferCount, const char *_VarName);
int system(const char *_Command);
int _putenv(const char *_EnvString);
errno_t _putenv_s(const char *_Name, const char *_Value);
errno_t _searchenv_s(const char *_Filename, const char *_VarName, char *_Buffer, size_t _BufferCount);
void _searchenv(const char *_Filename, const char *_VarName, char *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using _searchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _searchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
void _seterrormode(int _Mode) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode instead. See online help for details.")) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode instead. See online help for details."));
void _beep(unsigned int _Frequency, unsigned int _Duration) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. See online help for details.")) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. See online help for details."));
void _sleep(unsigned long _Duration) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. See online help for details.")) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. See online help for details."));
char *ecvt(double _Value, int _DigitCount, int *_PtDec, int *_PtSign) __declspec(deprecated("This function or variable may be unsafe. Consider using _ecvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details."));
char *fcvt(double _Value, int _FractionalDigitCount, int *_PtDec, int *_PtSign) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details."));
char *gcvt(double _Value, int _DigitCount, char *_DstBuf) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details."));
char *itoa(int _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _itoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details."));
char *ltoa(long _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ltoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details."));
void swab(char *_Buf1, char *_Buf2, int _SizeInBytes) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details."));
char *ultoa(unsigned long _Value, char *_Buffer, int _Radix) __declspec(deprecated("This function or variable may be unsafe. Consider using _ultoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details."));
int putenv(const char *_EnvString) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details."));
_onexit_t onexit(_onexit_t _Func);
struct _exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
struct _complex {
    double x;
    double y;
};
typedef float float_t;
typedef double double_t;
extern const double _HUGE;
void _fperrraise(int _Except);
short _dclass(double _X);
short _ldclass(long double _X);
short _fdclass(float _X);
int _dsign(double _X);
int _ldsign(long double _X);
int _fdsign(float _X);
int _dpcomp(double _X, double _Y);
int _ldpcomp(long double _X, long double _Y);
int _fdpcomp(float _X, float _Y);
short _dtest(double *_Px);
short _ldtest(long double *_Px);
short _fdtest(float *_Px);
short _d_int(double *_Px, short _Xexp);
short _ld_int(long double *_Px, short _Xexp);
short _fd_int(float *_Px, short _Xexp);
short _dscale(double *_Px, long _Lexp);
short _ldscale(long double *_Px, long _Lexp);
short _fdscale(float *_Px, long _Lexp);
short _dunscale(short *_Pex, double *_Px);
short _ldunscale(short *_Pex, long double *_Px);
short _fdunscale(short *_Pex, float *_Px);
short _dexp(double *_Px, double _Y, long _Eoff);
short _ldexp(long double *_Px, long double _Y, long _Eoff);
short _fdexp(float *_Px, float _Y, long _Eoff);
short _dnorm(unsigned short *_Ps);
short _fdnorm(unsigned short *_Ps);
double _dpoly(double _X, const double *_Tab, int _N);
long double _ldpoly(long double _X, const long double *_Tab, int _N);
float _fdpoly(float _X, const float *_Tab, int _N);
double _dlog(double _X, int _Baseflag);
long double _ldlog(long double _X, int _Baseflag);
float _fdlog(float _X, int _Baseflag);
double _dsin(double _X, unsigned int _Qoff);
long double _ldsin(long double _X, unsigned int _Qoff);
float _fdsin(float _X, unsigned int _Qoff);
union {
    unsigned short _Sh[4];
    double _Val;
} typedef _double_val;
union {
    unsigned short _Sh[2];
    float _Val;
} typedef _float_val;
union {
    unsigned short _Sh[4];
    long double _Val;
} typedef _ldouble_val;
union {
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} typedef _float_const;
extern const _float_const _Denorm_C;
extern const _float_const _Inf_C;
extern const _float_const _Nan_C;
extern const _float_const _Snan_C;
extern const _float_const _Hugeval_C;
extern const _float_const _FDenorm_C;
extern const _float_const _FInf_C;
extern const _float_const _FNan_C;
extern const _float_const _FSnan_C;
extern const _float_const _LDenorm_C;
extern const _float_const _LInf_C;
extern const _float_const _LNan_C;
extern const _float_const _LSnan_C;
extern const _float_const _Eps_C;
extern const _float_const _Rteps_C;
extern const _float_const _FEps_C;
extern const _float_const _FRteps_C;
extern const _float_const _LEps_C;
extern const _float_const _LRteps_C;
extern const double _Zero_C;
extern const double _Xbig_C;
extern const float _FZero_C;
extern const float _FXbig_C;
extern const long double _LZero_C;
extern const long double _LXbig_C;
int abs(int _X) __attribute__((nothrow)) __attribute__((const));
long labs(long _X) __attribute__((nothrow)) __attribute__((const));
long long llabs(long long _X) __attribute__((nothrow)) __attribute__((const));
double acos(double _X) __attribute__((nothrow));
double asin(double _X) __attribute__((nothrow));
double atan(double _X) __attribute__((nothrow));
double atan2(double _Y, double _X) __attribute__((nothrow));
double cos(double _X) __attribute__((nothrow));
double cosh(double _X) __attribute__((nothrow));
double exp(double _X) __attribute__((nothrow));
double fabs(double _X) __attribute__((nothrow)) __attribute__((const));
double fmod(double _X, double _Y) __attribute__((nothrow));
double log(double _X) __attribute__((nothrow));
double log10(double _X) __attribute__((nothrow));
double pow(double _X, double _Y) __attribute__((nothrow));
double sin(double _X) __attribute__((nothrow));
double sinh(double _X) __attribute__((nothrow));
double sqrt(double _X) __attribute__((nothrow));
double tan(double _X) __attribute__((nothrow));
double tanh(double _X) __attribute__((nothrow));
double acosh(double _X) __attribute__((nothrow));
double asinh(double _X) __attribute__((nothrow));
double atanh(double _X) __attribute__((nothrow));
double atof(const char *_String);
double _atof_l(const char *_String, _locale_t _Locale);
double _cabs(struct _complex _Complex_value);
double cbrt(double _X) __attribute__((nothrow));
double ceil(double _X) __attribute__((nothrow)) __attribute__((const));
double _chgsign(double _X);
double copysign(double _Number, double _Sign) __attribute__((nothrow)) __attribute__((const));
double _copysign(double _Number, double _Sign);
double erf(double _X) __attribute__((nothrow));
double erfc(double _X) __attribute__((nothrow));
double exp2(double _X) __attribute__((nothrow));
double expm1(double _X) __attribute__((nothrow));
double fdim(double _X, double _Y) __attribute__((nothrow));
double floor(double _X) __attribute__((nothrow)) __attribute__((const));
double fma(double _X, double _Y, double _Z) __attribute__((nothrow));
double fmax(double _X, double _Y) __attribute__((nothrow)) __attribute__((const));
double fmin(double _X, double _Y) __attribute__((nothrow)) __attribute__((const));
double frexp(double _X, int *_Y) __attribute__((nothrow));
double hypot(double _X, double _Y) __attribute__((nothrow));
double _hypot(double _X, double _Y);
int ilogb(double _X) __attribute__((nothrow));
double ldexp(double _X, int _Y) __attribute__((nothrow));
double lgamma(double _X) __attribute__((nothrow));
long long llrint(double _X) __attribute__((nothrow));
long long llround(double _X) __attribute__((nothrow));
double log1p(double _X) __attribute__((nothrow));
double log2(double _X) __attribute__((nothrow));
double logb(double _X) __attribute__((nothrow));
long lrint(double _X) __attribute__((nothrow));
long lround(double _X) __attribute__((nothrow));
int _matherr(struct _exception *_Except);
double modf(double _X, double *_Y) __attribute__((nothrow));
double nan(const char *_X) __attribute__((nothrow)) __attribute__((const));
double nearbyint(double _X) __attribute__((nothrow)) __attribute__((const));
double nextafter(double _X, double _Y) __attribute__((nothrow));
double nexttoward(double _X, long double _Y) __attribute__((nothrow));
double remainder(double _X, double _Y) __attribute__((nothrow));
double remquo(double _X, double _Y, int *_Z);
double rint(double _X) __attribute__((nothrow)) __attribute__((const));
double round(double _X) __attribute__((nothrow)) __attribute__((const));
double scalbln(double _X, long _Y) __attribute__((nothrow));
double scalbn(double _X, int _Y) __attribute__((nothrow));
double tgamma(double _X) __attribute__((nothrow));
double trunc(double _X) __attribute__((nothrow)) __attribute__((const));
double _j0(double _X);
double _j1(double _X);
double _jn(int _X, double _Y);
double _y0(double _X);
double _y1(double _X);
double _yn(int _X, double _Y);
float acoshf(float _X) __attribute__((nothrow));
float asinhf(float _X) __attribute__((nothrow));
float atanhf(float _X) __attribute__((nothrow));
float cbrtf(float _X) __attribute__((nothrow));
float _chgsignf(float _X);
float copysignf(float _Number, float _Sign) __attribute__((nothrow)) __attribute__((const));
float _copysignf(float _Number, float _Sign);
float erff(float _X) __attribute__((nothrow));
float erfcf(float _X) __attribute__((nothrow));
float expm1f(float _X) __attribute__((nothrow));
float exp2f(float _X) __attribute__((nothrow));
float fdimf(float _X, float _Y) __attribute__((nothrow));
float fmaf(float _X, float _Y, float _Z) __attribute__((nothrow));
float fmaxf(float _X, float _Y) __attribute__((nothrow)) __attribute__((const));
float fminf(float _X, float _Y) __attribute__((nothrow)) __attribute__((const));
float _hypotf(float _X, float _Y);
int ilogbf(float _X) __attribute__((nothrow));
float lgammaf(float _X) __attribute__((nothrow));
long long llrintf(float _X) __attribute__((nothrow));
long long llroundf(float _X) __attribute__((nothrow));
float log1pf(float _X) __attribute__((nothrow));
float log2f(float _X) __attribute__((nothrow));
float logbf(float _X) __attribute__((nothrow));
long lrintf(float _X) __attribute__((nothrow));
long lroundf(float _X) __attribute__((nothrow));
float nanf(const char *_X) __attribute__((nothrow)) __attribute__((const));
float nearbyintf(float _X) __attribute__((nothrow)) __attribute__((const));
float nextafterf(float _X, float _Y) __attribute__((nothrow));
float nexttowardf(float _X, long double _Y) __attribute__((nothrow));
float remainderf(float _X, float _Y) __attribute__((nothrow));
float remquof(float _X, float _Y, int *_Z);
float rintf(float _X) __attribute__((nothrow)) __attribute__((const));
float roundf(float _X) __attribute__((nothrow)) __attribute__((const));
float scalblnf(float _X, long _Y) __attribute__((nothrow));
float scalbnf(float _X, int _Y) __attribute__((nothrow));
float tgammaf(float _X) __attribute__((nothrow));
float truncf(float _X) __attribute__((nothrow)) __attribute__((const));
float _logbf(float _X);
float _nextafterf(float _X, float _Y);
int _finitef(float _X);
int _isnanf(float _X);
int _fpclassf(float _X);
int _set_FMA3_enable(int _Flag);
int _get_FMA3_enable();
float acosf(float _X) __attribute__((nothrow));
float asinf(float _X) __attribute__((nothrow));
float atan2f(float _Y, float _X) __attribute__((nothrow));
float atanf(float _X) __attribute__((nothrow));
float ceilf(float _X) __attribute__((nothrow)) __attribute__((const));
float cosf(float _X) __attribute__((nothrow));
float coshf(float _X) __attribute__((nothrow));
float expf(float _X) __attribute__((nothrow));
inline float fabsf(float _X) __attribute__((nothrow)) __attribute__((const)) {
    return (float)fabs(_X);
}


float floorf(float _X) __attribute__((nothrow)) __attribute__((const));
float fmodf(float _X, float _Y) __attribute__((nothrow));
inline float frexpf(float _X, int *_Y) __attribute__((nothrow)) {
    return (float)frexp(_X, _Y);
}


inline float hypotf(float _X, float _Y) __attribute__((nothrow)) {
    return _hypotf(_X, _Y);
}


inline float ldexpf(float _X, int _Y) __attribute__((nothrow)) {
    return (float)ldexp(_X, _Y);
}


float log10f(float _X) __attribute__((nothrow));
float logf(float _X) __attribute__((nothrow));
float modff(float _X, float *_Y) __attribute__((nothrow));
float powf(float _X, float _Y) __attribute__((nothrow));
float sinf(float _X) __attribute__((nothrow));
float sinhf(float _X) __attribute__((nothrow));
float sqrtf(float _X) __attribute__((nothrow));
float tanf(float _X) __attribute__((nothrow));
float tanhf(float _X) __attribute__((nothrow));
long double acoshl(long double _X) __attribute__((nothrow));
inline long double acosl(long double _X) __attribute__((nothrow)) {
    return acos((double)_X);
}


long double asinhl(long double _X) __attribute__((nothrow));
inline long double asinl(long double _X) __attribute__((nothrow)) {
    return asin((double)_X);
}


inline long double atan2l(long double _Y, long double _X) __attribute__((nothrow)) {
    return atan2((double)_Y, (double)_X);
}


long double atanhl(long double _X) __attribute__((nothrow));
inline long double atanl(long double _X) __attribute__((nothrow)) {
    return atan((double)_X);
}


long double cbrtl(long double _X) __attribute__((nothrow));
inline long double ceill(long double _X) __attribute__((nothrow)) __attribute__((const)) {
    return ceil((double)_X);
}


inline long double _chgsignl(long double _X) {
    return _chgsign((double)_X);
}


long double copysignl(long double _Number, long double _Sign) __attribute__((nothrow)) __attribute__((const));
inline long double _copysignl(long double _Number, long double _Sign) {
    return _copysign((double)_Number, (double)_Sign);
}


inline long double coshl(long double _X) __attribute__((nothrow)) {
    return cosh((double)_X);
}


inline long double cosl(long double _X) __attribute__((nothrow)) {
    return cos((double)_X);
}


long double erfl(long double _X) __attribute__((nothrow));
long double erfcl(long double _X) __attribute__((nothrow));
inline long double expl(long double _X) __attribute__((nothrow)) {
    return exp((double)_X);
}


long double exp2l(long double _X) __attribute__((nothrow));
long double expm1l(long double _X) __attribute__((nothrow));
inline long double fabsl(long double _X) __attribute__((nothrow)) __attribute__((const)) {
    return fabs((double)_X);
}


long double fdiml(long double _X, long double _Y) __attribute__((nothrow));
inline long double floorl(long double _X) __attribute__((nothrow)) __attribute__((const)) {
    return floor((double)_X);
}


long double fmal(long double _X, long double _Y, long double _Z) __attribute__((nothrow));
long double fmaxl(long double _X, long double _Y) __attribute__((nothrow)) __attribute__((const));
long double fminl(long double _X, long double _Y) __attribute__((nothrow)) __attribute__((const));
inline long double fmodl(long double _X, long double _Y) __attribute__((nothrow)) {
    return fmod((double)_X, (double)_Y);
}


inline long double frexpl(long double _X, int *_Y) __attribute__((nothrow)) {
    return frexp((double)_X, _Y);
}


int ilogbl(long double _X) __attribute__((nothrow));
inline long double _hypotl(long double _X, long double _Y) {
    return _hypot((double)_X, (double)_Y);
}


inline long double hypotl(long double _X, long double _Y) __attribute__((nothrow)) {
    return _hypot((double)_X, (double)_Y);
}


inline long double ldexpl(long double _X, int _Y) __attribute__((nothrow)) {
    return ldexp((double)_X, _Y);
}


long double lgammal(long double _X) __attribute__((nothrow));
long long llrintl(long double _X) __attribute__((nothrow));
long long llroundl(long double _X) __attribute__((nothrow));
inline long double logl(long double _X) __attribute__((nothrow)) {
    return log((double)_X);
}


inline long double log10l(long double _X) __attribute__((nothrow)) {
    return log10((double)_X);
}


long double log1pl(long double _X) __attribute__((nothrow));
long double log2l(long double _X) __attribute__((nothrow));
long double logbl(long double _X) __attribute__((nothrow));
long lrintl(long double _X) __attribute__((nothrow));
long lroundl(long double _X) __attribute__((nothrow));
inline long double modfl(long double _X, long double *_Y) __attribute__((nothrow)) {
    double _F, _I;
    _F = modf((double)_X, &_I);
    *_Y = _I;
    return _F;
}


long double nanl(const char *_X) __attribute__((nothrow)) __attribute__((const));
long double nearbyintl(long double _X) __attribute__((nothrow)) __attribute__((const));
long double nextafterl(long double _X, long double _Y) __attribute__((nothrow));
long double nexttowardl(long double _X, long double _Y) __attribute__((nothrow));
inline long double powl(long double _X, long double _Y) __attribute__((nothrow)) {
    return pow((double)_X, (double)_Y);
}


long double remainderl(long double _X, long double _Y) __attribute__((nothrow));
long double remquol(long double _X, long double _Y, int *_Z);
long double rintl(long double _X) __attribute__((nothrow)) __attribute__((const));
long double roundl(long double _X) __attribute__((nothrow)) __attribute__((const));
long double scalblnl(long double _X, long _Y) __attribute__((nothrow));
long double scalbnl(long double _X, int _Y) __attribute__((nothrow));
inline long double sinhl(long double _X) __attribute__((nothrow)) {
    return sinh((double)_X);
}


inline long double sinl(long double _X) __attribute__((nothrow)) {
    return sin((double)_X);
}


inline long double sqrtl(long double _X) __attribute__((nothrow)) {
    return sqrt((double)_X);
}


inline long double tanhl(long double _X) __attribute__((nothrow)) {
    return tanh((double)_X);
}


inline long double tanl(long double _X) __attribute__((nothrow)) {
    return tan((double)_X);
}


long double tgammal(long double _X) __attribute__((nothrow));
long double truncl(long double _X) __attribute__((nothrow)) __attribute__((const));
extern double HUGE;
double j0(double _X) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details."));
double j1(double _X) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details."));
double jn(int _X, double _Y) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details."));
double y0(double _X) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details."));
double y1(double _X) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details."));
double yn(int _X, double _Y) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details."));
int *__acrt_iob_func(unsigned int _Ix);
wint_t fgetwc(int *_Stream);
wint_t _fgetwchar();
wint_t fputwc(wchar_t _Character, int *_Stream);
wint_t _fputwchar(wchar_t _Character);
wint_t getwc(int *_Stream);
wint_t getwchar();
wchar_t *fgetws(wchar_t *_Buffer, int _BufferCount, int *_Stream);
int fputws(const wchar_t *_Buffer, int *_Stream);
wchar_t *_getws_s(wchar_t *_Buffer, size_t _BufferCount);
wint_t putwc(wchar_t _Character, int *_Stream);
wint_t putwchar(wchar_t _Character);
int _putws(const wchar_t *_Buffer);
wint_t ungetwc(wint_t _Character, int *_Stream);
int *_wfdopen(int _FileHandle, const wchar_t *_Mode);
int *_wfopen(const wchar_t *_FileName, const wchar_t *_Mode) __declspec(deprecated("This function or variable may be unsafe. Consider using _wfopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wfopen_s(int **_Stream, const wchar_t *_FileName, const wchar_t *_Mode);
int *_wfreopen(const wchar_t *_FileName, const wchar_t *_Mode, int *_OldStream) __declspec(deprecated("This function or variable may be unsafe. Consider using _wfreopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wfreopen_s(int **_Stream, const wchar_t *_FileName, const wchar_t *_Mode, int *_OldStream);
int *_wfsopen(const wchar_t *_FileName, const wchar_t *_Mode, int _ShFlag);
void _wperror(const wchar_t *_ErrorMessage);
int *_wpopen(const wchar_t *_Command, const wchar_t *_Mode);
int _wremove(const wchar_t *_FileName);
wchar_t *_wtempnam(const wchar_t *_Directory, const wchar_t *_FilePrefix);
errno_t _wtmpnam_s(wchar_t *_Buffer, size_t _BufferCount);
wchar_t *_wtmpnam(wchar_t *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using _wtmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
wint_t _fgetwc_nolock(int *_Stream);
wint_t _fputwc_nolock(wchar_t _Character, int *_Stream);
wint_t _getwc_nolock(int *_Stream);
wint_t _putwc_nolock(wchar_t _Character, int *_Stream);
wint_t _ungetwc_nolock(wint_t _Character, int *_Stream);
int __stdio_common_vfwprintf(unsigned long long _Options, int *_Stream, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vfwprintf_s(unsigned long long _Options, int *_Stream, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vfwprintf_p(unsigned long long _Options, int *_Stream, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vfwprintf_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfwprintf(int *const _Stream, const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vfwprintf_s_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfwprintf_s(int *const _Stream, const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vfwprintf_p_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vfwprintf_p(int *const _Stream, const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vwprintf_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vwprintf(const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vwprintf_s_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vwprintf_s(const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vwprintf_p_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vwprintf_p(const wchar_t *const _Format, va_list _ArgList) {
}


inline int _fwprintf_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fwprintf(int *const _Stream, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fwprintf_s_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fwprintf_s(int *const _Stream, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fwprintf_p_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fwprintf_p(int *const _Stream, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _wprintf_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int wprintf(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _wprintf_s_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int wprintf_s(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _wprintf_p_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _wprintf_p(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __stdio_common_vfwscanf(unsigned long long _Options, int *_Stream, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vfwscanf_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfwscanf(int *const _Stream, const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vfwscanf_s_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfwscanf_s(int *const _Stream, const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vwscanf_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vwscanf(const wchar_t *const _Format, va_list _ArgList) {
}


inline int _vwscanf_s_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vwscanf_s(const wchar_t *const _Format, va_list _ArgList) {
}


inline int _fwscanf_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _fwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _fwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fwscanf(int *const _Stream, const wchar_t *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using fwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using fwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fwscanf_s_l(int *const _Stream, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fwscanf_s(int *const _Stream, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _wscanf_l(const wchar_t *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _wscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int wscanf(const wchar_t *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using wscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using wscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _wscanf_s_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int wscanf_s(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __stdio_common_vswprintf(unsigned long long _Options, wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vswprintf_s(unsigned long long _Options, wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vsnwprintf_s(unsigned long long _Options, wchar_t *_Buffer, size_t _BufferCount, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vswprintf_p(unsigned long long _Options, wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vsnwprintf_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsnwprintf_s_l(wchar_t *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsnwprintf_s(wchar_t *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const wchar_t *const _Format, va_list _ArgList) {
    return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
}


inline int _snwprintf(wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
inline int _vsnwprintf(wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, va_list _Args) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
inline int _vsnwprintf(wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    return _vsnwprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vswprintf_c_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vswprintf_c(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, va_list _ArgList) {
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vswprintf_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
}


inline int __vswprintf_l(wchar_t *const _Buffer, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}


inline int _vswprintf(wchar_t *const _Buffer, const wchar_t *const _Format, va_list _ArgList) {
    return _vswprintf_l(_Buffer, (size_t)-1, _Format, ((void *)0), _ArgList);
}


inline int vswprintf(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, va_list _ArgList) {
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vswprintf_s_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int vswprintf_s(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, va_list _ArgList) {
    return _vswprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vswprintf_p_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vswprintf_p(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, va_list _ArgList) {
    return _vswprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vscwprintf_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vscwprintf(const wchar_t *const _Format, va_list _ArgList) {
    return _vscwprintf_l(_Format, ((void *)0), _ArgList);
}


inline int _vscwprintf_p_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vscwprintf_p(const wchar_t *const _Format, va_list _ArgList) {
    return _vscwprintf_p_l(_Format, ((void *)0), _ArgList);
}


inline int __swprintf_l(wchar_t *const _Buffer, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swprintf_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swprintf(wchar_t *const _Buffer, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = __vswprintf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int swprintf(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int __swprintf_l(wchar_t *_Buffer, const wchar_t *_Format, _locale_t _Locale, ...);
inline int __vswprintf_l(wchar_t *_Buffer, const wchar_t *_Format, _locale_t _Locale, va_list _Args);
inline int _swprintf(wchar_t *_Buffer, const wchar_t *_Format, ...);
inline int _vswprintf(wchar_t *_Buffer, const wchar_t *_Format, va_list _Args);
inline int _swprintf_s_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int swprintf_s(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swprintf_p_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swprintf_p(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swprintf_c_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swprintf_c(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwprintf_l(wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwprintf(wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwprintf_s_l(wchar_t *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwprintf_s(wchar_t *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scwprintf_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscwprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scwprintf(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscwprintf_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scwprintf_p_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscwprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scwprintf_p(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscwprintf_p_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __stdio_common_vswscanf(unsigned long long _Options, const wchar_t *_Buffer, size_t _BufferCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vswscanf_l(const wchar_t *const _Buffer, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vswscanf(const wchar_t *_Buffer, const wchar_t *_Format, va_list _ArgList) {
    return _vswscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
}


inline int _vswscanf_s_l(const wchar_t *const _Buffer, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vswscanf_s(const wchar_t *const _Buffer, const wchar_t *const _Format, va_list _ArgList) {
    return _vswscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
}


inline int _vsnwscanf_l(const wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
}


inline int _vsnwscanf_s_l(const wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _swscanf_l(const wchar_t *const _Buffer, const wchar_t *const _Format, _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _swscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _swscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int swscanf(const wchar_t *const _Buffer, const wchar_t *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using swscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using swscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _swscanf_s_l(const wchar_t *const _Buffer, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int swscanf_s(const wchar_t *const _Buffer, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwscanf_l(const wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwscanf(const wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwscanf_s_l(const wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snwscanf_s(const wchar_t *const _Buffer, const size_t _BufferCount, const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


typedef long long fpos_t;
errno_t _get_stream_buffer_pointers(int *_Stream, char ***_Base, char ***_Pointer, int **_Count);
errno_t clearerr_s(int *_Stream);
errno_t fopen_s(int **_Stream, const char *_FileName, const char *_Mode);
size_t fread_s(void *_Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, int *_Stream);
errno_t freopen_s(int **_Stream, const char *_FileName, const char *_Mode, int *_OldStream);
char *gets_s(char *_Buffer, rsize_t _Size);
errno_t tmpfile_s(int **_Stream);
errno_t tmpnam_s(char *_Buffer, rsize_t _Size);
void clearerr(int *_Stream);
int fclose(int *_Stream);
int _fcloseall();
int *_fdopen(int _FileHandle, const char *_Mode);
int feof(int *_Stream);
int ferror(int *_Stream);
int fflush(int *_Stream);
int fgetc(int *_Stream);
int _fgetchar();
int fgetpos(int *_Stream, fpos_t *_Position);
char *fgets(char *_Buffer, int _MaxCount, int *_Stream);
int _fileno(int *_Stream);
int _flushall();
int *fopen(const char *_FileName, const char *_Mode) __declspec(deprecated("This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int fputc(int _Character, int *_Stream);
int _fputchar(int _Character);
int fputs(const char *_Buffer, int *_Stream);
size_t fread(void *_Buffer, size_t _ElementSize, size_t _ElementCount, int *_Stream);
int *freopen(const char *_FileName, const char *_Mode, int *_Stream) __declspec(deprecated("This function or variable may be unsafe. Consider using freopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int *_fsopen(const char *_FileName, const char *_Mode, int _ShFlag);
int fsetpos(int *_Stream, const fpos_t *_Position);
int fseek(int *_Stream, long _Offset, int _Origin);
int _fseeki64(int *_Stream, long long _Offset, int _Origin);
long ftell(int *_Stream);
long long _ftelli64(int *_Stream);
size_t fwrite(const void *_Buffer, size_t _ElementSize, size_t _ElementCount, int *_Stream);
int getc(int *_Stream);
int getchar();
int _getmaxstdio();
int _getw(int *_Stream);
void perror(const char *_ErrorMessage);
int _pclose(int *_Stream);
int *_popen(const char *_Command, const char *_Mode);
int putc(int _Character, int *_Stream);
int putchar(int _Character);
int puts(const char *_Buffer);
int _putw(int _Word, int *_Stream);
int remove(const char *_FileName);
int rename(const char *_OldFileName, const char *_NewFileName);
int _unlink(const char *_FileName);
int unlink(const char *_FileName) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details."));
void rewind(int *_Stream);
int _rmtmp();
void setbuf(int *_Stream, char *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using setvbuf instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using setvbuf instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int _setmaxstdio(int _Maximum);
int setvbuf(int *_Stream, char *_Buffer, int _Mode, size_t _Size);
char *_tempnam(const char *_DirectoryName, const char *_FilePrefix);
int *tmpfile() __declspec(deprecated("This function or variable may be unsafe. Consider using tmpfile_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
char *tmpnam(char *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using tmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int ungetc(int _Character, int *_Stream);
void _lock_file(int *_Stream);
void _unlock_file(int *_Stream);
int _fclose_nolock(int *_Stream);
int _fflush_nolock(int *_Stream);
int _fgetc_nolock(int *_Stream);
int _fputc_nolock(int _Character, int *_Stream);
size_t _fread_nolock(void *_Buffer, size_t _ElementSize, size_t _ElementCount, int *_Stream);
size_t _fread_nolock_s(void *_Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, int *_Stream);
int _fseek_nolock(int *_Stream, long _Offset, int _Origin);
int _fseeki64_nolock(int *_Stream, long long _Offset, int _Origin);
long _ftell_nolock(int *_Stream);
long long _ftelli64_nolock(int *_Stream);
size_t _fwrite_nolock(const void *_Buffer, size_t _ElementSize, size_t _ElementCount, int *_Stream);
int _getc_nolock(int *_Stream);
int _putc_nolock(int _Character, int *_Stream);
int _ungetc_nolock(int _Character, int *_Stream);
int *__p__commode();
int __stdio_common_vfprintf(unsigned long long _Options, int *_Stream, const char *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vfprintf_s(unsigned long long _Options, int *_Stream, const char *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vfprintf_p(unsigned long long _Options, int *_Stream, const char *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vfprintf_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vfprintf_s_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfprintf_s(int *const _Stream, const char *const _Format, va_list _ArgList) {
}


inline int _vfprintf_p_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vfprintf_p(int *const _Stream, const char *const _Format, va_list _ArgList) {
}


inline int _vprintf_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vprintf(const char *const _Format, va_list _ArgList) __attribute__((format(printf, 1, 0))) {
}


inline int _vprintf_s_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vprintf_s(const char *const _Format, va_list _ArgList) {
}


inline int _vprintf_p_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vprintf_p(const char *const _Format, va_list _ArgList) {
}


inline int _fprintf_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fprintf(int *const _Stream, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int _set_printf_count_output(int _Value);
int _get_printf_count_output();
inline int _fprintf_s_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fprintf_s(int *const _Stream, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fprintf_p_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fprintf_p(int *const _Stream, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _printf_l(const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int printf(const char *const _Format, ...) __attribute__((format(printf, 1, 2))) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _printf_s_l(const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int printf_s(const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _printf_p_l(const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _printf_p(const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __stdio_common_vfscanf(unsigned long long _Options, int *_Stream, const char *_Format, _locale_t _Locale, va_list _Arglist);
inline int _vfscanf_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfscanf(int *const _Stream, const char *const _Format, va_list _ArgList) {
}


inline int _vfscanf_s_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vfscanf_s(int *const _Stream, const char *const _Format, va_list _ArgList) {
}


inline int _vscanf_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vscanf(const char *const _Format, va_list _ArgList) __attribute__((format(scanf, 1, 0))) {
}


inline int _vscanf_s_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vscanf_s(const char *const _Format, va_list _ArgList) {
}


inline int _fscanf_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _fscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _fscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fscanf(int *const _Stream, const char *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _fscanf_s_l(int *const _Stream, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int fscanf_s(int *const _Stream, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scanf_l(const char *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _scanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _scanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int scanf(const char *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __attribute__((format(scanf, 1, 2))) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scanf_s_l(const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int scanf_s(const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __stdio_common_vsprintf(unsigned long long _Options, char *_Buffer, size_t _BufferCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vsprintf_s(unsigned long long _Options, char *_Buffer, size_t _BufferCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vsnprintf_s(unsigned long long _Options, char *_Buffer, size_t _BufferCount, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
int __stdio_common_vsprintf_p(unsigned long long _Options, char *_Buffer, size_t _BufferCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vsnprintf_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsnprintf(char *const _Buffer, const size_t _BufferCount, const char *const _Format, va_list _ArgList) {
    return _vsnprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int vsnprintf(char *const _Buffer, const size_t _BufferCount, const char *const _Format, va_list _ArgList) __attribute__((format(printf, 3, 0))) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsprintf_l(char *const _Buffer, const char *const _Format, const _locale_t _Locale, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vsprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    return _vsnprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}


inline int vsprintf(char *const _Buffer, const char *const _Format, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __attribute__((format(printf, 2, 0))) {
    return _vsnprintf_l(_Buffer, (size_t)-1, _Format, ((void *)0), _ArgList);
}


inline int _vsprintf_s_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int vsprintf_s(char *const _Buffer, const size_t _BufferCount, const char *const _Format, va_list _ArgList) {
    return _vsprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vsprintf_p_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsprintf_p(char *const _Buffer, const size_t _BufferCount, const char *const _Format, va_list _ArgList) {
    return _vsprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _vsnprintf_s_l(char *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsnprintf_s(char *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const char *const _Format, va_list _ArgList) {
    return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
}


inline int vsnprintf_s(char *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const char *const _Format, va_list _ArgList) {
    return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
}


inline int _vscprintf_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vscprintf(const char *const _Format, va_list _ArgList) {
    return _vscprintf_l(_Format, ((void *)0), _ArgList);
}


inline int _vscprintf_p_l(const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vscprintf_p(const char *const _Format, va_list _ArgList) {
    return _vscprintf_p_l(_Format, ((void *)0), _ArgList);
}


inline int _vsnprintf_c_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
    const int _Result;
    return _Result < 0 ? -1 : _Result;
}


inline int _vsnprintf_c(char *const _Buffer, const size_t _BufferCount, const char *const _Format, va_list _ArgList) {
    return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}


inline int _sprintf_l(char *const _Buffer, const char *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _sprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _sprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int sprintf(char *const _Buffer, const char *const _Format, ...) __attribute__((format(printf, 2, 3))) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsprintf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int sprintf(char *_Buffer, const char *_Format, ...) __attribute__((format(printf, 2, 3)));
int vsprintf(char *_Buffer, const char *_Format, va_list _Args) __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __attribute__((format(printf, 2, 0)));
inline int _sprintf_s_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int sprintf_s(char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _sprintf_p_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _sprintf_p(char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snprintf_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int snprintf(char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) __attribute__((format(printf, 3, 4))) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snprintf(char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int _snprintf(char *_Buffer, size_t _BufferCount, const char *_Format, ...);
int _vsnprintf(char *_Buffer, size_t _BufferCount, const char *_Format, va_list _Args);
inline int _snprintf_c_l(char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snprintf_c(char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snprintf_s_l(char *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snprintf_s(char *const _Buffer, const size_t _BufferCount, const size_t _MaxCount, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scprintf_l(const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scprintf(const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscprintf_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scprintf_p_l(const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _scprintf_p(const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscprintf_p(_Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __stdio_common_vsscanf(unsigned long long _Options, const char *_Buffer, size_t _BufferCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vsscanf_l(const char *const _Buffer, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vsscanf(const char *const _Buffer, const char *const _Format, va_list _ArgList) __attribute__((format(scanf, 2, 0))) {
    return _vsscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
}


inline int _vsscanf_s_l(const char *const _Buffer, const char *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int vsscanf_s(const char *const _Buffer, const char *const _Format, va_list _ArgList) {
    return _vsscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
}


inline int _sscanf_l(const char *const _Buffer, const char *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _sscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _sscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int sscanf(const char *const _Buffer, const char *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __attribute__((format(scanf, 2, 3))) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _sscanf_s_l(const char *const _Buffer, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int sscanf_s(const char *const _Buffer, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = vsscanf_s(_Buffer, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snscanf_l(const char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snscanf(const char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snscanf_s_l(const char *const _Buffer, const size_t _BufferCount, const char *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _snscanf_s(const char *const _Buffer, const size_t _BufferCount, const char *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


char *tempnam(const char *_Directory, const char *_FilePrefix) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for details."));
int fcloseall() __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for details."));
int *fdopen(int _FileHandle, const char *_Format) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details."));
int fgetchar() __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for details."));
int fileno(int *_Stream) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details."));
int flushall() __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for details."));
int fputchar(int _Ch) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for details."));
int getw(int *_Stream) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details."));
int putw(int _Ch, int *_Stream) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details."));
int rmtmp() __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details."));
typedef int FILE;
int std;
errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
unsigned long *__doserrno();
errno_t _set_doserrno(unsigned long _Value);
errno_t _get_doserrno(unsigned long *_Value);
void *memchr(const void *_Buf, int _Val, size_t _MaxCount);
int memcmp(const void *_Buf1, const void *_Buf2, size_t _Size);
void *memcpy(void *_Dst, const void *_Src, size_t _Size);
void *memmove(void *_Dst, const void *_Src, size_t _Size);
void *memset(void *_Dst, int _Val, size_t _Size);
char *strchr(const char *_Str, int _Val);
char *strrchr(const char *_Str, int _Ch);
char *strstr(const char *_Str, const char *_SubStr);
wchar_t *wcschr(const wchar_t *_Str, wchar_t _Ch);
wchar_t *wcsrchr(const wchar_t *_Str, wchar_t _Ch);
wchar_t *wcsstr(const wchar_t *_Str, const wchar_t *_SubStr);
static inline errno_t memcpy_s(void *const _Destination, const rsize_t _DestinationSize, const void *const _Source, const rsize_t _SourceSize) {
    if (_SourceSize == 0) {
        return 0;
    }
    {
        int _Expr_val = !!(_Destination != ((void *)0));
        if (!(_Expr_val)) {
            (*_errno()) = 22;
            _invalid_parameter_noinfo();
            return 22;
        }
    }
    ;
    if (_Source == ((void *)0) || _DestinationSize < _SourceSize) {
        memset(_Destination, 0, _DestinationSize);
        {
            int _Expr_val = !!(_Source != ((void *)0));
            if (!(_Expr_val)) {
                (*_errno()) = 22;
                _invalid_parameter_noinfo();
                return 22;
            }
        }
        ;
        {
            int _Expr_val = !!(_DestinationSize >= _SourceSize);
            if (!(_Expr_val)) {
                (*_errno()) = 34;
                _invalid_parameter_noinfo();
                return 34;
            }
        }
        ;
        return 22;
    }
    memcpy(_Destination, _Source, _SourceSize);
    return 0;
}


static inline errno_t memmove_s(void *const _Destination, const rsize_t _DestinationSize, const void *const _Source, const rsize_t _SourceSize) {
    if (_SourceSize == 0) {
        return 0;
    }
    {
        int _Expr_val = !!(_Destination != ((void *)0));
        if (!(_Expr_val)) {
            (*_errno()) = 22;
            _invalid_parameter_noinfo();
            return 22;
        }
    }
    ;
    {
        int _Expr_val = !!(_Source != ((void *)0));
        if (!(_Expr_val)) {
            (*_errno()) = 22;
            _invalid_parameter_noinfo();
            return 22;
        }
    }
    ;
    {
        int _Expr_val = !!(_DestinationSize >= _SourceSize);
        if (!(_Expr_val)) {
            (*_errno()) = 34;
            _invalid_parameter_noinfo();
            return 34;
        }
    }
    ;
    memmove(_Destination, _Source, _SourceSize);
    return 0;
}


int _memicmp(const void *_Buf1, const void *_Buf2, size_t _Size);
int _memicmp_l(const void *_Buf1, const void *_Buf2, size_t _Size, _locale_t _Locale);
void *memccpy(void *_Dst, const void *_Src, int _Val, size_t _Size) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for details."));
int memicmp(const void *_Buf1, const void *_Buf2, size_t _Size) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for details."));
errno_t wcscat_s(wchar_t *_Destination, rsize_t _SizeInWords, const wchar_t *_Source);
errno_t wcscpy_s(wchar_t *_Destination, rsize_t _SizeInWords, const wchar_t *_Source);
errno_t wcsncat_s(wchar_t *_Destination, rsize_t _SizeInWords, const wchar_t *_Source, rsize_t _MaxCount);
errno_t wcsncpy_s(wchar_t *_Destination, rsize_t _SizeInWords, const wchar_t *_Source, rsize_t _MaxCount);
wchar_t *wcstok_s(wchar_t *_String, const wchar_t *_Delimiter, wchar_t **_Context);
wchar_t *_wcsdup(const wchar_t *_String);
wchar_t *wcscat(wchar_t *_Destination, const wchar_t *_Source) __declspec(deprecated("This function or variable may be unsafe. Consider using wcscat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int wcscmp(const wchar_t *_String1, const wchar_t *_String2);
wchar_t *wcscpy(wchar_t *_Destination, const wchar_t *_Source) __declspec(deprecated("This function or variable may be unsafe. Consider using wcscpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
size_t wcscspn(const wchar_t *_String, const wchar_t *_Control);
size_t wcslen(const wchar_t *_String);
size_t wcsnlen(const wchar_t *_Source, size_t _MaxCount);
static inline size_t wcsnlen_s(const wchar_t *_Source, size_t _MaxCount) {
    return (_Source == 0) ? 0 : wcsnlen(_Source, _MaxCount);
}


wchar_t *wcsncat(wchar_t *_Destination, const wchar_t *_Source, size_t _Count) __declspec(deprecated("This function or variable may be unsafe. Consider using wcsncat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int wcsncmp(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount);
wchar_t *wcsncpy(wchar_t *_Destination, const wchar_t *_Source, size_t _Count) __declspec(deprecated("This function or variable may be unsafe. Consider using wcsncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
wchar_t *wcspbrk(const wchar_t *_String, const wchar_t *_Control);
size_t wcsspn(const wchar_t *_String, const wchar_t *_Control);
wchar_t *wcstok(wchar_t *_String, const wchar_t *_Delimiter, wchar_t **_Context) __declspec(deprecated("This function or variable may be unsafe. Consider using wcstok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
static inline wchar_t *_wcstok(wchar_t *const _String, const wchar_t *const _Delimiter) __declspec(deprecated("This function or variable may be unsafe. Consider using wcstok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    return wcstok(_String, _Delimiter, 0);
}


wchar_t *_wcserror(int _ErrorNumber) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wcserror_s(wchar_t *_Buffer, size_t _SizeInWords, int _ErrorNumber);
wchar_t *__wcserror(const wchar_t *_String) __declspec(deprecated("This function or variable may be unsafe. Consider using __wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t __wcserror_s(wchar_t *_Buffer, size_t _SizeInWords, const wchar_t *_ErrorMessage);
int _wcsicmp(const wchar_t *_String1, const wchar_t *_String2);
int _wcsicmp_l(const wchar_t *_String1, const wchar_t *_String2, _locale_t _Locale);
int _wcsnicmp(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount);
int _wcsnicmp_l(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount, _locale_t _Locale);
errno_t _wcsnset_s(wchar_t *_Destination, size_t _SizeInWords, wchar_t _Value, size_t _MaxCount);
wchar_t *_wcsnset(wchar_t *_String, wchar_t _Value, size_t _MaxCount) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsnset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
wchar_t *_wcsrev(wchar_t *_String);
errno_t _wcsset_s(wchar_t *_Destination, size_t _SizeInWords, wchar_t _Value);
wchar_t *_wcsset(wchar_t *_String, wchar_t _Value) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wcslwr_s(wchar_t *_String, size_t _SizeInWords);
wchar_t *_wcslwr(wchar_t *_String) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wcslwr_s_l(wchar_t *_String, size_t _SizeInWords, _locale_t _Locale);
wchar_t *_wcslwr_l(wchar_t *_String, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wcsupr_s(wchar_t *_String, size_t _Size);
wchar_t *_wcsupr(wchar_t *_String) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wcsupr_s_l(wchar_t *_String, size_t _Size, _locale_t _Locale);
wchar_t *_wcsupr_l(wchar_t *_String, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
size_t wcsxfrm(wchar_t *_Destination, const wchar_t *_Source, size_t _MaxCount);
size_t _wcsxfrm_l(wchar_t *_Destination, const wchar_t *_Source, size_t _MaxCount, _locale_t _Locale);
int wcscoll(const wchar_t *_String1, const wchar_t *_String2);
int _wcscoll_l(const wchar_t *_String1, const wchar_t *_String2, _locale_t _Locale);
int _wcsicoll(const wchar_t *_String1, const wchar_t *_String2);
int _wcsicoll_l(const wchar_t *_String1, const wchar_t *_String2, _locale_t _Locale);
int _wcsncoll(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount);
int _wcsncoll_l(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount, _locale_t _Locale);
int _wcsnicoll(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount);
int _wcsnicoll_l(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount, _locale_t _Locale);
wchar_t *wcsdup(const wchar_t *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details."));
int wcsicmp(const wchar_t *_String1, const wchar_t *_String2) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for details."));
int wcsnicmp(const wchar_t *_String1, const wchar_t *_String2, size_t _MaxCount) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for details."));
wchar_t *wcsnset(wchar_t *_String, wchar_t _Value, size_t _MaxCount) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for details."));
wchar_t *wcsrev(wchar_t *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details."));
wchar_t *wcsset(wchar_t *_String, wchar_t _Value) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details."));
wchar_t *wcslwr(wchar_t *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details."));
wchar_t *wcsupr(wchar_t *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details."));
int wcsicoll(const wchar_t *_String1, const wchar_t *_String2) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for details."));
errno_t strcpy_s(char *_Destination, rsize_t _SizeInBytes, const char *_Source);
errno_t strcat_s(char *_Destination, rsize_t _SizeInBytes, const char *_Source);
errno_t strerror_s(char *_Buffer, size_t _SizeInBytes, int _ErrorNumber);
errno_t strncat_s(char *_Destination, rsize_t _SizeInBytes, const char *_Source, rsize_t _MaxCount);
errno_t strncpy_s(char *_Destination, rsize_t _SizeInBytes, const char *_Source, rsize_t _MaxCount);
char *strtok_s(char *_String, const char *_Delimiter, char **_Context);
void *_memccpy(void *_Dst, const void *_Src, int _Val, size_t _MaxCount);
char *strcat(char *_Destination, const char *_Source) __declspec(deprecated("This function or variable may be unsafe. Consider using strcat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int strcmp(const char *_Str1, const char *_Str2);
int _strcmpi(const char *_String1, const char *_String2);
int strcoll(const char *_String1, const char *_String2);
int _strcoll_l(const char *_String1, const char *_String2, _locale_t _Locale);
char *strcpy(char *_Destination, const char *_Source) __declspec(deprecated("This function or variable may be unsafe. Consider using strcpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
unsigned long long strcspn(const char *_Str, const char *_Control);
char *_strdup(const char *_Source);
char *_strerror(const char *_ErrorMessage) __declspec(deprecated("This function or variable may be unsafe. Consider using _strerror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _strerror_s(char *_Buffer, size_t _SizeInBytes, const char *_ErrorMessage);
char *strerror(int _ErrorMessage) __declspec(deprecated("This function or variable may be unsafe. Consider using strerror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int _stricmp(const char *_String1, const char *_String2);
int _stricoll(const char *_String1, const char *_String2);
int _stricoll_l(const char *_String1, const char *_String2, _locale_t _Locale);
int _stricmp_l(const char *_String1, const char *_String2, _locale_t _Locale);
unsigned long long strlen(const char *_Str);
errno_t _strlwr_s(char *_String, size_t _Size);
char *_strlwr(char *_String) __declspec(deprecated("This function or variable may be unsafe. Consider using _strlwr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _strlwr_s_l(char *_String, size_t _Size, _locale_t _Locale);
char *_strlwr_l(char *_String, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _strlwr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
char *strncat(char *_Destination, const char *_Source, size_t _Count) __declspec(deprecated("This function or variable may be unsafe. Consider using strncat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int strncmp(const char *_Str1, const char *_Str2, size_t _MaxCount);
int _strnicmp(const char *_String1, const char *_String2, size_t _MaxCount);
int _strnicmp_l(const char *_String1, const char *_String2, size_t _MaxCount, _locale_t _Locale);
int _strnicoll(const char *_String1, const char *_String2, size_t _MaxCount);
int _strnicoll_l(const char *_String1, const char *_String2, size_t _MaxCount, _locale_t _Locale);
int _strncoll(const char *_String1, const char *_String2, size_t _MaxCount);
int _strncoll_l(const char *_String1, const char *_String2, size_t _MaxCount, _locale_t _Locale);
size_t __strncnt(const char *_String, size_t _Count);
char *strncpy(char *_Destination, const char *_Source, size_t _Count) __declspec(deprecated("This function or variable may be unsafe. Consider using strncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
size_t strnlen(const char *_String, size_t _MaxCount);
static inline size_t strnlen_s(const char *_String, size_t _MaxCount) {
    return _String == 0 ? 0 : strnlen(_String, _MaxCount);
}


errno_t _strnset_s(char *_String, size_t _SizeInBytes, int _Value, size_t _MaxCount);
char *_strnset(char *_Destination, int _Value, size_t _Count) __declspec(deprecated("This function or variable may be unsafe. Consider using _strnset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
char *strpbrk(const char *_Str, const char *_Control);
char *_strrev(char *_Str);
errno_t _strset_s(char *_Destination, size_t _DestinationSize, int _Value);
char *_strset(char *_Destination, int _Value) __declspec(deprecated("This function or variable may be unsafe. Consider using _strset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
unsigned long long strspn(const char *_Str, const char *_Control);
char *strtok(char *_String, const char *_Delimiter) __declspec(deprecated("This function or variable may be unsafe. Consider using strtok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _strupr_s(char *_String, size_t _Size);
char *_strupr(char *_String) __declspec(deprecated("This function or variable may be unsafe. Consider using _strupr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _strupr_s_l(char *_String, size_t _Size, _locale_t _Locale);
char *_strupr_l(char *_String, _locale_t _Locale) __declspec(deprecated("This function or variable may be unsafe. Consider using _strupr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
unsigned long long strxfrm(char *_Destination, const char *_Source, size_t _MaxCount);
size_t _strxfrm_l(char *_Destination, const char *_Source, size_t _MaxCount, _locale_t _Locale);
char *strdup(const char *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details."));
int strcmpi(const char *_String1, const char *_String2) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for details."));
int stricmp(const char *_String1, const char *_String2) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details."));
char *strlwr(char *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details."));
int strnicmp(const char *_String1, const char *_String2, size_t _MaxCount) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for details.")) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for details."));
char *strnset(char *_String, int _Value, size_t _MaxCount) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for details."));
char *strrev(char *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details."));
char *strset(char *_String, int _Value) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details."));
char *strupr(char *_String) __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details."));
int std;
int std;
void *_alloca(size_t _Size) __attribute__((nothrow));
intptr_t _get_heap_handle();
int _heapmin();
int _heapwalk(int *_EntryInfo);
int _heapchk();
int _resetstkoflw();
typedef char __static_assert_t[1];
inline void *_MarkAllocaS(void *_Ptr, unsigned int _Marker) {
    if (_Ptr) {
        *((unsigned int *)_Ptr) = _Marker;
        _Ptr = (char *)_Ptr + 16;
    }
    return _Ptr;
}


inline size_t _MallocaComputeSize(size_t _Size) {
    size_t _MarkedSize = _Size + 16;
    return _MarkedSize > _Size ? _MarkedSize : 0;
}


inline void _freea(void *_Memory) {
    unsigned int _Marker;
    if (_Memory) {
        _Memory = (char *)_Memory - 16;
        _Marker = *(unsigned int *)_Memory;
        if (_Marker == 56797) {
            free(_Memory);
        }
    }
}


typedef void (*terminate_handler)() __attribute__((cdecl));
typedef void (*terminate_function)() __attribute__((cdecl));
typedef void (*unexpected_handler)() __attribute__((cdecl));
typedef void (*unexpected_function)() __attribute__((cdecl));
struct _EXCEPTION_POINTERS;
struct __std_exception_data {
    const char *_What;
    int _DoFree;
};
void __std_exception_copy(const struct __std_exception_data *_From, struct __std_exception_data *_To);
void __std_exception_destroy(struct __std_exception_data *_Data);
int std;
void __ExceptionPtrDestroy(void *);
void __ExceptionPtrCopy(void *, const void *);
void __ExceptionPtrAssign(void *, const void *);
void __ExceptionPtrSwap(void *, void *);
void __ExceptionPtrCurrentException(void *);
void __ExceptionPtrRethrow(const void *);
void __ExceptionPtrCopyException(void *, const void *, const void *);
int std;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
int std;
union {
    unsigned short _Word[8];
    float _Float;
    double _Double;
    long double _Long_double;
} typedef _Dconst;
double _Cosh(double, double);
short _Dtest(double *);
double _Sinh(double, double);
short _Exp(double *, double, short);
extern _Dconst _Denorm;
extern _Dconst _Hugeval;
extern _Dconst _Inf;
extern _Dconst _Nan;
extern _Dconst _Snan;
float _FCosh(float, float);
short _FDtest(float *);
float _FSinh(float, float);
short _FExp(float *, float, short);
extern _Dconst _FDenorm;
extern _Dconst _FInf;
extern _Dconst _FNan;
extern _Dconst _FSnan;
long double _LCosh(long double, long double);
short _LDtest(long double *);
long double _LSinh(long double, long double);
short _LExp(long double *, long double, short);
extern _Dconst _LDenorm;
extern _Dconst _LInf;
extern _Dconst _LNan;
extern _Dconst _LSnan;
unsigned int _clearfp();
unsigned int _controlfp(unsigned int _NewValue, unsigned int _Mask) __declspec(deprecated("This function or variable may be unsafe. Consider using _controlfp_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _controlfp_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
void _set_controlfp(unsigned int _NewValue, unsigned int _Mask);
errno_t _controlfp_s(unsigned int *_CurrentState, unsigned int _NewValue, unsigned int _Mask);
unsigned int _statusfp();
void _fpreset();
unsigned int _control87(unsigned int _NewValue, unsigned int _Mask);
int *__fpecode();
int __fpe_flt_rounds();
double _copysign(double _Number, double _Sign);
double _chgsign(double _X);
double _scalb(double _X, long _Y);
double _logb(double _X);
double _nextafter(double _X, double _Y);
int _finite(double _X);
int _isnan(double _X);
int _fpclass(double _X);
float _scalbf(float _X, long _Y);
void fpreset();
errno_t _cgetws_s(wchar_t *_Buffer, size_t _BufferCount, size_t *_SizeRead);
int _cputws(const wchar_t *_Buffer);
wint_t _getwch();
wint_t _getwche();
wint_t _putwch(wchar_t _Character);
wint_t _ungetwch(wint_t _Character);
wint_t _getwch_nolock();
wint_t _getwche_nolock();
wint_t _putwch_nolock(wchar_t _Character);
wint_t _ungetwch_nolock(wint_t _Character);
int __conio_common_vcwprintf(unsigned long long _Options, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __conio_common_vcwprintf_s(unsigned long long _Options, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
int __conio_common_vcwprintf_p(unsigned long long _Options, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vcwprintf_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vcwprintf(const wchar_t *const _Format, va_list _ArgList) {
    return _vcwprintf_l(_Format, ((void *)0), _ArgList);
}


inline int _vcwprintf_s_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vcwprintf_s(const wchar_t *const _Format, va_list _ArgList) {
    return _vcwprintf_s_l(_Format, ((void *)0), _ArgList);
}


inline int _vcwprintf_p_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vcwprintf_p(const wchar_t *const _Format, va_list _ArgList) {
    return _vcwprintf_p_l(_Format, ((void *)0), _ArgList);
}


inline int _cwprintf_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vcwprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwprintf(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vcwprintf_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwprintf_s_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vcwprintf_s_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwprintf_s(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vcwprintf_s_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwprintf_p_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vcwprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwprintf_p(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vcwprintf_p_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


int __conio_common_vcwscanf(unsigned long long _Options, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
inline int _vcwscanf_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vcwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vcwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
}


inline int _vcwscanf(const wchar_t *const _Format, va_list _ArgList) __declspec(deprecated("This function or variable may be unsafe. Consider using _vcwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vcwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    return _vcwscanf_l(_Format, ((void *)0), _ArgList);
}


inline int _vcwscanf_s_l(const wchar_t *const _Format, const _locale_t _Locale, va_list _ArgList) {
}


inline int _vcwscanf_s(const wchar_t *const _Format, va_list _ArgList) {
    return _vcwscanf_s_l(_Format, ((void *)0), _ArgList);
}


inline int _cwscanf_l(const wchar_t *const _Format, const _locale_t _Locale, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vcwscanf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwscanf(const wchar_t *const _Format, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vcwscanf_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwscanf_s_l(const wchar_t *const _Format, const _locale_t _Locale, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vcwscanf_s_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


inline int _cwscanf_s(const wchar_t *const _Format, ...) {
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vcwscanf_s_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


const unsigned short *__pctype_func();
const wctype_t *__pwctype_func();
int iswalnum(wint_t _C);
int iswalpha(wint_t _C);
int iswascii(wint_t _C);
int iswblank(wint_t _C);
int iswcntrl(wint_t _C);
int iswdigit(wint_t _C);
int iswgraph(wint_t _C);
int iswlower(wint_t _C);
int iswprint(wint_t _C);
int iswpunct(wint_t _C);
int iswspace(wint_t _C);
int iswupper(wint_t _C);
int iswxdigit(wint_t _C);
int __iswcsymf(wint_t _C);
int __iswcsym(wint_t _C);
int _iswalnum_l(wint_t _C, _locale_t _Locale);
int _iswalpha_l(wint_t _C, _locale_t _Locale);
int _iswblank_l(wint_t _C, _locale_t _Locale);
int _iswcntrl_l(wint_t _C, _locale_t _Locale);
int _iswdigit_l(wint_t _C, _locale_t _Locale);
int _iswgraph_l(wint_t _C, _locale_t _Locale);
int _iswlower_l(wint_t _C, _locale_t _Locale);
int _iswprint_l(wint_t _C, _locale_t _Locale);
int _iswpunct_l(wint_t _C, _locale_t _Locale);
int _iswspace_l(wint_t _C, _locale_t _Locale);
int _iswupper_l(wint_t _C, _locale_t _Locale);
int _iswxdigit_l(wint_t _C, _locale_t _Locale);
int _iswcsymf_l(wint_t _C, _locale_t _Locale);
int _iswcsym_l(wint_t _C, _locale_t _Locale);
wint_t towupper(wint_t _C);
wint_t towlower(wint_t _C);
int iswctype(wint_t _C, wctype_t _Type);
wint_t _towupper_l(wint_t _C, _locale_t _Locale);
wint_t _towlower_l(wint_t _C, _locale_t _Locale);
int _iswctype_l(wint_t _C, wctype_t _Type, _locale_t _Locale);
int isleadbyte(int _C);
int _isleadbyte_l(int _C, _locale_t _Locale);
int is_wctype(wint_t _C, wctype_t _Type) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using iswctype instead. See online help for details.")) __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using iswctype instead. See online help for details."));
wchar_t *_wgetcwd(wchar_t *_DstBuf, int _SizeInWords);
wchar_t *_wgetdcwd(int _Drive, wchar_t *_DstBuf, int _SizeInWords);
int _wchdir(const wchar_t *_Path);
int _wmkdir(const wchar_t *_Path);
int _wrmdir(const wchar_t *_Path);
typedef unsigned long _fsize_t;
struct _wfinddata32_t {
    unsigned int attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
};
struct _wfinddata32i64_t {
    unsigned int attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    long long size;
    wchar_t name[260];
};
struct _wfinddata64i32_t {
    unsigned int attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
};
struct _wfinddata64_t {
    unsigned int attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    long long size;
    wchar_t name[260];
};
int _waccess(const wchar_t *_FileName, int _AccessMode);
errno_t _waccess_s(const wchar_t *_FileName, int _AccessMode);
int _wchmod(const wchar_t *_FileName, int _Mode);
int _wcreat(const wchar_t *_FileName, int _PermissionMode) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
intptr_t _wfindfirst32(const wchar_t *_FileName, struct _wfinddata32_t *_FindData);
int _wfindnext32(intptr_t _FindHandle, struct _wfinddata32_t *_FindData);
int _wunlink(const wchar_t *_FileName);
int _wrename(const wchar_t *_OldFileName, const wchar_t *_NewFileName);
errno_t _wmktemp_s(wchar_t *_TemplateName, size_t _SizeInWords);
wchar_t *_wmktemp(wchar_t *_TemplateName) __declspec(deprecated("This function or variable may be unsafe. Consider using _wmktemp_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
intptr_t _wfindfirst32i64(const wchar_t *_FileName, struct _wfinddata32i64_t *_FindData);
intptr_t _wfindfirst64i32(const wchar_t *_FileName, struct _wfinddata64i32_t *_FindData);
intptr_t _wfindfirst64(const wchar_t *_FileName, struct _wfinddata64_t *_FindData);
int _wfindnext32i64(intptr_t _FindHandle, struct _wfinddata32i64_t *_FindData);
int _wfindnext64i32(intptr_t _FindHandle, struct _wfinddata64i32_t *_FindData);
int _wfindnext64(intptr_t _FindHandle, struct _wfinddata64_t *_FindData);
errno_t _wsopen_s(int *_FileHandle, const wchar_t *_FileName, int _OpenFlag, int _ShareFlag, int _PermissionFlag);
errno_t _wsopen_dispatch(const wchar_t *_FileName, int _OFlag, int _ShFlag, int _PMode, int *_PFileHandle, int _BSecure);
int _wopen(const wchar_t *_FileName, int _OpenFlag, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int _wsopen(const wchar_t *_FileName, int _OpenFlag, int _ShareFlag, ...) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
intptr_t _wexecl(const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wexecle(const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wexeclp(const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wexeclpe(const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wexecv(const wchar_t *_FileName, const wchar_t *const *_ArgList);
intptr_t _wexecve(const wchar_t *_FileName, const wchar_t *const *_ArgList, const wchar_t *const *_Env);
intptr_t _wexecvp(const wchar_t *_FileName, const wchar_t *const *_ArgList);
intptr_t _wexecvpe(const wchar_t *_FileName, const wchar_t *const *_ArgList, const wchar_t *const *_Env);
intptr_t _wspawnl(int _Mode, const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wspawnle(int _Mode, const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wspawnlp(int _Mode, const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wspawnlpe(int _Mode, const wchar_t *_FileName, const wchar_t *_ArgList, ...);
intptr_t _wspawnv(int _Mode, const wchar_t *_FileName, const wchar_t *const *_ArgList);
intptr_t _wspawnve(int _Mode, const wchar_t *_FileName, const wchar_t *const *_ArgList, const wchar_t *const *_Env);
intptr_t _wspawnvp(int _Mode, const wchar_t *_FileName, const wchar_t *const *_ArgList);
intptr_t _wspawnvpe(int _Mode, const wchar_t *_FileName, const wchar_t *const *_ArgList, const wchar_t *const *_Env);
int _wsystem(const wchar_t *_Command);
struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};
wchar_t *_wasctime(const struct tm *_Tm) __declspec(deprecated("This function or variable may be unsafe. Consider using _wasctime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wasctime_s(wchar_t *_Buffer, size_t _SizeInWords, const struct tm *_Tm);
size_t wcsftime(wchar_t *_Buffer, size_t _SizeInWords, const wchar_t *_Format, const struct tm *_Tm);
size_t _wcsftime_l(wchar_t *_Buffer, size_t _SizeInWords, const wchar_t *_Format, const struct tm *_Tm, _locale_t _Locale);
wchar_t *_wctime32(const __time32_t *_Time) __declspec(deprecated("This function or variable may be unsafe. Consider using _wctime32_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wctime32_s(wchar_t *_Buffer, size_t _SizeInWords, const __time32_t *_Time);
wchar_t *_wctime64(const __time64_t *_Time) __declspec(deprecated("This function or variable may be unsafe. Consider using _wctime64_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wctime64_s(wchar_t *_Buffer, size_t _SizeInWords, const __time64_t *_Time);
errno_t _wstrdate_s(wchar_t *_Buffer, size_t _SizeInWords);
wchar_t *_wstrdate(wchar_t *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using _wstrdate_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t _wstrtime_s(wchar_t *_Buffer, size_t _SizeInWords);
wchar_t *_wstrtime(wchar_t *_Buffer) __declspec(deprecated("This function or variable may be unsafe. Consider using _wstrtime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
static inline wchar_t *_wctime(const time_t *const _Time) {
    return _wctime64(_Time);
}


static inline errno_t _wctime_s(wchar_t *const _Buffer, const size_t _SizeInWords, const time_t *const _Time) {
    return _wctime64_s(_Buffer, _SizeInWords, _Time);
}


typedef unsigned short _ino_t;
typedef _ino_t ino_t;
typedef unsigned int _dev_t;
typedef _dev_t dev_t;
typedef long _off_t;
typedef _off_t off_t;
struct _stat32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
};
struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
};
struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};
struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};
struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
};
int _fstat32(int _FileHandle, struct _stat32 *_Stat);
int _fstat32i64(int _FileHandle, struct _stat32i64 *_Stat);
int _fstat64i32(int _FileHandle, struct _stat64i32 *_Stat);
int _fstat64(int _FileHandle, struct _stat64 *_Stat);
int _stat32(const char *_FileName, struct _stat32 *_Stat);
int _stat32i64(const char *_FileName, struct _stat32i64 *_Stat);
int _stat64i32(const char *_FileName, struct _stat64i32 *_Stat);
int _stat64(const char *_FileName, struct _stat64 *_Stat);
int _wstat32(const wchar_t *_FileName, struct _stat32 *_Stat);
int _wstat32i64(const wchar_t *_FileName, struct _stat32i64 *_Stat);
int _wstat64i32(const wchar_t *_FileName, struct _stat64i32 *_Stat);
int _wstat64(const wchar_t *_FileName, struct _stat64 *_Stat);
static inline int fstat(const int _FileHandle, struct stat *const _Stat) {
    typedef char __static_assert_t[1];
    return _fstat64i32(_FileHandle, (struct _stat64i32 *)_Stat);
}


static inline int stat(const char *const _FileName, struct stat *const _Stat) {
    typedef char __static_assert_t[1];
    return _stat64i32(_FileName, (struct _stat64i32 *)_Stat);
}


typedef wchar_t _Wint_t;
wchar_t *_wsetlocale(int _Category, const wchar_t *_Locale);
_locale_t _wcreate_locale(int _Category, const wchar_t *_Locale);
wint_t btowc(int _Ch);
size_t mbrlen(const char *_Ch, size_t _SizeInBytes, mbstate_t *_State);
size_t mbrtowc(wchar_t *_DstCh, const char *_SrcCh, size_t _SizeInBytes, mbstate_t *_State);
errno_t mbsrtowcs_s(size_t *_Retval, wchar_t *_Dst, size_t _Size, const char **_PSrc, size_t _N, mbstate_t *_State);
size_t mbsrtowcs(wchar_t *_Dest, const char **_PSrc, size_t _Count, mbstate_t *_State) __declspec(deprecated("This function or variable may be unsafe. Consider using mbsrtowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using mbsrtowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t wcrtomb_s(size_t *_Retval, char *_Dst, size_t _SizeInBytes, wchar_t _Ch, mbstate_t *_State);
size_t wcrtomb(char *_Dest, wchar_t _Source, mbstate_t *_State) __declspec(deprecated("This function or variable may be unsafe. Consider using wcrtomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using wcrtomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
errno_t wcsrtombs_s(size_t *_Retval, char *_Dst, size_t _SizeInBytes, const wchar_t **_Src, size_t _Size, mbstate_t *_State);
size_t wcsrtombs(char *_Dest, const wchar_t **_PSource, size_t _Count, mbstate_t *_State) __declspec(deprecated("This function or variable may be unsafe. Consider using wcsrtombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using wcsrtombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."));
int wctob(wint_t _WCh);
errno_t wmemcpy_s(wchar_t *_S1, rsize_t _N1, const wchar_t *_S2, rsize_t _N);
errno_t wmemmove_s(wchar_t *_S1, rsize_t _N1, const wchar_t *_S2, rsize_t _N);
inline int fwide(FILE *_F, int _M) {
    (void)_F;
    return (_M);
}


inline int mbsinit(const mbstate_t *_P) {
    return _P == ((void *)0) || _P->_Wchar == 0;
}


inline wchar_t *wmemchr(const wchar_t *_S, wchar_t _C, size_t _N) {
    for (; 0 < _N; ++_S , --_N) 
        if (*_S == _C)
            return (wchar_t *)_S;
    return 0;
}


inline int wmemcmp(const wchar_t *_S1, const wchar_t *_S2, size_t _N) {
    for (; 0 < _N; ++_S1 , ++_S2 , --_N) 
        if (*_S1 != *_S2)
            return *_S1 < *_S2 ? -1 : 1;
    return 0;
}


inline wchar_t *wmemcpy(wchar_t *_S1, const wchar_t *_S2, size_t _N) {
    return (wchar_t *)memcpy(_S1, _S2, _N * sizeof(wchar_t));
}


inline wchar_t *wmemmove(wchar_t *_S1, const wchar_t *_S2, size_t _N) {
    return (wchar_t *)memmove(_S1, _S2, _N * sizeof(wchar_t));
}


inline wchar_t *wmemset(wchar_t *_S, wchar_t _C, size_t _N) {
    wchar_t *_Su = _S;
    for (; 0 < _N; ++_Su , --_N) {
        *_Su = _C;
    }
    return _S;
}


typedef mbstate_t _Mbstatet;
int std;
typedef int (*_CRT_REPORT_HOOK)(int, char *, int *) __attribute__((cdecl));
typedef int (*_CRT_REPORT_HOOKW)(int, wchar_t *, int *) __attribute__((cdecl));
typedef int (*_CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int) __attribute__((cdecl));
typedef void (*_CRT_DUMP_CLIENT)(void *, size_t) __attribute__((cdecl));
struct _CrtMemBlockHeader;
struct _CrtMemState {
    struct _CrtMemBlockHeader *pBlockHeader;
    size_t lCounts[5];
    size_t lSizes[5];
    size_t lHighWaterCount;
    size_t lTotalCount;
};
typedef struct _CrtMemState _CrtMemState;
int std;
int std;
unsigned char _BitScanReverse64(unsigned long *_Index, unsigned long long _Mask);
unsigned char _bittest(const long *, long);
long _InterlockedAnd(volatile long *_Value, long _Mask);
short _InterlockedAnd16(volatile short *_Value, short _Mask);
long long _InterlockedAnd64(volatile long long *_Value, long long _Mask);
char _InterlockedAnd8(volatile char *_Value, char _Mask);
long _InterlockedCompareExchange(volatile long *_Destination, long _Exchange, long _Comparand) __attribute__((nothrow));
short _InterlockedCompareExchange16(volatile short *_Destination, short _Exchange, short _Comparand);
long long _InterlockedCompareExchange64(volatile long long *_Destination, long long _Exchange, long long _Comparand);
char _InterlockedCompareExchange8(volatile char *_Destination, char _Exchange, char _Comparand);
long _InterlockedDecrement(volatile long *_Addend) __attribute__((nothrow));
long _InterlockedExchange(volatile long *_Target, long _Value) __attribute__((nothrow));
short _InterlockedExchange16(volatile short *_Target, short _Value);
long long _InterlockedExchange64(volatile long long *_Target, long long _Value);
char _InterlockedExchange8(volatile char *_Target, char _Value);
long _InterlockedExchangeAdd(volatile long *_Addend, long _Value) __attribute__((nothrow));
short _InterlockedExchangeAdd16(volatile short *_Addend, short _Value);
long long _InterlockedExchangeAdd64(volatile long long *_Addend, long long _Value);
char _InterlockedExchangeAdd8(volatile char *_Addend, char _Value);
long _InterlockedIncrement(volatile long *_Addend) __attribute__((nothrow));
long _InterlockedOr(volatile long *_Value, long _Mask);
short _InterlockedOr16(volatile short *_Value, short _Mask);
long long _InterlockedOr64(volatile long long *_Value, long long _Mask);
char _InterlockedOr8(volatile char *_Value, char _Mask);
long _InterlockedXor(volatile long *_Value, long _Mask);
short _InterlockedXor16(volatile short *_Value, short _Mask);
long long _InterlockedXor64(volatile long long *_Value, long long _Mask);
char _InterlockedXor8(volatile char *_Value, char _Mask);
void _ReadWriteBarrier();
unsigned char _interlockedbittestandset(volatile long *, long);
int std;
extern int __type_info_root_node;
struct __std_type_info_data {
    const char *_UndecoratedName;
    const char _DecoratedName[1];
    int (__std_type_info_data)();
    struct __std_type_info_data;
    struct __std_type_info_data;
};
int __std_type_info_compare(const struct __std_type_info_data *_Lhs, const struct __std_type_info_data *_Rhs);
size_t __std_type_info_hash(const struct __std_type_info_data *_Data);
const char *__std_type_info_name(struct __std_type_info_data *_Data, int *_RootNode);
int type_info;
int std;
int _isctype_l(int _C, int _Type, _locale_t _Locale);
int isalpha(int _C);
int _isalpha_l(int _C, _locale_t _Locale);
int isupper(int _C);
int _isupper_l(int _C, _locale_t _Locale);
int islower(int _C);
int _islower_l(int _C, _locale_t _Locale);
int isdigit(int _C);
int _isdigit_l(int _C, _locale_t _Locale);
int isxdigit(int _C);
int _isxdigit_l(int _C, _locale_t _Locale);
int isspace(int _C);
int _isspace_l(int _C, _locale_t _Locale);
int ispunct(int _C);
int _ispunct_l(int _C, _locale_t _Locale);
int isblank(int _C);
int _isblank_l(int _C, _locale_t _Locale);
int isalnum(int _C);
int _isalnum_l(int _C, _locale_t _Locale);
int isprint(int _C);
int _isprint_l(int _C, _locale_t _Locale);
int isgraph(int _C);
int _isgraph_l(int _C, _locale_t _Locale);
int iscntrl(int _C);
int _iscntrl_l(int _C, _locale_t _Locale);
int toupper(int _C);
int tolower(int _C);
int _tolower(int _C);
int _tolower_l(int _C, _locale_t _Locale);
int _toupper(int _C);
int _toupper_l(int _C, _locale_t _Locale);
int __isascii(int _C);
int __toascii(int _C);
int __iscsymf(int _C);
int __iscsym(int _C);
inline __crt_locale_data_public *__acrt_get_locale_data_prefix(const volatile void *const _LocalePointers) {
    const _locale_t _TypedLocalePointers = (_locale_t)_LocalePointers;
    return (__crt_locale_data_public *)_TypedLocalePointers->locinfo;
}


inline int _chvalidchk_l(const int _C, const int _Mask, const _locale_t _Locale) {
    if (_Locale) {
        return __acrt_get_locale_data_prefix(_Locale)->_locale_pctype[_C] & _Mask;
    }
    return (__pctype_func()[(_C)] & (_Mask));
}


inline int _ischartype_l(const int _C, const int _Mask, const _locale_t _Locale) {
    if (_Locale && __acrt_get_locale_data_prefix(_Locale)->_locale_mb_cur_max > 1) {
        return _isctype_l(_C, _Mask, _Locale);
    }
    return _chvalidchk_l(_C, _Mask, _Locale);
}


struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};
struct tm;
void _lock_locales();
void _unlock_locales();
int _configthreadlocale(int _Flag);
char *setlocale(int _Category, const char *_Locale);
struct lconv *localeconv();
_locale_t _get_current_locale();
_locale_t _create_locale(int _Category, const char *_Locale);
void _free_locale(_locale_t _Locale);
wchar_t *_wsetlocale(int _Category, const wchar_t *_Locale);
_locale_t _wcreate_locale(int _Category, const wchar_t *_Locale);
wchar_t **___lc_locale_name_func();
unsigned int ___lc_codepage_func();
unsigned int ___lc_collate_cp_func();
char *_Getdays();
char *_Getmonths();
void *_Gettnames();
wchar_t *_W_Getdays();
wchar_t *_W_Getmonths();
void *_W_Gettnames();
size_t _Strftime(char *_Buffer, size_t _Max_size, const char *_Format, const struct tm *_Timeptr, void *_Lc_time_arg);
size_t _Wcsftime(wchar_t *_Buffer, size_t _Max_size, const wchar_t *_Format, const struct tm *_Timeptr, void *_Lc_time_arg);
struct _Collvec {
    unsigned int _Page;
    wchar_t *_LocaleName;
};
typedef struct _Collvec _Collvec;
struct _Ctypevec {
    unsigned int _Page;
    const short *_Table;
    int _Delfl;
    wchar_t *_LocaleName;
};
typedef struct _Ctypevec _Ctypevec;
struct _Cvtvec {
    unsigned int _Page;
    unsigned int _Mbcurmax;
    int _Isclocale;
    unsigned char _Isleadbyte[32];
};
typedef struct _Cvtvec _Cvtvec;
_Collvec _Getcoll();
_Ctypevec _Getctype();
_Cvtvec _Getcvt();
int _Mbrtowc(wchar_t *, const char *, size_t, mbstate_t *, const _Cvtvec *);
float _Stof(const char *, char **, long);
double _Stod(const char *, char **, long);
long double _Stold(const char *, char **, long);
int _Strcoll(const char *, const char *, const char *, const char *, const _Collvec *);
size_t _Strxfrm(char *_String1, char *_End1, const char *, const char *, const _Collvec *);
int _Tolower(int, const _Ctypevec *);
int _Toupper(int, const _Ctypevec *);
int _Wcrtomb(char *, wchar_t, mbstate_t *, const _Cvtvec *);
int _Wcscoll(const wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *, const _Collvec *);
size_t _Wcsxfrm(wchar_t *_String1, wchar_t *_End1, const wchar_t *, const wchar_t *, const _Collvec *);
short _Getwctype(wchar_t, const _Ctypevec *);
const wchar_t *_Getwctypes(const wchar_t *, const wchar_t *, short *, const _Ctypevec *);
wchar_t _Towlower(wchar_t, const _Ctypevec *);
wchar_t _Towupper(wchar_t, const _Ctypevec *);
char *_Getdays();
char *_Getmonths();
void *_Gettnames();
size_t _Strftime(char *, size_t _Maxsize, const char *, const struct tm *, void *);
wchar_t *_W_Getdays();
wchar_t *_W_Getmonths();
void *_W_Gettnames();
size_t _Wcsftime(wchar_t *, size_t _Maxsize, const wchar_t *, const struct tm *, void *);
_locale_t _GetLocaleForCP(unsigned int);
int std;
extern double _Stodx(const char *, char **, long, int *);
extern long double _Stoldx(const char *, char **, long, int *);
extern long _Stolx(const char *, char **, int, int *);
extern unsigned long _Stoulx(const char *, char **, int, int *);
extern long long _Stollx(const char *, char **, int, int *);
extern unsigned long long _Stoullx(const char *, char **, int, int *);
int std;
