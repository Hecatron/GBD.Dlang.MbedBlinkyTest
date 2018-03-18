int cpp2d_name(char const*)typedef unsigned __int64  uintptr_ttypedef char* va_list__va_startvoid __cdecl __va_start(va_list* , ...)typedef unsigned __int64 size_ttypedef __int64          ptrdiff_ttypedef __int64          intptr_ttypedef _Bool __vcrt_booltypedef unsigned short wchar_tvoid __cdecl __security_init_cookie(void)void __cdecl __security_check_cookie(_In_ uintptr_t _StackCookie)__declspec(noreturn) void __cdecl __report_gsfailure(_In_ uintptr_t _StackCookie)extern uintptr_t __security_cookietypedef _Bool __crt_boolvoid __cdecl _invalid_parameter_noinfo(void)__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void)__declspec(noreturn)
_ACRTIMP void __cdecl _invoke_watson(
    _In_opt_z_ wchar_t const* _Expression,
    _In_opt_z_ wchar_t const* _FunctionName,
    _In_opt_z_ wchar_t const* _FileName,
    _In_       unsigned int _LineNo,
    _In_       uintptr_t _Reserved)typedef int                           errno_ttypedef unsigned short                wint_ttypedef unsigned short                wctype_ttypedef long                          __time32_ttypedef __int64                       __time64_tstruct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
    _Field_range_(1, 2) int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
}typedef struct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
    _Field_range_(1, 2) int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
} __crt_locale_data_publicstruct __crt_locale_pointers
{
    struct __crt_locale_data*    locinfo;
    struct __crt_multibyte_data* mbcinfo;
}typedef struct __crt_locale_pointers
{
    struct __crt_locale_data*    locinfo;
    struct __crt_multibyte_data* mbcinfo;
} __crt_locale_pointerstypedef __crt_locale_pointers* _locale_tstruct _Mbstatet
{ // state of a multibyte translation
    unsigned long _Wchar;
    unsigned short _Byte, _State;
}typedef struct _Mbstatet
{ // state of a multibyte translation
    unsigned long _Wchar;
    unsigned short _Byte, _State;
} _Mbstatettypedef _Mbstatet mbstate_ttypedef __time64_t time_ttypedef size_t rsize_tvoid __cdecl _Atexit(void (__cdecl *)(void))typedef unsigned long _Uint32t_CRTRESTRICT
void* __cdecl _calloc_base(
    _In_ size_t _Count,
    _In_ size_t _Size
    )calloc_CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl calloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Count,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    )int __cdecl _callnewh(
    _In_ size_t _Size
    )void* __cdecl _expand(
    _Pre_notnull_           void*  _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    )void __cdecl _free_base(
    _Pre_maybenull_ _Post_invalid_ void* _Block
    )void __cdecl free(
    _Pre_maybenull_ _Post_invalid_ void* _Block
    )_CRTRESTRICT
void* __cdecl _malloc_base(
    _In_ size_t _Size
    )malloc_CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    )size_t __cdecl _msize_base(
    _Pre_notnull_ void* _Block
    )size_t __cdecl _msize(
    _Pre_notnull_ void* _Block
    )_CRTRESTRICT
void* __cdecl _realloc_base(
    _Pre_maybenull_ _Post_invalid_  void*  _Block,
    _In_                            size_t _Size
    )realloc_CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl realloc(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size
    )_CRTRESTRICT
void* __cdecl _recalloc_base(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_                           size_t _Count,
    _In_                           size_t _Size
    )_CRTRESTRICT
void* __cdecl _recalloc(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Count,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size
    )void __cdecl _aligned_free(
    _Pre_maybenull_ _Post_invalid_ void* _Block
    )_CRTRESTRICT
void* __cdecl _aligned_malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_                    size_t _Alignment
    )_CRTRESTRICT
void* __cdecl _aligned_offset_malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_                    size_t _Alignment,
    _In_                    size_t _Offset
    )size_t __cdecl _aligned_msize(
    _Pre_notnull_ void*  _Block,
    _In_          size_t _Alignment,
    _In_          size_t _Offset
    )_CRTRESTRICT
void* __cdecl _aligned_offset_realloc(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size,
    _In_                           size_t _Alignment,
    _In_                           size_t _Offset
    )_CRTRESTRICT
void* __cdecl _aligned_offset_recalloc(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Count,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size,
    _In_                           size_t _Alignment,
    _In_                           size_t _Offset
    )_CRTRESTRICT
void* __cdecl _aligned_realloc(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size,
    _In_                           size_t _Alignment
    )_CRTRESTRICT
void* __cdecl _aligned_recalloc(
    _Pre_maybenull_ _Post_invalid_ void*  _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Count,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size,
    _In_                           size_t _Alignment
    )int* __cdecl _errno(void)errno_t __cdecl _set_errno(_In_ int _Value)errno_t __cdecl _get_errno(_Out_ int* _Value)extern unsigned long  __cdecl __threadid(void)extern uintptr_t __cdecl __threadhandle(void)typedef int (__cdecl* _CoreCrtSecureSearchSortCompareFunctiontypedef int (__cdecl* _CoreCrtNonSecureSearchSortCompareFunctionvoid* __cdecl bsearch_s(
        _In_                                               void const* _Key,
        _In_reads_bytes_(_NumOfElements * _SizeOfElements) void const* _Base,
        _In_                                               rsize_t     _NumOfElements,
        _In_                                               rsize_t     _SizeOfElements,
        _In_                   _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
        _In_opt_                                           void*       _Context
        )void __cdecl qsort_s(
        _Inout_updates_bytes_(_NumOfElements * _SizeOfElements) void*   _Base,
        _In_                                                    rsize_t _NumOfElements,
        _In_                                                    rsize_t _SizeOfElements,
        _In_                    _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
        _In_opt_                                                void*   _Context
        )void* __cdecl bsearch(
    _In_                                               void const* _Key,
    _In_reads_bytes_(_NumOfElements * _SizeOfElements) void const* _Base,
    _In_                                               size_t      _NumOfElements,
    _In_                                               size_t      _SizeOfElements,
    _In_                _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    )void __cdecl qsort(
    _Inout_updates_bytes_(_NumOfElements * _SizeOfElements) void*  _Base,
    _In_                                                    size_t _NumOfElements,
    _In_                                                    size_t _SizeOfElements,
    _In_                _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    )void* __cdecl _lfind_s(
    _In_                                                  void const*   _Key,
    _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) void const*   _Base,
    _Inout_                                               unsigned int* _NumOfElements,
    _In_                                                  size_t        _SizeOfElements,
    _In_                        _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
    _In_                                                  void*         _Context
    )void* __cdecl _lfind(
    _In_                                                  void const*   _Key,
    _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) void const*   _Base,
    _Inout_                                               unsigned int* _NumOfElements,
    _In_                                                  unsigned int  _SizeOfElements,
    _In_                     _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    )void* __cdecl _lsearch_s(
    _In_                                                        void const*   _Key,
    _Inout_updates_bytes_((*_NumOfElements ) * _SizeOfElements) void*         _Base,
    _Inout_                                                     unsigned int* _NumOfElements,
    _In_                                                        size_t        _SizeOfElements,
    _In_                              _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
    _In_                                                        void*         _Context
    )void* __cdecl _lsearch(
    _In_                                                        void const*   _Key,
    _Inout_updates_bytes_((*_NumOfElements ) * _SizeOfElements) void*         _Base,
    _Inout_                                                     unsigned int* _NumOfElements,
    _In_                                                        unsigned int  _SizeOfElements,
    _In_                           _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    )_CRT_NONSTDC_DEPRECATE(_lfind)
    _ACRTIMP void* __cdecl lfind(
        _In_                                                  void const*   _Key,
        _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) void const*   _Base,
        _Inout_                                               unsigned int* _NumOfElements,
        _In_                                                  unsigned int  _SizeOfElements,
        _In_                     _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
        )_CRT_NONSTDC_DEPRECATE(_lsearch)
    _ACRTIMP void* __cdecl lsearch(
        _In_                                                       void const*   _Key,
        _Inout_updates_bytes_((*_NumOfElements) * _SizeOfElements) void*         _Base,
        _Inout_                                                    unsigned int* _NumOfElements,
        _In_                                                       unsigned int  _SizeOfElements,
        _In_                          _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
        )errno_t __cdecl _itow_s(
        _In_                         int      _Value,
        _Out_writes_z_(_BufferCount) wchar_t* _Buffer,
        _In_                         size_t   _BufferCount,
        _In_                         int      _Radix
        )errno_t __cdecl _ltow_s(
        _In_                         long     _Value,
        _Out_writes_z_(_BufferCount) wchar_t* _Buffer,
        _In_                         size_t   _BufferCount,
        _In_                         int      _Radix
        )errno_t __cdecl _ultow_s(
        _In_                         unsigned long _Value,
        _Out_writes_z_(_BufferCount) wchar_t*      _Buffer,
        _In_                         size_t        _BufferCount,
        _In_                         int           _Radix
        )double __cdecl wcstod(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr
        )double __cdecl _wcstod_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_opt_                 _locale_t      _Locale
        )long __cdecl wcstol(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix
        )long __cdecl _wcstol_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix,
        _In_opt_                 _locale_t      _Locale
        )long long __cdecl wcstoll(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix
        )long long __cdecl _wcstoll_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix,
        _In_opt_                 _locale_t      _Locale
        )unsigned long __cdecl wcstoul(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix
        )unsigned long __cdecl _wcstoul_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix,
        _In_opt_                 _locale_t      _Locale
        )unsigned long long __cdecl wcstoull(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix
        )unsigned long long __cdecl _wcstoull_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix,
        _In_opt_                 _locale_t      _Locale
        )long double __cdecl wcstold(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr
        )long double __cdecl _wcstold_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_opt_                 _locale_t      _Locale
        )float __cdecl wcstof(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr
        )float __cdecl _wcstof_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_opt_                 _locale_t      _Locale
        )double __cdecl _wtof(
        _In_z_ wchar_t const* _String
        )double __cdecl _wtof_l(
        _In_z_   wchar_t const* _String,
        _In_opt_ _locale_t      _Locale
        )int __cdecl _wtoi(
        _In_z_ wchar_t const* _String
        )int __cdecl _wtoi_l(
        _In_z_   wchar_t const* _String,
        _In_opt_ _locale_t      _Locale
        )long __cdecl _wtol(
        _In_z_ wchar_t const* _String
        )long __cdecl _wtol_l(
        _In_z_   wchar_t const* _String,
        _In_opt_ _locale_t      _Locale
        )long long __cdecl _wtoll(
        _In_z_ wchar_t const* _String
        )long long __cdecl _wtoll_l(
        _In_z_   wchar_t const* _String,
        _In_opt_ _locale_t      _Locale
        )errno_t __cdecl _i64tow_s(
        _In_                         __int64  _Value,
        _Out_writes_z_(_BufferCount) wchar_t* _Buffer,
        _In_                         size_t   _BufferCount,
        _In_                         int      _Radix
        )_CRT_INSECURE_DEPRECATE(_i64tow_s)
    _ACRTIMP wchar_t* __cdecl _i64tow(
        _In_                   __int64  _Value,
        _Pre_notnull_ _Post_z_ wchar_t* _Buffer,
        _In_                   int      _Radix
        )errno_t __cdecl _ui64tow_s(
        _In_                         unsigned __int64 _Value,
        _Out_writes_z_(_BufferCount) wchar_t*         _Buffer,
        _In_                         size_t           _BufferCount,
        _In_                         int              _Radix
        )_CRT_INSECURE_DEPRECATE(_ui64tow_s)
    _ACRTIMP wchar_t* __cdecl _ui64tow(
        _In_                   unsigned __int64 _Value,
        _Pre_notnull_ _Post_z_ wchar_t*         _Buffer,
        _In_                   int              _Radix
        )__int64 __cdecl _wtoi64(
        _In_z_ wchar_t const* _String
        )__int64 __cdecl _wtoi64_l(
        _In_z_   wchar_t const* _String,
        _In_opt_ _locale_t      _Locale
        )__int64 __cdecl _wcstoi64(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix
        )__int64 __cdecl _wcstoi64_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix,
        _In_opt_                 _locale_t      _Locale
        )unsigned __int64 __cdecl _wcstoui64(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix
        )unsigned __int64 __cdecl _wcstoui64_l(
        _In_z_                   wchar_t const* _String,
        _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
        _In_                     int            _Radix,
        _In_opt_                 _locale_t      _Locale
        )wchar_t* __cdecl _wfullpath(
        _Out_writes_opt_z_(_BufferCount) wchar_t*       _Buffer,
        _In_z_                           wchar_t const* _Path,
        _In_                             size_t         _BufferCount
        )errno_t __cdecl _wmakepath_s(
        _Out_writes_z_(_BufferCount) wchar_t*       _Buffer,
        _In_                         size_t         _BufferCount,
        _In_opt_z_                   wchar_t const* _Drive,
        _In_opt_z_                   wchar_t const* _Dir,
        _In_opt_z_                   wchar_t const* _Filename,
        _In_opt_z_                   wchar_t const* _Ext
        )void __cdecl _wperror(
        _In_opt_z_ wchar_t const* _ErrorMessage
        )_CRT_INSECURE_DEPRECATE(_wsplitpath_s)
    _ACRTIMP void __cdecl _wsplitpath(
        _In_z_                   wchar_t const* _FullPath,
        _Pre_maybenull_ _Post_z_ wchar_t*       _Drive,
        _Pre_maybenull_ _Post_z_ wchar_t*       _Dir,
        _Pre_maybenull_ _Post_z_ wchar_t*       _Filename,
        _Pre_maybenull_ _Post_z_ wchar_t*       _Ext
        )errno_t __cdecl _wsplitpath_s(
        _In_z_                             wchar_t const* _FullPath,
        _Out_writes_opt_z_(_DriveCount)    wchar_t*       _Drive,
        _In_                               size_t         _DriveCount,
        _Out_writes_opt_z_(_DirCount)      wchar_t*       _Dir,
        _In_                               size_t         _DirCount,
        _Out_writes_opt_z_(_FilenameCount) wchar_t*       _Filename,
        _In_                               size_t         _FilenameCount,
        _Out_writes_opt_z_(_ExtCount)      wchar_t*       _Ext,
        _In_                               size_t         _ExtCount
        )errno_t __cdecl _wdupenv_s(
            _Outptr_result_buffer_maybenull_(*_BufferCount) _Outptr_result_maybenull_z_ wchar_t**      _Buffer,
            _Out_opt_                                                                   size_t*        _BufferCount,
            _In_z_                                                                      wchar_t const* _VarName
            )_CRT_INSECURE_DEPRECATE(_wdupenv_s)
        _DCRTIMP wchar_t* __cdecl _wgetenv(
            _In_z_ wchar_t const* _VarName
            )errno_t __cdecl _wgetenv_s(
            _Out_                            size_t*        _RequiredCount,
            _Out_writes_opt_z_(_BufferCount) wchar_t*       _Buffer,
            _In_                             size_t         _BufferCount,
            _In_z_                           wchar_t const* _VarName
            )int __cdecl _wputenv(
            _In_z_ wchar_t const* _EnvString
            )errno_t __cdecl _wputenv_s(
            _In_z_ wchar_t const* _Name,
            _In_z_ wchar_t const* _Value
            )errno_t __cdecl _wsearchenv_s(
            _In_z_                       wchar_t const* _Filename,
            _In_z_                       wchar_t const* _VarName,
            _Out_writes_z_(_BufferCount) wchar_t*       _Buffer,
            _In_                         size_t         _BufferCount
            )int __cdecl _wsystem(
            _In_opt_z_ wchar_t const* _Command
            )void __cdecl _swab(
    _Inout_updates_(_SizeInBytes) _Post_readable_size_(_SizeInBytes) char* _Buf1,
    _Inout_updates_(_SizeInBytes) _Post_readable_size_(_SizeInBytes) char* _Buf2,
    _In_                                                             int   _SizeInBytes
    )exit__declspec(noreturn) void __cdecl exit(_In_ int _Code)_exit__declspec(noreturn) void __cdecl _exit(_In_ int _Code)_Exit__declspec(noreturn) void __cdecl _Exit(_In_ int _Code)__declspec(noreturn) void __cdecl quick_exit(_In_ int _Code)abort__declspec(noreturn) void __cdecl abort(void)unsigned int __cdecl _set_abort_behavior(
    _In_ unsigned int _Flags,
    _In_ unsigned int _Mask
    )typedef int (__CRTDECL* _onexit_tint       __cdecl atexit(void (__cdecl*)(void))_onexit_t __cdecl _onexit(_In_opt_ _onexit_t _Func)int __cdecl at_quick_exit(void (__cdecl*)(void))typedef void (__cdecl* _purecall_handlertypedef void (__cdecl* _invalid_parameter_handler_purecall_handler __cdecl _set_purecall_handler(
        _In_opt_ _purecall_handler _Handler
        )_purecall_handler __cdecl _get_purecall_handler(void)_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(
        _In_opt_ _invalid_parameter_handler _Handler
        )_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void)_invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(
        _In_opt_ _invalid_parameter_handler _Handler
        )_invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void)int __cdecl _set_error_mode(_In_ int _Mode)int* __cdecl _errno(void)errno_t __cdecl _set_errno(_In_ int _Value)errno_t __cdecl _get_errno(_Out_ int* _Value)unsigned long* __cdecl __doserrno(void)errno_t __cdecl _set_doserrno(_In_ unsigned long _Value)errno_t __cdecl _get_doserrno(_Out_ unsigned long * _Value)_CRT_INSECURE_DEPRECATE(strerror) char** __cdecl __sys_errlist(void)_CRT_INSECURE_DEPRECATE(strerror) int * __cdecl __sys_nerr(void)void __cdecl perror(_In_opt_z_ char const* _ErrMsg)_CRT_INSECURE_DEPRECATE_GLOBALS(_get_pgmptr ) _ACRTIMP char**    __cdecl __p__pgmptr (void)_CRT_INSECURE_DEPRECATE_GLOBALS(_get_wpgmptr) _ACRTIMP wchar_t** __cdecl __p__wpgmptr(void)_CRT_INSECURE_DEPRECATE_GLOBALS(_get_fmode  ) _ACRTIMP int*      __cdecl __p__fmode  (void)errno_t __cdecl _get_pgmptr (_Outptr_result_z_ char**    _Value)errno_t __cdecl _get_wpgmptr(_Outptr_result_z_ wchar_t** _Value)errno_t __cdecl _set_fmode  (_In_              int       _Mode )errno_t __cdecl _get_fmode  (_Out_             int*      _PMode)struct _div_t
{
    int quot;
    int rem;
}typedef struct _div_t
{
    int quot;
    int rem;
} div_tstruct _ldiv_t
{
    long quot;
    long rem;
}typedef struct _ldiv_t
{
    long quot;
    long rem;
} ldiv_tstruct _lldiv_t
{
    long long quot;
    long long rem;
}typedef struct _lldiv_t
{
    long long quot;
    long long rem;
} lldiv_tabsint       __cdecl abs   (_In_ int       _Number)labslong      __cdecl labs  (_In_ long      _Number)llabslong long __cdecl llabs (_In_ long long _Number)__int64   __cdecl _abs64(_In_ __int64   _Number)unsigned short   __cdecl _byteswap_ushort(_In_ unsigned short   _Number)unsigned long    __cdecl _byteswap_ulong (_In_ unsigned long    _Number)unsigned __int64 __cdecl _byteswap_uint64(_In_ unsigned __int64 _Number)div_t   __cdecl div  (_In_ int       _Numerator, _In_ int       _Denominator)ldiv_t  __cdecl ldiv (_In_ long      _Numerator, _In_ long      _Denominator)lldiv_t __cdecl lldiv(_In_ long long _Numerator, _In_ long long _Denominator)unsigned int __cdecl _rotl(
    _In_ unsigned int _Value,
    _In_ int          _Shift
    )unsigned long __cdecl _lrotl(
    _In_ unsigned long _Value,
    _In_ int           _Shift
    )unsigned __int64 __cdecl _rotl64(
    _In_ unsigned __int64 _Value,
    _In_ int              _Shift
    )unsigned int __cdecl _rotr(
    _In_ unsigned int _Value,
    _In_ int          _Shift
    )unsigned long __cdecl _lrotr(
    _In_ unsigned long _Value,
    _In_ int           _Shift
    )unsigned __int64 __cdecl _rotr64(
    _In_ unsigned __int64 _Value,
    _In_ int              _Shift
    )void __cdecl srand(_In_ unsigned int _Seed)int __cdecl rand(void)struct
    {
        unsigned char ld[10];
    }typedef struct
    {
        unsigned char ld[10];
    } _LDOUBLEstruct
{
    double x;
}typedef struct
{
    double x;
} _CRT_DOUBLEstruct
{
    float f;
}typedef struct
{
    float f;
} _CRT_FLOATstruct
{
    long double x;
}typedef struct
{
    long double x;
} _LONGDOUBLEstruct
{
    unsigned char ld12[12];
}typedef struct
{
    unsigned char ld12[12];
} _LDBL12double    __cdecl atof   (_In_z_ char const* _String)int       __cdecl atoi   (_In_z_ char const* _String)long      __cdecl atol   (_In_z_ char const* _String)long long __cdecl atoll  (_In_z_ char const* _String)__int64   __cdecl _atoi64(_In_z_ char const* _String)double    __cdecl _atof_l  (_In_z_ char const* _String, _In_opt_ _locale_t _Locale)int       __cdecl _atoi_l  (_In_z_ char const* _String, _In_opt_ _locale_t _Locale)long      __cdecl _atol_l  (_In_z_ char const* _String, _In_opt_ _locale_t _Locale)long long __cdecl _atoll_l (_In_z_ char const* _String, _In_opt_ _locale_t _Locale)__int64   __cdecl _atoi64_l(_In_z_ char const* _String, _In_opt_ _locale_t _Locale)int __cdecl _atoflt (_Out_ _CRT_FLOAT*  _Result, _In_z_ char const* _String)int __cdecl _atodbl (_Out_ _CRT_DOUBLE* _Result, _In_z_ char*       _String)int __cdecl _atoldbl(_Out_ _LDOUBLE*    _Result, _In_z_ char*       _String)int __cdecl _atoflt_l(
    _Out_    _CRT_FLOAT* _Result,
    _In_z_   char const* _String,
    _In_opt_ _locale_t   _Locale
    )int __cdecl _atodbl_l(
    _Out_    _CRT_DOUBLE* _Result,
    _In_z_   char*        _String,
    _In_opt_ _locale_t    _Locale
    )int __cdecl _atoldbl_l(
    _Out_    _LDOUBLE* _Result,
    _In_z_   char*     _String,
    _In_opt_ _locale_t _Locale
    )float __cdecl strtof(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr
    )float __cdecl _strtof_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_opt_                 _locale_t   _Locale
    )double __cdecl strtod(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr
    )double __cdecl _strtod_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_opt_                 _locale_t   _Locale
    )long double __cdecl strtold(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr
    )long double __cdecl _strtold_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_opt_                 _locale_t   _Locale
    )long __cdecl strtol(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix
    )long __cdecl _strtol_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix,
    _In_opt_                 _locale_t   _Locale
    )long long __cdecl strtoll(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix
    )long long __cdecl _strtoll_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix,
    _In_opt_                 _locale_t   _Locale
    )unsigned long __cdecl strtoul(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix
    )unsigned long __cdecl _strtoul_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix,
    _In_opt_                 _locale_t   _Locale
    )unsigned long long __cdecl strtoull(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix
    )unsigned long long __cdecl _strtoull_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix,
    _In_opt_                 _locale_t   _Locale
    )__int64 __cdecl _strtoi64(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix
    )__int64 __cdecl _strtoi64_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix,
    _In_opt_                 _locale_t   _Locale
    )unsigned __int64 __cdecl _strtoui64(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix
    )unsigned __int64 __cdecl _strtoui64_l(
    _In_z_                   char const* _String,
    _Out_opt_ _Deref_post_z_ char**      _EndPtr,
    _In_                     int         _Radix,
    _In_opt_                 _locale_t   _Locale
    )errno_t __cdecl _itoa_s(
    _In_                         int    _Value,
    _Out_writes_z_(_BufferCount) char*  _Buffer,
    _In_                         size_t _BufferCount,
    _In_                         int    _Radix
    )errno_t __cdecl _ltoa_s(
    _In_                         long   _Value,
    _Out_writes_z_(_BufferCount) char*  _Buffer,
    _In_                         size_t _BufferCount,
    _In_                         int    _Radix
    )errno_t __cdecl _ultoa_s(
    _In_                         unsigned long _Value,
    _Out_writes_z_(_BufferCount) char*         _Buffer,
    _In_                         size_t        _BufferCount,
    _In_                         int           _Radix
    )errno_t __cdecl _i64toa_s(
    _In_                         __int64 _Value,
    _Out_writes_z_(_BufferCount) char*   _Buffer,
    _In_                         size_t  _BufferCount,
    _In_                         int     _Radix
    )_CRT_INSECURE_DEPRECATE(_i64toa_s)
_ACRTIMP char* __cdecl _i64toa(
    _In_                   __int64 _Value,
    _Pre_notnull_ _Post_z_ char*   _Buffer,
    _In_                   int     _Radix
    )errno_t __cdecl _ui64toa_s(
    _In_                         unsigned __int64 _Value,
    _Out_writes_z_(_BufferCount) char*            _Buffer,
    _In_                         size_t           _BufferCount,
    _In_                         int              _Radix
    )_CRT_INSECURE_DEPRECATE(_ui64toa_s)
_ACRTIMP char* __cdecl _ui64toa(
    _In_                   unsigned __int64 _Value,
    _Pre_notnull_ _Post_z_ char*            _Buffer,
    _In_                   int              _Radix
    )errno_t __cdecl _ecvt_s(
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_  size_t                       _BufferCount,
    _In_  double                       _Value,
    _In_  int                          _DigitCount,
    _Out_ int*                         _PtDec,
    _Out_ int*                         _PtSign
    )_CRT_INSECURE_DEPRECATE(_ecvt_s)
_ACRTIMP char* __cdecl _ecvt(
    _In_  double _Value,
    _In_  int    _DigitCount,
    _Out_ int*   _PtDec,
    _Out_ int*   _PtSign
    )errno_t __cdecl _fcvt_s(
    _Out_writes_z_(_BufferCount) char*  _Buffer,
    _In_                         size_t _BufferCount,
    _In_                         double _Value,
    _In_                         int    _FractionalDigitCount,
    _Out_                        int*   _PtDec,
    _Out_                        int*   _PtSign
    )_CRT_INSECURE_DEPRECATE(_fcvt_s)
_ACRTIMP char* __cdecl _fcvt(
    _In_  double _Value,
    _In_  int    _FractionalDigitCount,
    _Out_ int*   _PtDec,
    _Out_ int*   _PtSign
    )errno_t __cdecl _gcvt_s(
    _Out_writes_z_(_BufferCount) char*  _Buffer,
    _In_                         size_t _BufferCount,
    _In_                         double _Value,
    _In_                         int    _DigitCount
    )_CRT_INSECURE_DEPRECATE(_gcvt_s)
_ACRTIMP char* __cdecl _gcvt(
    _In_                   double _Value,
    _In_                   int    _DigitCount,
    _Pre_notnull_ _Post_z_ char*  _Buffer
    )int __cdecl ___mb_cur_max_func(void)int __cdecl ___mb_cur_max_l_func(_locale_t _Locale)int __cdecl mblen(
    _In_reads_bytes_opt_(_MaxCount) _Pre_opt_z_ char const* _Ch,
    _In_                                        size_t      _MaxCount
    )int __cdecl _mblen_l(
    _In_reads_bytes_opt_(_MaxCount) _Pre_opt_z_ char const* _Ch,
    _In_                                        size_t      _MaxCount,
    _In_opt_                                    _locale_t   _Locale
    )size_t __cdecl _mbstrlen(
    _In_z_ char const* _String
    )size_t __cdecl _mbstrlen_l(
    _In_z_   char const* _String,
    _In_opt_ _locale_t   _Locale
    )size_t __cdecl _mbstrnlen(
    _In_z_ char const* _String,
    _In_   size_t      _MaxCount
    )size_t __cdecl _mbstrnlen_l(
    _In_z_   char const* _String,
    _In_     size_t      _MaxCount,
    _In_opt_ _locale_t   _Locale
    )int __cdecl mbtowc(
    _Pre_notnull_ _Post_z_               wchar_t*    _DstCh,
    _In_reads_or_z_opt_(_SrcSizeInBytes) char const* _SrcCh,
    _In_                                 size_t      _SrcSizeInBytes
    )int __cdecl _mbtowc_l(
    _Pre_notnull_ _Post_z_               wchar_t*    _DstCh,
    _In_reads_or_z_opt_(_SrcSizeInBytes) char const* _SrcCh,
    _In_                                 size_t      _SrcSizeInBytes,
    _In_opt_                             _locale_t   _Locale
    )errno_t __cdecl mbstowcs_s(
    _Out_opt_                                                 size_t*     _PtNumOfCharConverted,
    _Out_writes_to_opt_(_SizeInWords, *_PtNumOfCharConverted) wchar_t*    _DstBuf,
    _In_                                                      size_t      _SizeInWords,
    _In_reads_or_z_(_MaxCount)                                char const* _SrcBuf,
    _In_                                                      size_t      _MaxCount
    )errno_t __cdecl _mbstowcs_s_l(
    _Out_opt_                                                 size_t*     _PtNumOfCharConverted,
    _Out_writes_to_opt_(_SizeInWords, *_PtNumOfCharConverted) wchar_t*    _DstBuf,
    _In_                                                      size_t      _SizeInWords,
    _In_reads_or_z_(_MaxCount)                                char const* _SrcBuf,
    _In_                                                      size_t      _MaxCount,
    _In_opt_                                                  _locale_t   _Locale
    )_CRT_INSECURE_DEPRECATE(wctomb_s)
_ACRTIMP int __cdecl wctomb(
    _Out_writes_opt_z_(MB_LEN_MAX) char*   _MbCh,
    _In_                           wchar_t _WCh
    )_CRT_INSECURE_DEPRECATE(_wctomb_s_l)
_ACRTIMP int __cdecl _wctomb_l(
    _Pre_maybenull_ _Post_z_ char*     _MbCh,
    _In_                     wchar_t   _WCh,
    _In_opt_                 _locale_t _Locale
    )errno_t __cdecl wctomb_s(
        _Out_opt_                                                int*    _SizeConverted,
        _Out_writes_bytes_to_opt_(_SizeInBytes, *_SizeConverted) char*   _MbCh,
        _In_                                                     rsize_t _SizeInBytes,
        _In_                                                     wchar_t _WCh
        )errno_t __cdecl _wctomb_s_l(
    _Out_opt_                        int*     _SizeConverted,
    _Out_writes_opt_z_(_SizeInBytes) char*     _MbCh,
    _In_                             size_t    _SizeInBytes,
    _In_                             wchar_t   _WCh,
    _In_opt_                         _locale_t _Locale)errno_t __cdecl wcstombs_s(
    _Out_opt_                                                          size_t*        _PtNumOfCharConverted,
    _Out_writes_bytes_to_opt_(_DstSizeInBytes, *_PtNumOfCharConverted) char*          _Dst,
    _In_                                                               size_t         _DstSizeInBytes,
    _In_z_                                                             wchar_t const* _Src,
    _In_                                                               size_t         _MaxCountInBytes
    )errno_t __cdecl _wcstombs_s_l(
    _Out_opt_                                                          size_t*        _PtNumOfCharConverted,
    _Out_writes_bytes_to_opt_(_DstSizeInBytes, *_PtNumOfCharConverted) char*          _Dst,
    _In_                                                               size_t         _DstSizeInBytes,
    _In_z_                                                             wchar_t const* _Src,
    _In_                                                               size_t         _MaxCountInBytes,
    _In_opt_                                                           _locale_t      _Locale
    )char* __cdecl _fullpath(
    _Out_writes_opt_z_(_BufferCount) char*       _Buffer,
    _In_z_                           char const* _Path,
    _In_                             size_t      _BufferCount
    )errno_t __cdecl _makepath_s(
    _Out_writes_z_(_BufferCount) char*       _Buffer,
    _In_                         size_t      _BufferCount,
    _In_opt_z_                   char const* _Drive,
    _In_opt_z_                   char const* _Dir,
    _In_opt_z_                   char const* _Filename,
    _In_opt_z_                   char const* _Ext
    )_CRT_INSECURE_DEPRECATE(_splitpath_s)
_ACRTIMP void __cdecl _splitpath(
    _In_z_                   char const* _FullPath,
    _Pre_maybenull_ _Post_z_ char*       _Drive,
    _Pre_maybenull_ _Post_z_ char*       _Dir,
    _Pre_maybenull_ _Post_z_ char*       _Filename,
    _Pre_maybenull_ _Post_z_ char*       _Ext
    )errno_t __cdecl _splitpath_s(
    _In_z_                             char const* _FullPath,
    _Out_writes_opt_z_(_DriveCount)    char*       _Drive,
    _In_                               size_t      _DriveCount,
    _Out_writes_opt_z_(_DirCount)      char*       _Dir,
    _In_                               size_t      _DirCount,
    _Out_writes_opt_z_(_FilenameCount) char*       _Filename,
    _In_                               size_t      _FilenameCount,
    _Out_writes_opt_z_(_ExtCount)      char*       _Ext,
    _In_                               size_t      _ExtCount
    )errno_t __cdecl getenv_s(
        _Out_                            size_t*     _RequiredCount,
        _Out_writes_opt_z_(_BufferCount) char*       _Buffer,
        _In_                             rsize_t     _BufferCount,
        _In_z_                           char const* _VarName
        )int*       __cdecl __p___argc (void)char***    __cdecl __p___argv (void)wchar_t*** __cdecl __p___wargv(void)char***    __cdecl __p__environ (void)wchar_t*** __cdecl __p__wenviron(void)_CRT_INSECURE_DEPRECATE(_dupenv_s)
        _DCRTIMP char* __cdecl getenv(
            _In_z_ char const* _VarName
            )errno_t __cdecl _dupenv_s(
            _Outptr_result_buffer_maybenull_(*_BufferCount) _Outptr_result_maybenull_z_ char**      _Buffer,
            _Out_opt_                                                                   size_t*     _BufferCount,
            _In_z_                                                                      char const* _VarName
            )int __cdecl system(
            _In_opt_z_ char const* _Command
            )int __cdecl _putenv(
            _In_z_ char const* _EnvString
            )errno_t __cdecl _putenv_s(
            _In_z_ char const* _Name,
            _In_z_ char const* _Value
            )errno_t __cdecl _searchenv_s(
            _In_z_                       char const* _Filename,
            _In_z_                       char const* _VarName,
            _Out_writes_z_(_BufferCount) char*       _Buffer,
            _In_                         size_t      _BufferCount
            )_CRT_OBSOLETE(SetErrorMode)
        _DCRTIMP void __cdecl _seterrormode(
            _In_ int _Mode
            )_CRT_OBSOLETE(Beep)
        _DCRTIMP void __cdecl _beep(
            _In_ unsigned _Frequency,
            _In_ unsigned _Duration
            )_CRT_OBSOLETE(Sleep)
        _DCRTIMP void __cdecl _sleep(
            _In_ unsigned long _Duration
            )_CRT_NONSTDC_DEPRECATE(_ecvt) _CRT_INSECURE_DEPRECATE(_ecvt_s)
    _ACRTIMP char* __cdecl ecvt(
        _In_  double _Value,
        _In_  int    _DigitCount,
        _Out_ int*   _PtDec,
        _Out_ int*   _PtSign
        )_CRT_NONSTDC_DEPRECATE(_fcvt) _CRT_INSECURE_DEPRECATE(_fcvt_s)
    _ACRTIMP char* __cdecl fcvt(
        _In_  double _Value,
        _In_  int    _FractionalDigitCount,
        _Out_ int*   _PtDec,
        _Out_ int*   _PtSign
        )_CRT_NONSTDC_DEPRECATE(_gcvt) _CRT_INSECURE_DEPRECATE(_fcvt_s)
    _ACRTIMP char* __cdecl gcvt(
        _In_                   double _Value,
        _In_                   int    _DigitCount,
        _Pre_notnull_ _Post_z_ char*  _DstBuf
        )_CRT_NONSTDC_DEPRECATE(_itoa) _CRT_INSECURE_DEPRECATE(_itoa_s)
    _ACRTIMP char* __cdecl itoa(
        _In_                   int   _Value,
        _Pre_notnull_ _Post_z_ char* _Buffer,
        _In_                   int   _Radix
        )_CRT_NONSTDC_DEPRECATE(_ltoa) _CRT_INSECURE_DEPRECATE(_ltoa_s)
    _ACRTIMP char* __cdecl ltoa(
        _In_                   long  _Value,
        _Pre_notnull_ _Post_z_ char* _Buffer,
        _In_                   int   _Radix
        )_CRT_NONSTDC_DEPRECATE(_swab)
    _ACRTIMP void __cdecl swab(
        _Inout_updates_z_(_SizeInBytes) char* _Buf1,
        _Inout_updates_z_(_SizeInBytes) char* _Buf2,
        _In_                            int   _SizeInBytes
        )_CRT_NONSTDC_DEPRECATE(_ultoa) _CRT_INSECURE_DEPRECATE(_ultoa_s)
    _ACRTIMP char* __cdecl ultoa(
        _In_                   unsigned long _Value,
        _Pre_notnull_ _Post_z_ char*         _Buffer,
        _In_                   int           _Radix
        )_CRT_NONSTDC_DEPRECATE(_putenv)
        _DCRTIMP int __cdecl putenv(
            _In_z_ char const* _EnvString
            )onexit_t __cdecl onexit(_In_opt_ onexit_t _Func)struct _exception
    {
        int    type;   // exception type - see below
        char*  name;   // name of function where error occurred
        double arg1;   // first argument to function
        double arg2;   // second argument (if any) to function
        double retval; // value to be returned by function
    }struct _complex
        {
            double x, y; // real and imaginary parts
        }typedef float  float_ttypedef double double_textern double const _HUGEvoid __cdecl _fperrraise(_In_ int _Except)short __cdecl _dclass(_In_ double _X)short __cdecl _ldclass(_In_ long double _X)short __cdecl _fdclass(_In_ float _X)int __cdecl _dsign(_In_ double _X)int __cdecl _ldsign(_In_ long double _X)int __cdecl _fdsign(_In_ float _X)int __cdecl _dpcomp(_In_ double _X, _In_ double _Y)int __cdecl _ldpcomp(_In_ long double _X, _In_ long double _Y)int __cdecl _fdpcomp(_In_ float _X, _In_ float _Y)short __cdecl _dtest(_In_ double* _Px)short __cdecl _ldtest(_In_ long double* _Px)short __cdecl _fdtest(_In_ float* _Px)short __cdecl _d_int(_Inout_ double* _Px, _In_ short _Xexp)short __cdecl _ld_int(_Inout_ long double* _Px, _In_ short _Xexp)short __cdecl _fd_int(_Inout_ float* _Px, _In_ short _Xexp)short __cdecl _dscale(_Inout_ double* _Px, _In_ long _Lexp)short __cdecl _ldscale(_Inout_ long double* _Px, _In_ long _Lexp)short __cdecl _fdscale(_Inout_ float* _Px, _In_ long _Lexp)short __cdecl _dunscale(_Out_ short* _Pex, _Inout_ double* _Px)short __cdecl _ldunscale(_Out_ short* _Pex, _Inout_ long double* _Px)short __cdecl _fdunscale(_Out_ short* _Pex, _Inout_ float* _Px)short __cdecl _dexp(_Inout_ double* _Px, _In_ double _Y, _In_ long _Eoff)short __cdecl _ldexp(_Inout_ long double* _Px, _In_ long double _Y, _In_ long _Eoff)short __cdecl _fdexp(_Inout_ float* _Px, _In_ float _Y, _In_ long _Eoff)short __cdecl _dnorm(_Inout_updates_(4) unsigned short* _Ps)short __cdecl _fdnorm(_Inout_updates_(2) unsigned short* _Ps)double __cdecl _dpoly(_In_ double _X, _In_reads_(_N) double const* _Tab, _In_ int _N)long double __cdecl _ldpoly(_In_ long double _X, _In_reads_(_N) long double const* _Tab, _In_ int _N)float __cdecl _fdpoly(_In_ float _X, _In_reads_(_N) float const* _Tab, _In_ int _N)double __cdecl _dlog(_In_ double _X, _In_ int _Baseflag)long double __cdecl _ldlog(_In_ long double _X, _In_ int _Baseflag)float __cdecl _fdlog(_In_ float _X, _In_ int _Baseflag)double __cdecl _dsin(_In_ double _X, _In_ unsigned int _Qoff)long double __cdecl _ldsin(_In_ long double _X, _In_ unsigned int _Qoff)float __cdecl _fdsin(_In_ float _X, _In_ unsigned int _Qoff)union
{   // pun floating type as integer array
    unsigned short _Sh[4];
    double _Val;
}typedef union
{   // pun floating type as integer array
    unsigned short _Sh[4];
    double _Val;
} _double_valunion
{   // pun floating type as integer array
    unsigned short _Sh[2];
    float _Val;
}typedef union
{   // pun floating type as integer array
    unsigned short _Sh[2];
    float _Val;
} _float_valunion
{   // pun floating type as integer array
    unsigned short _Sh[4];
    long double _Val;
}typedef union
{   // pun floating type as integer array
    unsigned short _Sh[4];
    long double _Val;
} _ldouble_valunion
{   // pun float types as integer array
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
}typedef union
{   // pun float types as integer array
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_constextern const _float_const _Denorm_Cextern const _float_const _Denorm_C,  _Inf_Cextern const _float_const _Denorm_C,  _Inf_C,  _Nan_Cextern const _float_const _Denorm_C,  _Inf_C,  _Nan_C,  _Snan_Cextern const _float_const _Denorm_C,  _Inf_C,  _Nan_C,  _Snan_C, _Hugeval_Cextern const _float_const _FDenorm_Cextern const _float_const _FDenorm_C, _FInf_Cextern const _float_const _FDenorm_C, _FInf_C, _FNan_Cextern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_Cextern const _float_const _LDenorm_Cextern const _float_const _LDenorm_C, _LInf_Cextern const _float_const _LDenorm_C, _LInf_C, _LNan_Cextern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_Cextern const _float_const _Eps_Cextern const _float_const _Eps_C,  _Rteps_Cextern const _float_const _FEps_Cextern const _float_const _FEps_C, _FRteps_Cextern const _float_const _LEps_Cextern const _float_const _LEps_C, _LRteps_Cextern const double      _Zero_Cextern const double      _Zero_C,  _Xbig_Cextern const float       _FZero_Cextern const float       _FZero_C, _FXbig_Cextern const long double _LZero_Cextern const long double _LZero_C, _LXbig_Cint       __cdecl abs(_In_ int _X)long      __cdecl labs(_In_ long _X)long long __cdecl llabs(_In_ long long _X)acosdouble __cdecl acos(_In_ double _X)asindouble __cdecl asin(_In_ double _X)atandouble __cdecl atan(_In_ double _X)atan2double __cdecl atan2(_In_ double _Y, _In_ double _X)cosdouble __cdecl cos(_In_ double _X)coshdouble __cdecl cosh(_In_ double _X)expdouble __cdecl exp(_In_ double _X)fabsdouble __cdecl fabs(_In_ double _X)fmoddouble __cdecl fmod(_In_ double _X, _In_ double _Y)logdouble __cdecl log(_In_ double _X)log10double __cdecl log10(_In_ double _X)powdouble __cdecl pow(_In_ double _X, _In_ double _Y)sindouble __cdecl sin(_In_ double _X)sinhdouble __cdecl sinh(_In_ double _X)sqrtdouble __cdecl sqrt(_In_ double _X)tandouble __cdecl tan(_In_ double _X)tanhdouble __cdecl tanh(_In_ double _X)acoshdouble    __cdecl acosh(_In_ double _X)asinhdouble    __cdecl asinh(_In_ double _X)atanhdouble    __cdecl atanh(_In_ double _X)double    __cdecl atof(_In_z_ char const* _String)double    __cdecl _atof_l(_In_z_ char const* _String, _In_opt_ _locale_t _Locale)double    __cdecl _cabs(_In_ struct _complex _Complex_value)cbrtdouble    __cdecl cbrt(_In_ double _X)ceildouble    __cdecl ceil(_In_ double _X)double    __cdecl _chgsign(_In_ double _X)copysigndouble    __cdecl copysign(_In_ double _Number, _In_ double _Sign)double    __cdecl _copysign(_In_ double _Number, _In_ double _Sign)erfdouble    __cdecl erf(_In_ double _X)erfcdouble    __cdecl erfc(_In_ double _X)exp2double    __cdecl exp2(_In_ double _X)expm1double    __cdecl expm1(_In_ double _X)fdimdouble    __cdecl fdim(_In_ double _X, _In_ double _Y)floordouble    __cdecl floor(_In_ double _X)fmadouble    __cdecl fma(_In_ double _X, _In_ double _Y, _In_ double _Z)fmaxdouble    __cdecl fmax(_In_ double _X, _In_ double _Y)fmindouble    __cdecl fmin(_In_ double _X, _In_ double _Y)frexpdouble    __cdecl frexp(_In_ double _X, _Out_ int* _Y)hypotdouble    __cdecl hypot(_In_ double _X, _In_ double _Y)double    __cdecl _hypot(_In_ double _X, _In_ double _Y)ilogbint       __cdecl ilogb(_In_ double _X)ldexpdouble    __cdecl ldexp(_In_ double _X, _In_ int _Y)lgammadouble    __cdecl lgamma(_In_ double _X)llrintlong long __cdecl llrint(_In_ double _X)llroundlong long __cdecl llround(_In_ double _X)log1pdouble    __cdecl log1p(_In_ double _X)log2double    __cdecl log2(_In_ double _X)logbdouble    __cdecl logb(_In_ double _X)lrintlong      __cdecl lrint(_In_ double _X)lroundlong      __cdecl lround(_In_ double _X)int __CRTDECL _matherr(_Inout_ struct _exception* _Except)modfdouble __cdecl modf(_In_ double _X, _Out_ double* _Y)nandouble __cdecl nan(_In_ char const* _X)nearbyintdouble __cdecl nearbyint(_In_ double _X)nextafterdouble __cdecl nextafter(_In_ double _X, _In_ double _Y)nexttowarddouble __cdecl nexttoward(_In_ double _X, _In_ long double _Y)remainderdouble __cdecl remainder(_In_ double _X, _In_ double _Y)double __cdecl remquo(_In_ double _X, _In_ double _Y, _Out_ int* _Z)rintdouble __cdecl rint(_In_ double _X)rounddouble __cdecl round(_In_ double _X)scalblndouble __cdecl scalbln(_In_ double _X, _In_ long _Y)scalbndouble __cdecl scalbn(_In_ double _X, _In_ int _Y)tgammadouble __cdecl tgamma(_In_ double _X)truncdouble __cdecl trunc(_In_ double _X)double __cdecl _j0(_In_ double _X )double __cdecl _j1(_In_ double _X )double __cdecl _jn(int _X, _In_ double _Y)double __cdecl _y0(_In_ double _X)double __cdecl _y1(_In_ double _X)double __cdecl _yn(_In_ int _X, _In_ double _Y)acoshffloat     __cdecl acoshf(_In_ float _X)asinhffloat     __cdecl asinhf(_In_ float _X)atanhffloat     __cdecl atanhf(_In_ float _X)cbrtffloat     __cdecl cbrtf(_In_ float _X)float     __cdecl _chgsignf(_In_ float _X)copysignffloat     __cdecl copysignf(_In_ float _Number, _In_ float _Sign)float     __cdecl _copysignf(_In_ float _Number, _In_ float _Sign)erfffloat     __cdecl erff(_In_ float _X)erfcffloat     __cdecl erfcf(_In_ float _X)expm1ffloat     __cdecl expm1f(_In_ float _X)exp2ffloat     __cdecl exp2f(_In_ float _X)fdimffloat     __cdecl fdimf(_In_ float _X, _In_ float _Y)fmaffloat     __cdecl fmaf(_In_ float _X, _In_ float _Y, _In_ float _Z)fmaxffloat     __cdecl fmaxf(_In_ float _X, _In_ float _Y)fminffloat     __cdecl fminf(_In_ float _X, _In_ float _Y)float     __cdecl _hypotf(_In_ float _X, _In_ float _Y)ilogbfint       __cdecl ilogbf(_In_ float _X)lgammaffloat     __cdecl lgammaf(_In_ float _X)llrintflong long __cdecl llrintf(_In_ float _X)llroundflong long __cdecl llroundf(_In_ float _X)log1pffloat     __cdecl log1pf(_In_ float _X)log2ffloat     __cdecl log2f(_In_ float _X)logbffloat     __cdecl logbf(_In_ float _X)lrintflong      __cdecl lrintf(_In_ float _X)lroundflong      __cdecl lroundf(_In_ float _X)nanffloat     __cdecl nanf(_In_ char const* _X)nearbyintffloat     __cdecl nearbyintf(_In_ float _X)nextafterffloat     __cdecl nextafterf(_In_ float _X, _In_ float _Y)nexttowardffloat     __cdecl nexttowardf(_In_ float _X, _In_ long double _Y)remainderffloat     __cdecl remainderf(_In_ float _X, _In_ float _Y)float     __cdecl remquof(_In_ float _X, _In_ float _Y, _Out_ int* _Z)rintffloat     __cdecl rintf(_In_ float _X)roundffloat     __cdecl roundf(_In_ float _X)scalblnffloat     __cdecl scalblnf(_In_ float _X, _In_ long _Y)scalbnffloat     __cdecl scalbnf(_In_ float _X, _In_ int _Y)tgammaffloat     __cdecl tgammaf(_In_ float _X)truncffloat     __cdecl truncf(_In_ float _X)float __cdecl _logbf(_In_ float _X)float __cdecl _nextafterf(_In_ float _X, _In_ float _Y)int   __cdecl _finitef(_In_ float _X)int   __cdecl _isnanf(_In_ float _X)int   __cdecl _fpclassf(_In_ float _X)int   __cdecl _set_FMA3_enable(_In_ int _Flag)int   __cdecl _get_FMA3_enable(void)acosffloat __cdecl acosf(_In_ float _X)asinffloat __cdecl asinf(_In_ float _X)atan2ffloat __cdecl atan2f(_In_ float _Y, _In_ float _X)atanffloat __cdecl atanf(_In_ float _X)ceilffloat __cdecl ceilf(_In_ float _X)cosffloat __cdecl cosf(_In_ float _X)coshffloat __cdecl coshf(_In_ float _X)expffloat __cdecl expf(_In_ float _X)fabsf__inline float __CRTDECL fabsf(_In_ float _X)
        {
            return (float)fabs(_X);
        }floorffloat __cdecl floorf(_In_ float _X)fmodffloat __cdecl fmodf(_In_ float _X, _In_ float _Y)frexpf__inline float __CRTDECL frexpf(_In_ float _X, _Out_ int *_Y)
    {
        return (float)frexp(_X, _Y);
    }hypotf__inline float __CRTDECL hypotf(_In_ float _X, _In_ float _Y)
    {
        return _hypotf(_X, _Y);
    }ldexpf__inline float __CRTDECL ldexpf(_In_ float _X, _In_ int _Y)
    {
        return (float)ldexp(_X, _Y);
    }log10ffloat  __cdecl log10f(_In_ float _X)logffloat  __cdecl logf(_In_ float _X)modfffloat  __cdecl modff(_In_ float _X, _Out_ float *_Y)powffloat  __cdecl powf(_In_ float _X, _In_ float _Y)sinffloat  __cdecl sinf(_In_ float _X)sinhffloat  __cdecl sinhf(_In_ float _X)sqrtffloat  __cdecl sqrtf(_In_ float _X)tanffloat  __cdecl tanf(_In_ float _X)tanhffloat  __cdecl tanhf(_In_ float _X)acoshllong double __cdecl acoshl(_In_ long double _X)acosl__inline long double __CRTDECL acosl(_In_ long double _X)
    {
        return acos((double)_X);
    }asinhllong double __cdecl asinhl(_In_ long double _X)asinl__inline long double __CRTDECL asinl(_In_ long double _X)
    {
        return asin((double)_X);
    }atan2l__inline long double __CRTDECL atan2l(_In_ long double _Y, _In_ long double _X)
    {
        return atan2((double)_Y, (double)_X);
    }atanhllong double __cdecl atanhl(_In_ long double _X)atanl__inline long double __CRTDECL atanl(_In_ long double _X)
    {
        return atan((double)_X);
    }cbrtllong double __cdecl cbrtl(_In_ long double _X)ceill__inline long double __CRTDECL ceill(_In_ long double _X)
    {
        return ceil((double)_X);
    }__inline long double __CRTDECL _chgsignl(_In_ long double _X)
    {
        return _chgsign((double)_X);
    }copysignllong double __cdecl copysignl(_In_ long double _Number, _In_ long double _Sign)__inline long double __CRTDECL _copysignl(_In_ long double _Number, _In_ long double _Sign)
    {
        return _copysign((double)_Number, (double)_Sign);
    }coshl__inline long double __CRTDECL coshl(_In_ long double _X)
    {
        return cosh((double)_X);
    }cosl__inline long double __CRTDECL cosl(_In_ long double _X)
    {
        return cos((double)_X);
    }erfllong double __cdecl erfl(_In_ long double _X)erfcllong double __cdecl erfcl(_In_ long double _X)expl__inline long double __CRTDECL expl(_In_ long double _X)
    {
        return exp((double)_X);
    }exp2llong double __cdecl exp2l(_In_ long double _X)expm1llong double __cdecl expm1l(_In_ long double _X)fabsl__inline long double __CRTDECL fabsl(_In_ long double _X)
    {
        return fabs((double)_X);
    }fdimllong double __cdecl fdiml(_In_ long double _X, _In_ long double _Y)floorl__inline long double __CRTDECL floorl(_In_ long double _X)
    {
        return floor((double)_X);
    }fmallong double __cdecl fmal(_In_ long double _X, _In_ long double _Y, _In_ long double _Z)fmaxllong double __cdecl fmaxl(_In_ long double _X, _In_ long double _Y)fminllong double __cdecl fminl(_In_ long double _X, _In_ long double _Y)fmodl__inline long double __CRTDECL fmodl(_In_ long double _X, _In_ long double _Y)
    {
        return fmod((double)_X, (double)_Y);
    }frexpl__inline long double __CRTDECL frexpl(_In_ long double _X, _Out_ int *_Y)
    {
        return frexp((double)_X, _Y);
    }ilogblint __cdecl ilogbl(_In_ long double _X)__inline long double __CRTDECL _hypotl(_In_ long double _X, _In_ long double _Y)
    {
        return _hypot((double)_X, (double)_Y);
    }hypotl__inline long double __CRTDECL hypotl(_In_ long double _X, _In_ long double _Y)
    {
        return _hypot((double)_X, (double)_Y);
    }ldexpl__inline long double __CRTDECL ldexpl(_In_ long double _X, _In_ int _Y)
    {
        return ldexp((double)_X, _Y);
    }lgammallong double __cdecl lgammal(_In_ long double _X)llrintllong long __cdecl llrintl(_In_ long double _X)llroundllong long __cdecl llroundl(_In_ long double _X)logl__inline long double __CRTDECL logl(_In_ long double _X)
    {
        return log((double)_X);
    }log10l__inline long double __CRTDECL log10l(_In_ long double _X)
    {
        return log10((double)_X);
    }log1pllong double __cdecl log1pl(_In_ long double _X)log2llong double __cdecl log2l(_In_ long double _X)logbllong double __cdecl logbl(_In_ long double _X)lrintllong __cdecl lrintl(_In_ long double _X)lroundllong __cdecl lroundl(_In_ long double _X)modfl__inline long double __CRTDECL modfl(_In_ long double _X, _Out_ long double* _Y)
    {
        double _F, _I;
        _F = modf((double)_X, &_I);
        *_Y = _I;
        return _F;
    }nanllong double __cdecl nanl(_In_ char const* _X)nearbyintllong double __cdecl nearbyintl(_In_ long double _X)nextafterllong double __cdecl nextafterl(_In_ long double _X, _In_ long double _Y)nexttowardllong double __cdecl nexttowardl(_In_ long double _X, _In_ long double _Y)powl__inline long double __CRTDECL powl(_In_ long double _X, _In_ long double _Y)
    {
        return pow((double)_X, (double)_Y);
    }remainderllong double __cdecl remainderl(_In_ long double _X, _In_ long double _Y)long double __cdecl remquol(_In_ long double _X, _In_ long double _Y, _Out_ int* _Z)rintllong double __cdecl rintl(_In_ long double _X)roundllong double __cdecl roundl(_In_ long double _X)scalblnllong double __cdecl scalblnl(_In_ long double _X, _In_ long _Y)scalbnllong double __cdecl scalbnl(_In_ long double _X, _In_ int _Y)sinhl__inline long double __CRTDECL sinhl(_In_ long double _X)
    {
        return sinh((double)_X);
    }sinl__inline long double __CRTDECL sinl(_In_ long double _X)
    {
        return sin((double)_X);
    }sqrtl__inline long double __CRTDECL sqrtl(_In_ long double _X)
    {
        return sqrt((double)_X);
    }tanhl__inline long double __CRTDECL tanhl(_In_ long double _X)
    {
        return tanh((double)_X);
    }tanl__inline long double __CRTDECL tanl(_In_ long double _X)
    {
        return tan((double)_X);
    }tgammallong double __cdecl tgammal(_In_ long double _X)truncllong double __cdecl truncl(_In_ long double _X)extern double HUGE_CRT_NONSTDC_DEPRECATE(_j0) _Check_return_ _ACRTIMP double __cdecl j0(_In_ double _X)_CRT_NONSTDC_DEPRECATE(_j1) _Check_return_ _ACRTIMP double __cdecl j1(_In_ double _X)_CRT_NONSTDC_DEPRECATE(_jn) _Check_return_ _ACRTIMP double __cdecl jn(_In_ int _X, _In_ double _Y)_CRT_NONSTDC_DEPRECATE(_y0) _Check_return_ _ACRTIMP double __cdecl y0(_In_ double _X)_CRT_NONSTDC_DEPRECATE(_y1) _Check_return_ _ACRTIMP double __cdecl y1(_In_ double _X)_CRT_NONSTDC_DEPRECATE(_yn) _Check_return_ _ACRTIMP double __cdecl yn(_In_ int _X, _In_ double _Y)FILE* __cdecl __acrt_iob_func(unsigned _Ix)wint_t __cdecl fgetwc(
        _Inout_ FILE* _Stream
        )wint_t __cdecl _fgetwchar(void)wint_t __cdecl fputwc(
        _In_    wchar_t _Character,
        _Inout_ FILE*   _Stream)wint_t __cdecl _fputwchar(
        _In_ wchar_t _Character
        )wint_t __cdecl getwc(
        _Inout_ FILE* _Stream
        )wint_t __cdecl getwchar(void)wchar_t* __cdecl fgetws(
        _Out_writes_z_(_BufferCount) wchar_t* _Buffer,
        _In_                         int      _BufferCount,
        _Inout_                      FILE*    _Stream
        )int __cdecl fputws(
        _In_z_  wchar_t const* _Buffer,
        _Inout_ FILE*          _Stream
        )wchar_t* __cdecl _getws_s(
        _Out_writes_z_(_BufferCount) wchar_t* _Buffer,
        _In_                         size_t   _BufferCount
        )wint_t __cdecl putwc(
        _In_    wchar_t _Character,
        _Inout_ FILE*   _Stream
        )wint_t __cdecl putwchar(
        _In_ wchar_t _Character
        )int __cdecl _putws(
        _In_z_ wchar_t const* _Buffer
        )wint_t __cdecl ungetwc(
        _In_    wint_t _Character,
        _Inout_ FILE*  _Stream
        )FILE * __cdecl _wfdopen(
        _In_   int            _FileHandle,
        _In_z_ wchar_t const* _Mode
        )_CRT_INSECURE_DEPRECATE(_wfopen_s)
    _ACRTIMP FILE* __cdecl _wfopen(
        _In_z_ wchar_t const* _FileName,
        _In_z_ wchar_t const* _Mode
        )errno_t __cdecl _wfopen_s(
        _Outptr_result_maybenull_ FILE**         _Stream,
        _In_z_                    wchar_t const* _FileName,
        _In_z_                    wchar_t const* _Mode
        )_CRT_INSECURE_DEPRECATE(_wfreopen_s)
    _ACRTIMP FILE* __cdecl _wfreopen(
        _In_z_  wchar_t const* _FileName,
        _In_z_  wchar_t const* _Mode,
        _Inout_ FILE*          _OldStream
        )errno_t __cdecl _wfreopen_s(
        _Outptr_result_maybenull_ FILE**         _Stream,
        _In_z_                    wchar_t const* _FileName,
        _In_z_                    wchar_t const* _Mode,
        _Inout_                   FILE*          _OldStream
        )FILE* __cdecl _wfsopen(
        _In_z_ wchar_t const* _FileName,
        _In_z_ wchar_t const* _Mode,
        _In_   int            _ShFlag
        )void __cdecl _wperror(
        _In_opt_z_ wchar_t const* _ErrorMessage
        )FILE* __cdecl _wpopen(
            _In_z_ wchar_t const* _Command,
            _In_z_ wchar_t const* _Mode
            )int __cdecl _wremove(
        _In_z_ wchar_t const* _FileName
        )wchar_t* __cdecl _wtempnam(
        _In_opt_z_ wchar_t const* _Directory,
        _In_opt_z_ wchar_t const* _FilePrefix
        )errno_t __cdecl _wtmpnam_s(
        _Out_writes_z_(_BufferCount) wchar_t* _Buffer,
        _In_                         size_t   _BufferCount
        )wint_t __cdecl _fgetwc_nolock(
        _Inout_ FILE* _Stream
        )wint_t __cdecl _fputwc_nolock(
        _In_    wchar_t _Character,
        _Inout_ FILE*   _Stream
        )wint_t __cdecl _getwc_nolock(
        _Inout_ FILE* _Stream
        )wint_t __cdecl _putwc_nolock(
        _In_    wchar_t _Character,
        _Inout_ FILE*   _Stream
        )wint_t __cdecl _ungetwc_nolock(
        _In_    wint_t _Character,
        _Inout_ FILE*  _Stream
        )int __cdecl __stdio_common_vfwprintf(
        _In_                                    unsigned __int64 _Options,
        _Inout_                                 FILE*            _Stream,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vfwprintf_s(
        _In_                                    unsigned __int64 _Options,
        _Inout_                                 FILE*            _Stream,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vfwprintf_p(
        _In_                                    unsigned __int64 _Options,
        _Inout_                                 FILE*            _Stream,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )_CRT_STDIO_INLINE int __CRTDECL _vfwprintf_l(
        _Inout_                                 FILE*          const _Stream,
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfwprintf(
        _Inout_                       FILE*          const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_l(_Stream, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vfwprintf_s_l(
        _Inout_                                 FILE*          const _Stream,
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfwprintf_s(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfwprintf_s(
            _Inout_                       FILE*          const _Stream,
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfwprintf_s_l(_Stream, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vfwprintf_p_l(
        _Inout_                                 FILE*          const _Stream,
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfwprintf_p(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vfwprintf_p(
        _Inout_                       FILE*          const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_p_l(_Stream, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vwprintf_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_l(stdout, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vwprintf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_l(stdout, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vwprintf_s_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_s_l(stdout, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vwprintf_s(
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfwprintf_s_l(stdout, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vwprintf_p_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_p_l(stdout, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vwprintf_p(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwprintf_p_l(stdout, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _fwprintf_l(
        _Inout_                                 FILE*          const _Stream,
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL fwprintf(
        _Inout_                       FILE*          const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfwprintf_l(_Stream, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _fwprintf_s_l(
        _Inout_                                 FILE*          const _Stream,
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL fwprintf_s(
            _Inout_                       FILE*          const _Stream,
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfwprintf_s_l(_Stream, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_STDIO_INLINE int __CRTDECL _fwprintf_p_l(
        _Inout_                                 FILE*          const _Stream,
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _fwprintf_p(
        _Inout_                       FILE*          const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfwprintf_p_l(_Stream, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _wprintf_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwprintf_l(stdout, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL wprintf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfwprintf_l(stdout, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _wprintf_s_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwprintf_s_l(stdout, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL wprintf_s(
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfwprintf_s_l(stdout, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_STDIO_INLINE int __CRTDECL _wprintf_p_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwprintf_p_l(stdout, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _wprintf_p(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfwprintf_p_l(stdout, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }int __cdecl __stdio_common_vfwscanf(
        _In_                                   unsigned __int64 _Options,
        _Inout_                                FILE*            _Stream,
        _In_z_ _Scanf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                               _locale_t        _Locale,
                                               va_list          _ArgList
        )_CRT_STDIO_INLINE int __CRTDECL _vfwscanf_l(
        _Inout_ FILE*                                const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        _In_opt_                      _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfwscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfwscanf(
        _Inout_ FILE*                                const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwscanf_l(_Stream, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vfwscanf_s_l(
        _Inout_                       FILE*          const _Stream,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        _In_opt_                      _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfwscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfwscanf_s(
            _Inout_                       FILE*          const _Stream,
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfwscanf_s_l(_Stream, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vwscanf_l(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        _In_opt_                      _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwscanf_l(stdin, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vwscanf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwscanf_l(stdin, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vwscanf_s_l(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        _In_opt_                      _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfwscanf_s_l(stdin, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vwscanf_s(
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfwscanf_s_l(stdin, _Format, NULL, _ArgList);
        }_CRT_INSECURE_DEPRECATE(_fwscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _fwscanf_l(
        _Inout_                                FILE*          const _Stream,
        _In_z_ _Scanf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(fwscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL fwscanf(
        _Inout_                      FILE*          const _Stream,
        _In_z_ _Scanf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfwscanf_l(_Stream, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _fwscanf_s_l(
        _Inout_                                  FILE*          const _Stream,
        _In_z_ _Scanf_s_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                 _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL fwscanf_s(
            _Inout_                        FILE*          const _Stream,
            _In_z_ _Scanf_s_format_string_ wchar_t const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfwscanf_s_l(_Stream, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_INSECURE_DEPRECATE(_wscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _wscanf_l(
        _In_z_ _Scanf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwscanf_l(stdin, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(wscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL wscanf(
        _In_z_ _Scanf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfwscanf_l(stdin, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _wscanf_s_l(
        _In_z_ _Scanf_s_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                 _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfwscanf_s_l(stdin, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL wscanf_s(
            _In_z_ _Scanf_s_format_string_ wchar_t const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
            ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfwscanf_s_l(stdin, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }int __cdecl __stdio_common_vswprintf(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_opt_z_(_BufferCount)        wchar_t*         _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vswprintf_s(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_z_(_BufferCount)            wchar_t*         _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vsnwprintf_s(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_opt_z_(_BufferCount)        wchar_t*         _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_                                    size_t           _MaxCount,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vswprintf_p(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_z_(_BufferCount)            wchar_t*         _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )_CRT_INSECURE_DEPRECATE(_vsnwprintf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _vsnwprintf_l(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ wchar_t*       const _Buffer,
        _In_                                         size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)      wchar_t const* const _Format,
        _In_opt_                                     _locale_t      const _Locale,
                                                     va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vswprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vsnwprintf_s_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_                                              size_t         const _MaxCount,
        _In_z_ _Printf_format_string_params_(2)           wchar_t const* const _Format,
        _In_opt_                                          _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsnwprintf_s(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vsnwprintf_s(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_                                              size_t         const _MaxCount,
        _In_z_ _Printf_format_string_                     wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, NULL, _ArgList);
    }_CRT_INSECURE_DEPRECATE(_vsnwprintf_s)
    _CRT_STDIO_INLINE int __CRTDECL _vsnwprintf(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ wchar_t*       _Buffer,
        _In_                                         size_t         _BufferCount,
        _In_z_ _Printf_format_string_                wchar_t const* _Format,
                                                     va_list        _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        return _vsnwprintf_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        #pragma warning(pop)
    }_CRT_STDIO_INLINE int __CRTDECL _vswprintf_c_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)           wchar_t const* const _Format,
        _In_opt_                                          _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vswprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vswprintf_c(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_                     wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vswprintf_c_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vswprintf_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)           wchar_t const* const _Format,
        _In_opt_                                          _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        #pragma warning(pop)
    }_CRT_STDIO_INLINE int __CRTDECL __vswprintf_l(
        _Pre_notnull_ _Always_(_Post_z_)        wchar_t*       const _Buffer,
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vswprintf(
        _Pre_notnull_ _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_z_ _Printf_format_string_    wchar_t const* const _Format,
                                         va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vswprintf_l(_Buffer, (size_t)-1, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vswprintf(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(1)           wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vswprintf_c_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vswprintf_s_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                          size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)       wchar_t const* const _Format,
        _In_opt_                                      _locale_t      const _Locale,
                                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vswprintf_s(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL vswprintf_s(
            _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
            _In_                                          size_t         const _BufferCount,
            _In_z_ _Printf_format_string_                 wchar_t const* const _Format,
                                                          va_list              _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vswprintf_s_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vswprintf_p_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                          size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)       wchar_t const* const _Format,
        _In_opt_                                      _locale_t      const _Locale,
                                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vswprintf_p(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vswprintf_p(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                          size_t         const _BufferCount,
        _In_z_ _Printf_format_string_                 wchar_t const* const _Format,
                                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vswprintf_p_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vscwprintf_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vswprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR,
            NULL, 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vscwprintf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vscwprintf_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vscwprintf_p_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vswprintf_p(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR,
            NULL, 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vscwprintf_p(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vscwprintf_p_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL __swprintf_l(
        _Pre_notnull_ _Always_(_Post_z_)        wchar_t*       const _Buffer,
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swprintf_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)           wchar_t const* const _Format,
        _In_opt_                                          _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swprintf(
        _Pre_notnull_ _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_z_ _Printf_format_string_    wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = __vswprintf_l(_Buffer, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL swprintf(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_                     wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swprintf_s_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                          size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)       wchar_t const* const _Format,
        _In_opt_                                      _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL swprintf_s(
            _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
            _In_                                          size_t         const _BufferCount,
            _In_z_ _Printf_format_string_                 wchar_t const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_STDIO_INLINE int __CRTDECL _swprintf_p_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                          size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)       wchar_t const* const _Format,
        _In_opt_                                      _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swprintf_p(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                          size_t         const _BufferCount,
        _In_z_ _Printf_format_string_                 wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swprintf_c_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)           wchar_t const* const _Format,
        _In_opt_                                          _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swprintf_c(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_z_ _Printf_format_string_                     wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(_snwprintf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _snwprintf_l(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ wchar_t*       const _Buffer,
        _In_                                         size_t         const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)      wchar_t const* const _Format,
        _In_opt_                                     _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snwprintf(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ wchar_t*       _Buffer,
        _In_                                         size_t         _BufferCount,
        _In_z_ _Printf_format_string_                wchar_t const* _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snwprintf_s_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_                                              size_t         const _MaxCount,
        _In_z_ _Printf_format_string_params_(0)           wchar_t const* const _Format,
        _In_opt_                                          _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snwprintf_s(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) wchar_t*       const _Buffer,
        _In_                                              size_t         const _BufferCount,
        _In_                                              size_t         const _MaxCount,
        _In_z_ _Printf_format_string_                     wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scwprintf_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vscwprintf_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scwprintf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vscwprintf_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scwprintf_p_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vscwprintf_p_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scwprintf_p(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vscwprintf_p_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }int __cdecl __stdio_common_vswscanf(
        _In_                                   unsigned __int64 _Options,
        _In_reads_(_BufferCount) _Pre_z_       wchar_t const*   _Buffer,
        _In_                                   size_t           _BufferCount,
        _In_z_ _Scanf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                               _locale_t        _Locale,
                                               va_list          _ArgList
        )_CRT_STDIO_INLINE int __CRTDECL _vswscanf_l(
        _In_z_                        wchar_t const* const _Buffer,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        _In_opt_                      _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vswscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vswscanf(
        _In_z_                        wchar_t const* _Buffer,
        _In_z_ _Printf_format_string_ wchar_t const* _Format,
                                      va_list        _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vswscanf_l(_Buffer, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vswscanf_s_l(
        _In_z_                        wchar_t const* const _Buffer,
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        _In_opt_                      _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vswscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vswscanf_s(
            _In_z_                        wchar_t const* const _Buffer,
            _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vswscanf_s_l(_Buffer, _Format, NULL, _ArgList);
        }_CRT_INSECURE_DEPRECATE(_vsnwscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _vsnwscanf_l(
        _In_reads_(_BufferCount) _Pre_z_       wchar_t const* const _Buffer,
        _In_                                   size_t         const _BufferCount,
        _In_z_ _Scanf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
                                               va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vswscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vsnwscanf_s_l(
        _In_reads_(_BufferCount) _Pre_z_         wchar_t const* const _Buffer,
        _In_                                     size_t         const _BufferCount,
        _In_z_ _Scanf_s_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                 _locale_t      const _Locale,
                                                 va_list              _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vswscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    }_CRT_INSECURE_DEPRECATE(_swscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _swscanf_l(
        _In_z_                                 wchar_t const* const _Buffer,
        _In_z_ _Scanf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                               _locale_t            _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(swscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL swscanf(
        _In_z_                       wchar_t const* const _Buffer,
        _In_z_ _Scanf_format_string_ wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vswscanf_l(_Buffer, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _swscanf_s_l(
        _In_z_                                   wchar_t const* const _Buffer,
        _In_z_ _Scanf_s_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                 _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL swscanf_s(
            _In_z_                         wchar_t const* const _Buffer,
            _In_z_ _Scanf_s_format_string_ wchar_t const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vswscanf_s_l(_Buffer, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_INSECURE_DEPRECATE(_snwscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _snwscanf_l(
        _In_reads_(_BufferCount) _Pre_z_       wchar_t const* const _Buffer,
        _In_                                   size_t         const _BufferCount,
        _In_z_ _Scanf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(_snwscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL _snwscanf(
        _In_reads_(_BufferCount) _Pre_z_ wchar_t const* const _Buffer,
        _In_                             size_t         const _BufferCount,
        _In_z_ _Scanf_format_string_     wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snwscanf_s_l(
        _In_reads_(_BufferCount) _Pre_z_         wchar_t const* const _Buffer,
        _In_                                     size_t         const _BufferCount,
        _In_z_ _Scanf_s_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                 _locale_t      const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snwscanf_s(
        _In_reads_(_BufferCount) _Pre_z_  wchar_t const* const _Buffer,
        _In_                              size_t         const _BufferCount,
        _In_z_ _Scanf_s_format_string_    wchar_t const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }typedef __int64 fpos_terrno_t __cdecl _get_stream_buffer_pointers(
        _In_      FILE*   _Stream,
        _Out_opt_ char*** _Base,
        _Out_opt_ char*** _Pointer,
        _Out_opt_ int**   _Count
        )errno_t __cdecl clearerr_s(
            _Inout_ FILE* _Stream
            )errno_t __cdecl fopen_s(
            _Outptr_result_maybenull_ FILE**      _Stream,
            _In_z_                    char const* _FileName,
            _In_z_                    char const* _Mode
            )size_t __cdecl fread_s(
            _Out_writes_bytes_to_(_BufferSize, _ElementSize * _ElementCount)   void*  _Buffer,
            _In_range_(>=, _ElementSize * _ElementCount)                       size_t _BufferSize,
            _In_                                                               size_t _ElementSize,
            _In_                                                               size_t _ElementCount,
            _Inout_                                                            FILE*  _Stream
            )errno_t __cdecl freopen_s(
            _Outptr_result_maybenull_ FILE**      _Stream,
            _In_z_                    char const* _FileName,
            _In_z_                    char const* _Mode,
            _Inout_                   FILE*       _OldStream
            )char* __cdecl gets_s(
            _Out_writes_z_(_Size) char*   _Buffer,
            _In_                  rsize_t _Size
            )errno_t __cdecl tmpfile_s(
            _Out_opt_ _Deref_post_valid_ FILE** _Stream
            )errno_t __cdecl tmpnam_s(
            _Out_writes_z_(_Size) char*   _Buffer,
            _In_                  rsize_t _Size
            )void __cdecl clearerr(
        _Inout_ FILE* _Stream
        )int __cdecl fclose(
        _Inout_ FILE* _Stream
        )int __cdecl _fcloseall(void)FILE* __cdecl _fdopen(
        _In_   int         _FileHandle,
        _In_z_ char const* _Mode
        )int __cdecl feof(
        _In_ FILE* _Stream
        )int __cdecl ferror(
        _In_ FILE* _Stream
        )int __cdecl fflush(
        _Inout_opt_ FILE* _Stream
        )int __cdecl fgetc(
        _Inout_ FILE* _Stream
        )int __cdecl _fgetchar(void)int __cdecl fgetpos(
        _Inout_ FILE*   _Stream,
        _Out_   fpos_t* _Position
        )char* __cdecl fgets(
        _Out_writes_z_(_MaxCount) char* _Buffer,
        _In_                      int   _MaxCount,
        _Inout_                   FILE* _Stream
        )int __cdecl _fileno(
        _In_ FILE* _Stream
        )int __cdecl _flushall(void)_CRT_INSECURE_DEPRECATE(fopen_s)
    _ACRTIMP FILE* __cdecl fopen(
        _In_z_ char const* _FileName,
        _In_z_ char const* _Mode
        )int __cdecl fputc(
        _In_    int   _Character,
        _Inout_ FILE* _Stream
        )int __cdecl _fputchar(
        _In_ int _Character
        )int __cdecl fputs(
        _In_z_  char const* _Buffer,
        _Inout_ FILE*       _Stream
        )size_t __cdecl fread(
        _Out_writes_bytes_(_ElementSize * _ElementCount) void*  _Buffer,
        _In_                                             size_t _ElementSize,
        _In_                                             size_t _ElementCount,
        _Inout_                                          FILE*  _Stream
        )_CRT_INSECURE_DEPRECATE(freopen_s)
    _ACRTIMP FILE* __cdecl freopen(
        _In_z_  char const* _FileName,
        _In_z_  char const* _Mode,
        _Inout_ FILE*       _Stream
        )FILE* __cdecl _fsopen(
        _In_z_ char const* _FileName,
        _In_z_ char const* _Mode,
        _In_   int         _ShFlag
        )int __cdecl fsetpos(
        _Inout_ FILE*         _Stream,
        _In_    fpos_t const* _Position
        )int __cdecl fseek(
        _Inout_ FILE* _Stream,
        _In_    long  _Offset,
        _In_    int   _Origin
        )int __cdecl _fseeki64(
        _Inout_ FILE*   _Stream,
        _In_    __int64 _Offset,
        _In_    int     _Origin
        )long __cdecl ftell(
        _Inout_ FILE* _Stream
        )__int64 __cdecl _ftelli64(
        _Inout_ FILE* _Stream
        )size_t __cdecl fwrite(
        _In_reads_bytes_(_ElementSize * _ElementCount) void const* _Buffer,
        _In_                                           size_t      _ElementSize,
        _In_                                           size_t      _ElementCount,
        _Inout_                                        FILE*       _Stream
        )int __cdecl getc(
        _Inout_ FILE* _Stream
        )int __cdecl getchar(void)int __cdecl _getmaxstdio(void)int __cdecl _getw(
        _Inout_ FILE* _Stream
        )void __cdecl perror(
        _In_opt_z_ char const* _ErrorMessage
        )int __cdecl _pclose(
            _Inout_ FILE* _Stream
            )FILE* __cdecl _popen(
            _In_z_ char const* _Command,
            _In_z_ char const* _Mode
            )int __cdecl putc(
        _In_    int   _Character,
        _Inout_ FILE* _Stream
        )int __cdecl putchar(
        _In_ int _Character
        )int __cdecl puts(
        _In_z_ char const* _Buffer
        )int __cdecl _putw(
        _In_    int   _Word,
        _Inout_ FILE* _Stream
        )int __cdecl remove(
        _In_z_ char const* _FileName
        )int __cdecl rename(
        _In_z_ char const* _OldFileName,
        _In_z_ char const* _NewFileName
        )int __cdecl _unlink(
        _In_z_ char const* _FileName
        )_CRT_NONSTDC_DEPRECATE(_unlink)
        _ACRTIMP int __cdecl unlink(
            _In_z_ char const* _FileName
            )void __cdecl rewind(
        _Inout_ FILE* _Stream
        )int __cdecl _rmtmp(void)_CRT_INSECURE_DEPRECATE(setvbuf)
    _ACRTIMP void __cdecl setbuf(
        _Inout_                                             FILE* _Stream,
        _Inout_updates_opt_(BUFSIZ) _Post_readable_size_(0) char* _Buffer
        )int __cdecl _setmaxstdio(
        _In_ int _Maximum
        )int __cdecl setvbuf(
        _Inout_                      FILE*  _Stream,
        _Inout_updates_opt_(_Size)   char*  _Buffer,
        _In_                         int    _Mode,
        _In_                         size_t _Size
        )char* __cdecl _tempnam(
        _In_opt_z_ char const* _DirectoryName,
        _In_opt_z_ char const* _FilePrefix
        )_CRT_INSECURE_DEPRECATE(tmpfile_s)
    _ACRTIMP FILE* __cdecl tmpfile(void)int __cdecl ungetc(
        _In_    int   _Character,
        _Inout_ FILE* _Stream
        )void __cdecl _lock_file(
        _Inout_ FILE* _Stream
        )void __cdecl _unlock_file(
        _Inout_ FILE* _Stream
        )int __cdecl _fclose_nolock(
        _Inout_ FILE* _Stream
        )int __cdecl _fflush_nolock(
        _Inout_opt_ FILE* _Stream
        )int __cdecl _fgetc_nolock(
        _Inout_ FILE* _Stream
        )int __cdecl _fputc_nolock(
        _In_    int   _Character,
        _Inout_ FILE* _Stream
        )size_t __cdecl _fread_nolock(
        _Out_writes_bytes_(_ElementSize * _ElementCount) void*  _Buffer,
        _In_                                             size_t _ElementSize,
        _In_                                             size_t _ElementCount,
        _Inout_                                          FILE*  _Stream
        )size_t __cdecl _fread_nolock_s(
        _Out_writes_bytes_to_(_BufferSize, _ElementSize * _ElementCount) void*  _Buffer,
        _In_range_(>=, _ElementSize * _ElementCount)                     size_t _BufferSize,
        _In_                                                             size_t _ElementSize,
        _In_                                                             size_t _ElementCount,
        _Inout_                                                          FILE*  _Stream
        )int __cdecl _fseek_nolock(
        _Inout_ FILE* _Stream,
        _In_    long  _Offset,
        _In_    int   _Origin
        )int __cdecl _fseeki64_nolock(
        _Inout_ FILE*   _Stream,
        _In_    __int64 _Offset,
        _In_    int     _Origin
        )long __cdecl _ftell_nolock(
        _Inout_ FILE* _Stream
        )__int64 __cdecl _ftelli64_nolock(
        _Inout_ FILE* _Stream
        )size_t __cdecl _fwrite_nolock(
        _In_reads_bytes_(_ElementSize * _ElementCount) void const* _Buffer,
        _In_                                           size_t      _ElementSize,
        _In_                                           size_t      _ElementCount,
        _Inout_                                        FILE*       _Stream
        )int __cdecl _getc_nolock(
        _Inout_ FILE* _Stream
        )int __cdecl _putc_nolock(
        _In_    int   _Character,
        _Inout_ FILE* _Stream
        )int __cdecl _ungetc_nolock(
        _In_    int   _Character,
        _Inout_ FILE* _Stream
        )int* __cdecl __p__commode(void)int __cdecl __stdio_common_vfprintf(
        _In_                                    unsigned __int64 _Options,
        _Inout_                                 FILE*            _Stream,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vfprintf_s(
        _In_                                    unsigned __int64 _Options,
        _Inout_                                 FILE*            _Stream,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vfprintf_p(
        _In_                                    unsigned __int64 _Options,
        _Inout_                                 FILE*            _Stream,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )_CRT_STDIO_INLINE int __CRTDECL _vfprintf_l(
        _Inout_  FILE*       const _Stream,
        _In_z_   char const* const _Format,
        _In_opt_ _locale_t   const _Locale,
                 va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);
    }vfprintf_CRT_STDIO_INLINE int __CRTDECL _vfprintf_s_l(
        _Inout_  FILE*       const _Stream,
        _In_z_   char const* const _Format,
        _In_opt_ _locale_t   const _Locale,
                 va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfprintf_s(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfprintf_s(
            _Inout_                       FILE*       const _Stream,
            _In_z_ _Printf_format_string_ char const* const _Format,
                                          va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfprintf_s_l(_Stream, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vfprintf_p_l(
        _Inout_  FILE*       const _Stream,
        _In_z_   char const* const _Format,
        _In_opt_ _locale_t   const _Locale,
                 va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfprintf_p(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vfprintf_p(
        _Inout_                       FILE*       const _Stream,
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfprintf_p_l(_Stream, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vprintf_l(
        _In_z_ _Printf_format_string_params_(2) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfprintf_l(stdout, _Format, _Locale, _ArgList);
    }vprintf_CRT_STDIO_INLINE int __CRTDECL vprintf(
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfprintf_l(stdout, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vprintf_s_l(
        _In_z_ _Printf_format_string_params_(2) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfprintf_s_l(stdout, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vprintf_s(
            _In_z_ _Printf_format_string_ char const* const _Format,
                                          va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfprintf_s_l(stdout, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vprintf_p_l(
        _In_z_ _Printf_format_string_params_(2) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfprintf_p_l(stdout, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vprintf_p(
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfprintf_p_l(stdout, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _fprintf_l(
        _Inout_                                 FILE*       const _Stream,
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL fprintf(
        _Inout_                       FILE*       const _Stream,
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfprintf_l(_Stream, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }int __cdecl _set_printf_count_output(
        _In_ int _Value
        )int __cdecl _get_printf_count_output(void)_CRT_STDIO_INLINE int __CRTDECL _fprintf_s_l(
        _Inout_                                 FILE*       const _Stream,
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL fprintf_s(
            _Inout_                       FILE*       const _Stream,
            _In_z_ _Printf_format_string_ char const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfprintf_s_l(_Stream, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_STDIO_INLINE int __CRTDECL _fprintf_p_l(
        _Inout_                                 FILE*       const _Stream,
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _fprintf_p(
        _Inout_                       FILE*       const _Stream,
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfprintf_p_l(_Stream, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _printf_l(
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfprintf_l(stdout, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }printf_CRT_STDIO_INLINE int __CRTDECL printf(
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfprintf_l(stdout, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _printf_s_l(
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfprintf_s_l(stdout, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL printf_s(
            _In_z_ _Printf_format_string_ char const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfprintf_s_l(stdout, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_STDIO_INLINE int __CRTDECL _printf_p_l(
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfprintf_p_l(stdout, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _printf_p(
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfprintf_p_l(stdout, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }int __cdecl __stdio_common_vfscanf(
        _In_                                   unsigned __int64 _Options,
        _Inout_                                FILE*            _Stream,
        _In_z_ _Scanf_format_string_params_(2) char const*      _Format,
        _In_opt_                               _locale_t        _Locale,
                                               va_list          _Arglist
        )_CRT_STDIO_INLINE int __CRTDECL _vfscanf_l(
        _Inout_                       FILE*       const _Stream,
        _In_z_ _Printf_format_string_ char const* const _Format,
        _In_opt_                      _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfscanf(
        _Inout_                       FILE*       const _Stream,
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfscanf_l(_Stream, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vfscanf_s_l(
        _Inout_                       FILE*       const _Stream,
        _In_z_ _Printf_format_string_ char const* const _Format,
        _In_opt_                      _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vfscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Stream, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vfscanf_s(
            _Inout_                       FILE*       const _Stream,
            _In_z_ _Printf_format_string_ char const* const _Format,
                                          va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfscanf_s_l(_Stream, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vscanf_l(
        _In_z_ _Printf_format_string_ char const* const _Format,
        _In_opt_                      _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfscanf_l(stdin, _Format, _Locale, _ArgList);
    }vscanf_CRT_STDIO_INLINE int __CRTDECL vscanf(
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfscanf_l(stdin, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vscanf_s_l(
        _In_z_ _Printf_format_string_ char const* const _Format,
        _In_opt_                      _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vfscanf_s_l(stdin, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vscanf_s(
            _In_z_ _Printf_format_string_ char const* const _Format,
                                          va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vfscanf_s_l(stdin, _Format, NULL, _ArgList);
        }_CRT_INSECURE_DEPRECATE(_fscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _fscanf_l(
        _Inout_                                FILE*       const _Stream,
        _In_z_ _Scanf_format_string_params_(0) char const* const _Format,
        _In_opt_                               _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(fscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL fscanf(
        _Inout_                      FILE*       const _Stream,
        _In_z_ _Scanf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfscanf_l(_Stream, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _fscanf_s_l(
        _Inout_                                  FILE*       const _Stream,
        _In_z_ _Scanf_s_format_string_params_(0) char const* const _Format,
        _In_opt_                                 _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL fscanf_s(
            _Inout_                        FILE*       const _Stream,
            _In_z_ _Scanf_s_format_string_ char const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfscanf_s_l(_Stream, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_INSECURE_DEPRECATE(_scanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _scanf_l(
        _In_z_ _Scanf_format_string_params_(0) char const* const _Format,
        _In_opt_                               _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfscanf_l(stdin, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }scanf_CRT_INSECURE_DEPRECATE(scanf_s)
    _CRT_STDIO_INLINE int __CRTDECL scanf(
        _In_z_ _Scanf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfscanf_l(stdin, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scanf_s_l(
        _In_z_ _Scanf_s_format_string_params_(0) char const* const _Format,
        _In_opt_                                 _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vfscanf_s_l(stdin, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL scanf_s(
            _In_z_ _Scanf_s_format_string_ char const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vfscanf_s_l(stdin, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }int __cdecl __stdio_common_vsprintf(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_opt_z_(_BufferCount)        char*            _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vsprintf_s(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_z_(_BufferCount)            char*            _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vsnprintf_s(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_opt_z_(_BufferCount)        char*            _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_                                    size_t           _MaxCount,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __stdio_common_vsprintf_p(
        _In_                                    unsigned __int64 _Options,
        _Out_writes_z_(_BufferCount)            char*            _Buffer,
        _In_                                    size_t           _BufferCount,
        _In_z_ _Printf_format_string_params_(2) char const*      _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )_CRT_INSECURE_DEPRECATE(_vsnprintf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _vsnprintf_l(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ char*       const _Buffer,
        _In_                                         size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)      char const* const _Format,
        _In_opt_                                     _locale_t   const _Locale,
                                                     va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vsnprintf(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ char*       const _Buffer,
        _In_                                        size_t      const _BufferCount,
        _In_z_ _Printf_format_string_               char const* const _Format,
                                                    va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        return _vsnprintf_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        #pragma warning(pop)
    }vsnprintf_CRT_STDIO_INLINE int __CRTDECL vsnprintf(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                              size_t      const _BufferCount,
        _In_z_ _Printf_format_string_                     char const* const _Format,
                                                          va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR,
            _Buffer, _BufferCount, _Format, NULL, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_INSECURE_DEPRECATE(_vsprintf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _vsprintf_l(
        _Pre_notnull_ _Always_(_Post_z_) char*       const _Buffer,
        _In_z_                           char const* const _Format,
        _In_opt_                         _locale_t   const _Locale,
                                         va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        return _vsnprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
        #pragma warning(pop)
    }vsprintf_CRT_INSECURE_DEPRECATE(vsprintf_s)
    _CRT_STDIO_INLINE int __CRTDECL vsprintf(
        _Pre_notnull_ _Always_(_Post_z_) char*       const _Buffer,
        _In_z_ _Printf_format_string_    char const* const _Format,
                                         va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        return _vsnprintf_l(_Buffer, (size_t)-1, _Format, NULL, _ArgList);
        #pragma warning(pop)
    }_CRT_STDIO_INLINE int __CRTDECL _vsprintf_s_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                          size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)       char const* const _Format,
        _In_opt_                                      _locale_t   const _Locale,
                                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf_s(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL vsprintf_s(
            _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
            _In_                                          size_t      const _BufferCount,
            _In_z_ _Printf_format_string_                 char const* const _Format,
                                                          va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vsprintf_s_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vsprintf_p_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                          size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(2)       char const* const _Format,
        _In_opt_                                      _locale_t   const _Locale,
                                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf_p(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vsprintf_p(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                          size_t      const _BufferCount,
        _In_z_ _Printf_format_string_                 char const* const _Format,
                                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vsprintf_p_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vsnprintf_s_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                              size_t      const _BufferCount,
        _In_                                              size_t      const _MaxCount,
        _In_z_ _Printf_format_string_params_(2)           char const* const _Format,
        _In_opt_                                          _locale_t   const _Locale,
                                                          va_list          _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsnprintf_s(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vsnprintf_s(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                              size_t      const _BufferCount,
        _In_                                              size_t      const _MaxCount,
        _In_z_ _Printf_format_string_                     char const* const _Format,
                                                          va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vsnprintf_s(
            _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
            _In_                                              size_t      const _BufferCount,
            _In_                                              size_t      const _MaxCount,
            _In_z_ _Printf_format_string_                     char const* const _Format,
                                                              va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, NULL, _ArgList);
        }_CRT_STDIO_INLINE int __CRTDECL _vscprintf_l(
        _In_z_ _Printf_format_string_params_(2) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR,
            NULL, 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vscprintf(
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vscprintf_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vscprintf_p_l(
        _In_z_ _Printf_format_string_params_(2) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf_p(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR,
            NULL, 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vscprintf_p(
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vscprintf_p_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vsnprintf_c_l(
        _Out_writes_opt_(_BufferCount)          char*       const _Buffer,
        _In_                                    size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(2) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int const _Result = __stdio_common_vsprintf(
            _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _vsnprintf_c(
        _Out_writes_opt_(_BufferCount) char*       const _Buffer,
        _In_                           size_t      const _BufferCount,
        _In_z_ _Printf_format_string_  char const* const _Format,
                                       va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
    }_CRT_INSECURE_DEPRECATE(_sprintf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _sprintf_l(
        _Pre_notnull_ _Always_(_Post_z_)        char*       const _Buffer,
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }sprintf_CRT_STDIO_INLINE int __CRTDECL sprintf(
        _Pre_notnull_ _Always_(_Post_z_) char*       const _Buffer,
        _In_z_ _Printf_format_string_    char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsprintf_l(_Buffer, _Format, NULL, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _sprintf_s_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                          size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)       char const* const _Format,
        _In_opt_                                      _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL sprintf_s(
            _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
            _In_                                          size_t      const _BufferCount,
            _In_z_ _Printf_format_string_                 char const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);
            _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_STDIO_INLINE int __CRTDECL _sprintf_p_l(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                          size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)       char const* const _Format,
        _In_opt_                                      _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _sprintf_p(
        _Out_writes_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                          size_t      const _BufferCount,
        _In_z_ _Printf_format_string_                 char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(_snprintf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _snprintf_l(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ char*       const _Buffer,
        _In_                                         size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(0)      char const* const _Format,
        _In_opt_                                     _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }snprintf_CRT_STDIO_INLINE int __CRTDECL snprintf(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                              size_t      const _BufferCount,
        _In_z_ _Printf_format_string_                     char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
    #pragma warning(suppress:28719)    // 28719
        _Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snprintf(
        _Out_writes_opt_(_BufferCount) _Post_maybez_ char*       const _Buffer,
        _In_                                         size_t      const _BufferCount,
        _In_z_ _Printf_format_string_                char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
    #pragma warning(suppress:28719)    // 28719
        _Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snprintf_c_l(
        _Out_writes_opt_(_BufferCount)          char*       const _Buffer,
        _In_                                    size_t      const _BufferCount,
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snprintf_c(
        _Out_writes_opt_(_BufferCount) char*       const _Buffer,
        _In_                           size_t      const _BufferCount,
        _In_z_ _Printf_format_string_  char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snprintf_s_l(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                              size_t      const _BufferCount,
        _In_                                              size_t      const _MaxCount,
        _In_z_ _Printf_format_string_params_(0)           char const* const _Format,
        _In_opt_                                          _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snprintf_s(
        _Out_writes_opt_(_BufferCount) _Always_(_Post_z_) char*       const _Buffer,
        _In_                                              size_t      const _BufferCount,
        _In_                                              size_t      const _MaxCount,
        _In_z_ _Printf_format_string_                     char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scprintf_l(
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vscprintf_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scprintf(
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vscprintf_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scprintf_p_l(
        _In_z_ _Printf_format_string_params_(0) char const* const _Format,
        _In_opt_                                _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vscprintf_p_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _scprintf_p(
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vscprintf_p(_Format, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }int __cdecl __stdio_common_vsscanf(
        _In_                                   unsigned __int64 _Options,
        _In_reads_(_BufferCount) _Pre_z_       char const*      _Buffer,
        _In_                                   size_t           _BufferCount,
        _In_z_ _Scanf_format_string_params_(2) char const*      _Format,
        _In_opt_                               _locale_t        _Locale,
                                               va_list          _ArgList
        )_CRT_STDIO_INLINE int __CRTDECL _vsscanf_l(
        _In_z_                        char const* const _Buffer,
        _In_z_ _Printf_format_string_ char const* const _Format,
        _In_opt_                      _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }vsscanf_CRT_STDIO_INLINE int __CRTDECL vsscanf(
        _In_z_                        char const* const _Buffer,
        _In_z_ _Printf_format_string_ char const* const _Format,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return _vsscanf_l(_Buffer, _Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vsscanf_s_l(
        _In_z_                        char const* const _Buffer,
        _In_z_ _Printf_format_string_ char const* const _Format,
        _In_opt_                      _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        return __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL vsscanf_s(
            _In_z_                        char const* const _Buffer,
            _In_z_ _Printf_format_string_ char const* const _Format,
                                          va_list           _ArgList
            )
    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
        {
            return _vsscanf_s_l(_Buffer, _Format, NULL, _ArgList);
        }_CRT_INSECURE_DEPRECATE(_sscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _sscanf_l(
        _In_z_                                 char const* const _Buffer,
        _In_z_ _Scanf_format_string_params_(0) char const* const _Format,
        _In_opt_                               _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }sscanf_CRT_INSECURE_DEPRECATE(sscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL sscanf(
        _In_z_                       char const* const _Buffer,
        _In_z_ _Scanf_format_string_ char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vsscanf_l(_Buffer, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _sscanf_s_l(
        _In_z_                                   char const* const _Buffer,
        _In_z_ _Scanf_s_format_string_params_(0) char const* const _Format,
        _In_opt_                                 _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL sscanf_s(
            _In_z_                         char const* const _Buffer,
            _In_z_ _Scanf_s_format_string_ char const* const _Format,
            ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
            ;
    #else
        {
            int _Result;
            va_list _ArgList;
            __crt_va_start(_ArgList, _Format);

            #pragma warning(push)
            #pragma warning(disable: 4996) // Deprecation
            _Result = vsscanf_s(_Buffer, _Format, _ArgList);
            #pragma warning(pop)

            __crt_va_end(_ArgList);
            return _Result;
        }_CRT_INSECURE_DEPRECATE(_snscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _snscanf_l(
        _In_reads_bytes_(_BufferCount) _Pre_z_ char const* const _Buffer,
        _In_                                   size_t      const _BufferCount,
        _In_z_ _Scanf_format_string_params_(0) char const* const _Format,
        _In_opt_                               _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        _Result = __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(_snscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL _snscanf(
        _In_reads_bytes_(_BufferCount) _Pre_z_ char const* const _Buffer,
        _In_                                   size_t      const _BufferCount,
        _In_z_ _Scanf_format_string_           char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);

        _Result = __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Buffer, _BufferCount, _Format, NULL, _ArgList);

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snscanf_s_l(
        _In_reads_bytes_(_BufferCount) _Pre_z_   char const* const _Buffer,
        _In_                                     size_t      const _BufferCount,
        _In_z_ _Scanf_s_format_string_params_(0) char const* const _Format,
        _In_opt_                                 _locale_t   const _Locale,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        _Result = __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _snscanf_s(
        _In_reads_bytes_(_BufferCount) _Pre_z_ char const* const _Buffer,
        _In_                                   size_t      const _BufferCount,
        _In_z_ _Scanf_s_format_string_         char const* const _Format,
        ...)
    #if defined _NO_CRT_STDIO_INLINE // SCANF
        ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);

        _Result = __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Buffer, _BufferCount, _Format, NULL, _ArgList);

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_NONSTDC_DEPRECATE(_tempnam)
        _ACRTIMP char* __cdecl tempnam(
            _In_opt_z_ char const* _Directory,
            _In_opt_z_ char const* _FilePrefix
            )_CRT_NONSTDC_DEPRECATE(_fcloseall) _ACRTIMP int   __cdecl fcloseall(void)_CRT_NONSTDC_DEPRECATE(_fdopen)    _ACRTIMP FILE* __cdecl fdopen(_In_ int _FileHandle, _In_z_ char const* _Format)_CRT_NONSTDC_DEPRECATE(_fgetchar)  _ACRTIMP int   __cdecl fgetchar(void)_CRT_NONSTDC_DEPRECATE(_fileno)    _ACRTIMP int   __cdecl fileno(_In_ FILE* _Stream)_CRT_NONSTDC_DEPRECATE(_flushall)  _ACRTIMP int   __cdecl flushall(void)_CRT_NONSTDC_DEPRECATE(_fputchar)  _ACRTIMP int   __cdecl fputchar(_In_ int _Ch)_CRT_NONSTDC_DEPRECATE(_getw)      _ACRTIMP int   __cdecl getw(_Inout_ FILE* _Stream)_CRT_NONSTDC_DEPRECATE(_putw)      _ACRTIMP int   __cdecl putw(_In_ int _Ch, _Inout_ FILE* _Stream)_CRT_NONSTDC_DEPRECATE(_rmtmp)     _ACRTIMP int   __cdecl rmtmp(void)typedef FILE _Fileterrno_t __cdecl _set_errno(_In_ int _Value)errno_t __cdecl _get_errno(_Out_ int* _Value)unsigned long* __cdecl __doserrno(void)errno_t __cdecl _set_doserrno(_In_ unsigned long _Value)errno_t __cdecl _get_doserrno(_Out_ unsigned long * _Value)memchrvoid _CONST_RETURN* __cdecl memchr(
    _In_reads_bytes_opt_(_MaxCount) void const* _Buf,
    _In_                            int         _Val,
    _In_                            size_t      _MaxCount
    )memcmpint __cdecl memcmp(
    _In_reads_bytes_(_Size) void const* _Buf1,
    _In_reads_bytes_(_Size) void const* _Buf2,
    _In_                    size_t      _Size
    )memcpyvoid* __cdecl memcpy(
    _Out_writes_bytes_all_(_Size) void* _Dst,
    _In_reads_bytes_(_Size)       void const* _Src,
    _In_                          size_t      _Size
    )memmovevoid* __cdecl memmove(
    _Out_writes_bytes_all_opt_(_Size) void*       _Dst,
    _In_reads_bytes_opt_(_Size)       void const* _Src,
    _In_                              size_t      _Size
    )memsetvoid* __cdecl memset(
    _Out_writes_bytes_all_(_Size) void*  _Dst,
    _In_                          int    _Val,
    _In_                          size_t _Size
    )strchrchar _CONST_RETURN* __cdecl strchr(
    _In_z_ char const* _Str,
    _In_   int         _Val
    )strrchrchar _CONST_RETURN* __cdecl strrchr(
    _In_z_ char const* _Str,
    _In_   int         _Ch
    )strstrchar _CONST_RETURN* __cdecl strstr(
    _In_z_ char const* _Str,
    _In_z_ char const* _SubStr
    )wchar_t _CONST_RETURN* __cdecl wcschr(
    _In_z_ wchar_t const* _Str,
    _In_   wchar_t        _Ch
    )wchar_t _CONST_RETURN* __cdecl wcsrchr(
    _In_z_ wchar_t const* _Str,
    _In_   wchar_t        _Ch
    )wchar_t _CONST_RETURN* __cdecl wcsstr(
    _In_z_ wchar_t const* _Str,
    _In_z_ wchar_t const* _SubStr
    )_CRT_MEMCPY_S_INLINE errno_t __CRTDECL memcpy_s(
        _Out_writes_bytes_to_opt_(_DestinationSize, _SourceSize) void*       const _Destination,
        _In_                                                     rsize_t     const _DestinationSize,
        _In_reads_bytes_opt_(_SourceSize)                        void const* const _Source,
        _In_                                                     rsize_t     const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }

        _CRT_MEMCPY_S_VALIDATE_RETURN_ERRCODE(_Destination != NULL, EINVAL);
        if (_Source == NULL || _DestinationSize < _SourceSize)
        {
            memset(_Destination, 0, _DestinationSize);

            _CRT_MEMCPY_S_VALIDATE_RETURN_ERRCODE(_Source != NULL,                 EINVAL);
            _CRT_MEMCPY_S_VALIDATE_RETURN_ERRCODE(_DestinationSize >= _SourceSize, ERANGE);

            // Unreachable, but required to suppress /analyze warnings:
            return EINVAL;
        }

        memcpy(_Destination, _Source, _SourceSize);
        return 0;
    }_CRT_MEMCPY_S_INLINE errno_t __CRTDECL memmove_s(
        _Out_writes_bytes_to_opt_(_DestinationSize, _SourceSize) void*       const _Destination,
        _In_                                                     rsize_t     const _DestinationSize,
        _In_reads_bytes_opt_(_SourceSize)                        void const* const _Source,
        _In_                                                     rsize_t     const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }

        _CRT_MEMCPY_S_VALIDATE_RETURN_ERRCODE(_Destination != NULL,            EINVAL);
        _CRT_MEMCPY_S_VALIDATE_RETURN_ERRCODE(_Source != NULL,                 EINVAL);
        _CRT_MEMCPY_S_VALIDATE_RETURN_ERRCODE(_DestinationSize >= _SourceSize, ERANGE);

        memmove(_Destination, _Source, _SourceSize);
        return 0;
    }int __cdecl _memicmp(
    _In_reads_bytes_opt_(_Size) void const* _Buf1,
    _In_reads_bytes_opt_(_Size) void const* _Buf2,
    _In_                        size_t      _Size
    )int __cdecl _memicmp_l(
    _In_reads_bytes_opt_(_Size) void const* _Buf1,
    _In_reads_bytes_opt_(_Size) void const* _Buf2,
    _In_                        size_t      _Size,
    _In_opt_                    _locale_t   _Locale
    )_CRT_NONSTDC_DEPRECATE(_memccpy)
    _ACRTIMP void* __cdecl memccpy(
        _Out_writes_bytes_opt_(_Size) void*       _Dst,
        _In_reads_bytes_opt_(_Size)   void const* _Src,
        _In_                          int         _Val,
        _In_                          size_t      _Size
        )_CRT_NONSTDC_DEPRECATE(_memicmp)
    _ACRTIMP int __cdecl memicmp(
        _In_reads_bytes_opt_(_Size) void const* _Buf1,
        _In_reads_bytes_opt_(_Size) void const* _Buf2,
        _In_                        size_t      _Size
        )errno_t __cdecl wcscat_s(
        _Inout_updates_z_(_SizeInWords) wchar_t* _Destination,
        _In_ rsize_t _SizeInWords,
        _In_z_ wchar_t const* _Source
        )errno_t __cdecl wcscpy_s(
        _Out_writes_z_(_SizeInWords) wchar_t* _Destination,
        _In_ rsize_t _SizeInWords,
        _In_z_ wchar_t const* _Source
        )errno_t __cdecl wcsncat_s(
        _Inout_updates_z_(_SizeInWords) wchar_t*       _Destination,
        _In_                            rsize_t        _SizeInWords,
        _In_reads_or_z_(_MaxCount)      wchar_t const* _Source,
        _In_                            rsize_t        _MaxCount
        )errno_t __cdecl wcsncpy_s(
        _Out_writes_z_(_SizeInWords) wchar_t*       _Destination,
        _In_                         rsize_t        _SizeInWords,
        _In_reads_or_z_(_MaxCount)   wchar_t const* _Source,
        _In_                         rsize_t        _MaxCount
        )wchar_t* __cdecl wcstok_s(
        _Inout_opt_z_                 wchar_t*       _String,
        _In_z_                        wchar_t const* _Delimiter,
        _Inout_ _Deref_prepost_opt_z_ wchar_t**      _Context
        )wchar_t* __cdecl _wcsdup(
    _In_z_ wchar_t const* _String
    )int __cdecl wcscmp(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    )size_t __cdecl wcscspn(
    _In_z_ wchar_t const* _String,
    _In_z_ wchar_t const* _Control
    )size_t __cdecl wcslen(
    _In_z_ wchar_t const* _String
    )size_t __cdecl wcsnlen(
    _In_reads_or_z_(_MaxCount) wchar_t const* _Source,
    _In_                       size_t         _MaxCount
    )static __inline size_t __CRTDECL wcsnlen_s(
        _In_reads_or_z_(_MaxCount) wchar_t const* _Source,
        _In_                       size_t         _MaxCount
        )
    {
        return (_Source == 0) ? 0 : wcsnlen(_Source, _MaxCount);
    }int __cdecl wcsncmp(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount
    )wchar_t _CONST_RETURN* __cdecl wcspbrk(
    _In_z_ wchar_t const* _String,
    _In_z_ wchar_t const* _Control
    )size_t __cdecl wcsspn(
    _In_z_ wchar_t const* _String,
    _In_z_ wchar_t const* _Control
    )_CRT_INSECURE_DEPRECATE(wcstok_s)
_ACRTIMP wchar_t* __cdecl wcstok(
    _Inout_opt_z_                     wchar_t*       _String,
    _In_z_                            wchar_t const* _Delimiter,
    _Inout_opt_ _Deref_prepost_opt_z_ wchar_t**      _Context
    )_CRT_INSECURE_DEPRECATE(wcstok_s)
    static __inline wchar_t* __CRTDECL _wcstok(
        _Inout_opt_z_ wchar_t*       const _String,
        _In_z_        wchar_t const* const _Delimiter
        )
    {
        return wcstok(_String, _Delimiter, 0);
    }_CRT_INSECURE_DEPRECATE(_wcserror_s)
_ACRTIMP wchar_t* __cdecl _wcserror(
    _In_ int _ErrorNumber
    )errno_t __cdecl _wcserror_s(
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _Buffer,
    _In_                             size_t   _SizeInWords,
    _In_                             int      _ErrorNumber
    )_CRT_INSECURE_DEPRECATE(__wcserror_s)
_ACRTIMP wchar_t* __cdecl __wcserror(
    _In_opt_z_ wchar_t const* _String
    )errno_t __cdecl __wcserror_s(
    _Out_writes_opt_z_(_SizeInWords) wchar_t*       _Buffer,
    _In_                             size_t         _SizeInWords,
    _In_z_                           wchar_t const* _ErrorMessage
    )int __cdecl _wcsicmp(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    )int __cdecl _wcsicmp_l(
    _In_z_   wchar_t const* _String1,
    _In_z_   wchar_t const* _String2,
    _In_opt_ _locale_t      _Locale
    )int __cdecl _wcsnicmp(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount
    )int __cdecl _wcsnicmp_l(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount,
    _In_opt_                   _locale_t      _Locale
    )errno_t __cdecl _wcsnset_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _Destination,
    _In_                            size_t   _SizeInWords,
    _In_                            wchar_t  _Value,
    _In_                            size_t   _MaxCount
    )wchar_t* __cdecl _wcsrev(
    _Inout_z_ wchar_t* _String
    )errno_t __cdecl _wcsset_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _Destination,
    _In_                            size_t   _SizeInWords,
    _In_                            wchar_t  _Value
    )errno_t __cdecl _wcslwr_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _String,
    _In_                            size_t   _SizeInWords
    )errno_t __cdecl _wcslwr_s_l(
    _Inout_updates_z_(_SizeInWords) wchar_t*  _String,
    _In_                            size_t    _SizeInWords,
    _In_opt_                        _locale_t _Locale
    )errno_t __cdecl _wcsupr_s(
    _Inout_updates_z_(_Size) wchar_t* _String,
    _In_                     size_t   _Size
    )errno_t __cdecl _wcsupr_s_l(
    _Inout_updates_z_(_Size) wchar_t*  _String,
    _In_                     size_t    _Size,
    _In_opt_                 _locale_t _Locale
    )size_t __cdecl wcsxfrm(
    _Out_writes_opt_(_MaxCount) _Post_maybez_ wchar_t*       _Destination,
    _In_z_                                    wchar_t const* _Source,
    _In_ _In_range_(<= ,_CRT_INT_MAX)         size_t         _MaxCount
    )size_t __cdecl _wcsxfrm_l(
    _Out_writes_opt_(_MaxCount) _Post_maybez_ wchar_t*       _Destination,
    _In_z_                                    wchar_t const* _Source,
    _In_ _In_range_(<= ,_CRT_INT_MAX)         size_t         _MaxCount,
    _In_opt_                                  _locale_t      _Locale
    )int __cdecl wcscoll(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    )int __cdecl _wcscoll_l(
    _In_z_   wchar_t const* _String1,
    _In_z_   wchar_t const* _String2,
    _In_opt_ _locale_t      _Locale
    )int __cdecl _wcsicoll(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    )int __cdecl _wcsicoll_l(
    _In_z_   wchar_t const* _String1,
    _In_z_   wchar_t const* _String2,
    _In_opt_ _locale_t      _Locale
    )int __cdecl _wcsncoll(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount
    )int __cdecl _wcsncoll_l(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount,
    _In_opt_                   _locale_t      _Locale
    )int __cdecl _wcsnicoll(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount
    )int __cdecl _wcsnicoll_l(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_                       size_t         _MaxCount,
    _In_opt_                   _locale_t      _Locale
    )_CRT_NONSTDC_DEPRECATE(_wcsdup)
    _ACRTIMP wchar_t* __cdecl wcsdup(
        _In_z_ wchar_t const* _String
        )_CRT_NONSTDC_DEPRECATE(_wcsicmp)
    _ACRTIMP int __cdecl wcsicmp(
        _In_z_ wchar_t const* _String1,
        _In_z_ wchar_t const* _String2
        )_CRT_NONSTDC_DEPRECATE(_wcsnicmp)
    _ACRTIMP int __cdecl wcsnicmp(
        _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
        _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
        _In_                       size_t         _MaxCount
        )_CRT_NONSTDC_DEPRECATE(_wcsnset)
    _Ret_z_
    _ACRTIMP wchar_t* __cdecl wcsnset(
        _Inout_updates_z_(_MaxCount) wchar_t* _String,
        _In_                         wchar_t  _Value,
        _In_                         size_t   _MaxCount
        )_CRT_NONSTDC_DEPRECATE(_wcsrev)
    _Ret_z_
    _ACRTIMP wchar_t* __cdecl wcsrev(
        _Inout_z_ wchar_t* _String
        )_CRT_NONSTDC_DEPRECATE(_wcsset)
    _Ret_z_
    _ACRTIMP wchar_t* __cdecl wcsset(
        _Inout_z_ wchar_t* _String,
        _In_      wchar_t  _Value
        )_CRT_NONSTDC_DEPRECATE(_wcslwr)
    _Ret_z_
    _ACRTIMP wchar_t* __cdecl wcslwr(
        _Inout_z_ wchar_t* _String
        )_CRT_NONSTDC_DEPRECATE(_wcsupr)
    _Ret_z_
    _ACRTIMP wchar_t* __cdecl wcsupr(
        _Inout_z_ wchar_t* _String
        )_CRT_NONSTDC_DEPRECATE(_wcsicoll)
    _ACRTIMP int __cdecl wcsicoll(
        _In_z_ wchar_t const* _String1,
        _In_z_ wchar_t const* _String2
        )errno_t __cdecl strcpy_s(
        _Out_writes_z_(_SizeInBytes) char*       _Destination,
        _In_                         rsize_t     _SizeInBytes,
        _In_z_                       char const* _Source
        )errno_t __cdecl strcat_s(
        _Inout_updates_z_(_SizeInBytes) char*       _Destination,
        _In_                            rsize_t     _SizeInBytes,
        _In_z_                          char const* _Source
        )errno_t __cdecl strerror_s(
        _Out_writes_z_(_SizeInBytes) char*  _Buffer,
        _In_                         size_t _SizeInBytes,
        _In_                         int    _ErrorNumber)errno_t __cdecl strncat_s(
        _Inout_updates_z_(_SizeInBytes) char*       _Destination,
        _In_                            rsize_t     _SizeInBytes,
        _In_reads_or_z_(_MaxCount)      char const* _Source,
        _In_                            rsize_t     _MaxCount
        )errno_t __cdecl strncpy_s(
        _Out_writes_z_(_SizeInBytes) char*       _Destination,
        _In_                         rsize_t     _SizeInBytes,
        _In_reads_or_z_(_MaxCount)   char const* _Source,
        _In_                         rsize_t     _MaxCount
        )char*  __cdecl strtok_s(
        _Inout_opt_z_                 char*       _String,
        _In_z_                        char const* _Delimiter,
        _Inout_ _Deref_prepost_opt_z_ char**      _Context
        )void* __cdecl _memccpy(
    _Out_writes_bytes_opt_(_MaxCount) void*       _Dst,
    _In_                              void const* _Src,
    _In_                              int         _Val,
    _In_                              size_t      _MaxCount
    )strcatstrcmpint __cdecl strcmp(
    _In_z_ char const* _Str1,
    _In_z_ char const* _Str2
    )int __cdecl _strcmpi(
    _In_z_ char const* _String1,
    _In_z_ char const* _String2
    )int __cdecl strcoll(
    _In_z_ char const* _String1,
    _In_z_ char const* _String2
    )int __cdecl _strcoll_l(
    _In_z_   char const* _String1,
    _In_z_   char const* _String2,
    _In_opt_ _locale_t   _Locale
    )strcpystrcspnsize_t __cdecl strcspn(
    _In_z_ char const* _Str,
    _In_z_ char const* _Control
    )char* __cdecl _strdup(
    _In_opt_z_ char const* _Source
    )_CRT_INSECURE_DEPRECATE(_strerror_s)
_ACRTIMP char*  __cdecl _strerror(
    _In_opt_z_ char const* _ErrorMessage
    )errno_t __cdecl _strerror_s(
    _Out_writes_z_(_SizeInBytes) char*       _Buffer,
    _In_                         size_t      _SizeInBytes,
    _In_opt_z_                   char const* _ErrorMessage
    )strerror_CRT_INSECURE_DEPRECATE(strerror_s)
_ACRTIMP char* __cdecl strerror(
    _In_ int _ErrorMessage
    )int __cdecl _stricmp(
    _In_z_ char const* _String1,
    _In_z_ char const* _String2
    )int __cdecl _stricoll(
    _In_z_ char const* _String1,
    _In_z_ char const* _String2
    )int __cdecl _stricoll_l(
    _In_z_   char const* _String1,
    _In_z_   char const* _String2,
    _In_opt_ _locale_t   _Locale
    )int __cdecl _stricmp_l(
    _In_z_   char const* _String1,
    _In_z_   char const* _String2,
    _In_opt_ _locale_t   _Locale
    )strlensize_t __cdecl strlen(
    _In_z_ char const* _Str
    )errno_t __cdecl _strlwr_s(
    _Inout_updates_z_(_Size) char*  _String,
    _In_                     size_t _Size
    )errno_t __cdecl _strlwr_s_l(
    _Inout_updates_z_(_Size) char*     _String,
    _In_                     size_t    _Size,
    _In_opt_                 _locale_t _Locale
    )strncatstrncmpint __cdecl strncmp(
    _In_reads_or_z_(_MaxCount) char const* _Str1,
    _In_reads_or_z_(_MaxCount) char const* _Str2,
    _In_                       size_t      _MaxCount
    )int __cdecl _strnicmp(
    _In_reads_or_z_(_MaxCount) char const* _String1,
    _In_reads_or_z_(_MaxCount) char const* _String2,
    _In_                       size_t      _MaxCount
    )int __cdecl _strnicmp_l(
    _In_reads_or_z_(_MaxCount) char const* _String1,
    _In_reads_or_z_(_MaxCount) char const* _String2,
    _In_                       size_t      _MaxCount,
    _In_opt_                   _locale_t   _Locale
    )int __cdecl _strnicoll(
    _In_reads_or_z_(_MaxCount) char const* _String1,
    _In_reads_or_z_(_MaxCount) char const* _String2,
    _In_                       size_t      _MaxCount
    )int __cdecl _strnicoll_l(
    _In_reads_or_z_(_MaxCount) char const* _String1,
    _In_reads_or_z_(_MaxCount) char const* _String2,
    _In_                       size_t      _MaxCount,
    _In_opt_                   _locale_t   _Locale
    )int __cdecl _strncoll(
    _In_reads_or_z_(_MaxCount) char const* _String1,
    _In_reads_or_z_(_MaxCount) char const* _String2,
    _In_                       size_t      _MaxCount
    )int __cdecl _strncoll_l(
    _In_reads_or_z_(_MaxCount) char const* _String1,
    _In_reads_or_z_(_MaxCount) char const* _String2,
    _In_                       size_t      _MaxCount,
    _In_opt_                   _locale_t   _Locale
    )size_t __cdecl __strncnt(
    _In_reads_or_z_(_Count) char const* _String,
    _In_                    size_t      _Count
    )strncpysize_t __cdecl strnlen(
    _In_reads_or_z_(_MaxCount) char const* _String,
    _In_                       size_t      _MaxCount
    )static __inline size_t __CRTDECL strnlen_s(
        _In_reads_or_z_(_MaxCount) char const* _String,
        _In_                       size_t      _MaxCount
        )
    {
        return _String == 0 ? 0 : strnlen(_String, _MaxCount);
    }errno_t __cdecl _strnset_s(
    _Inout_updates_z_(_SizeInBytes) char*  _String,
    _In_                            size_t _SizeInBytes,
    _In_                            int    _Value,
    _In_                            size_t _MaxCount
    )strpbrkchar _CONST_RETURN* __cdecl strpbrk(
    _In_z_ char const* _Str,
    _In_z_ char const* _Control
    )char* __cdecl _strrev(
    _Inout_z_ char* _Str
    )errno_t __cdecl _strset_s(
    _Inout_updates_z_(_DestinationSize) char*  _Destination,
    _In_                                size_t _DestinationSize,
    _In_                                int    _Value
    )strspnsize_t __cdecl strspn(
    _In_z_ char const* _Str,
    _In_z_ char const* _Control
    )strtok_CRT_INSECURE_DEPRECATE(strtok_s)
_ACRTIMP char* __cdecl strtok(
    _Inout_opt_z_ char*       _String,
    _In_z_        char const* _Delimiter
    )errno_t __cdecl _strupr_s(
    _Inout_updates_z_(_Size) char*  _String,
    _In_                     size_t _Size
    )errno_t __cdecl _strupr_s_l(
    _Inout_updates_z_(_Size) char*     _String,
    _In_                     size_t    _Size,
    _In_opt_                 _locale_t _Locale
    )strxfrmsize_t __cdecl strxfrm(
    _Out_writes_opt_(_MaxCount) _Post_maybez_ char*       _Destination,
    _In_z_                                    char const* _Source,
    _In_ _In_range_(<=,_CRT_INT_MAX)          size_t      _MaxCount
    )size_t __cdecl _strxfrm_l(
    _Out_writes_opt_(_MaxCount) _Post_maybez_ char*       _Destination,
    _In_z_                                    char const* _Source,
    _In_ _In_range_(<=,_CRT_INT_MAX)          size_t      _MaxCount,
    _In_opt_                                  _locale_t   _Locale
    )strdup_CRT_NONSTDC_DEPRECATE(_strdup)
    _ACRTIMP char* __cdecl strdup(
        _In_opt_z_ char const* _String
        )_CRT_NONSTDC_DEPRECATE(_strcmpi)
    _ACRTIMP int __cdecl strcmpi(
        _In_z_ char const* _String1,
        _In_z_ char const* _String2
        )_CRT_NONSTDC_DEPRECATE(_stricmp)
    _ACRTIMP int __cdecl stricmp(
        _In_z_ char const* _String1,
        _In_z_ char const* _String2
        )_CRT_NONSTDC_DEPRECATE(_strlwr)
    _ACRTIMP char* __cdecl strlwr(
        _Inout_z_ char* _String
        )_CRT_NONSTDC_DEPRECATE(_strnicmp)
    _ACRTIMP int __cdecl strnicmp(
        _In_reads_or_z_(_MaxCount) char const* _String1,
        _In_reads_or_z_(_MaxCount) char const* _String2,
        _In_                       size_t      _MaxCount
        )_CRT_NONSTDC_DEPRECATE(_strnset)
    _ACRTIMP char* __cdecl strnset(
        _Inout_updates_z_(_MaxCount) char*  _String,
        _In_                         int    _Value,
        _In_                         size_t _MaxCount
        )_CRT_NONSTDC_DEPRECATE(_strrev)
    _ACRTIMP char* __cdecl strrev(
        _Inout_z_ char* _String
        )_CRT_NONSTDC_DEPRECATE(_strset)
    char* __cdecl strset(
        _Inout_z_ char* _String,
        _In_      int   _Value)_CRT_NONSTDC_DEPRECATE(_strupr)
    _ACRTIMP char* __cdecl strupr(
        _Inout_z_ char* _String
        )_allocavoid* __cdecl _alloca(_In_ size_t _Size)intptr_t __cdecl _get_heap_handle(void)int __cdecl _heapmin(void)int __cdecl _heapwalk(_Inout_ _HEAPINFO* _EntryInfo)int __cdecl _heapchk(void)int __cdecl _resetstkoflw(void)_STATIC_ASSERT(sizeof(unsigned int) <= _ALLOCA_S_MARKER_SIZE)__inline void* _MarkAllocaS(_Out_opt_ __crt_typefix(unsigned int*) void* _Ptr, unsigned int _Marker)
    {
        if (_Ptr)
        {
            *((unsigned int*)_Ptr) = _Marker;
            _Ptr = (char*)_Ptr + _ALLOCA_S_MARKER_SIZE;
        }
        return _Ptr;
    }__inline size_t _MallocaComputeSize(size_t _Size)
    {
        size_t _MarkedSize = _Size + _ALLOCA_S_MARKER_SIZE;
        return _MarkedSize > _Size ? _MarkedSize : 0;
    }__inline void __CRTDECL _freea(_Pre_maybenull_ _Post_invalid_ void* _Memory)
    {
        unsigned int _Marker;
        if (_Memory)
        {
            _Memory = (char*)_Memory - _ALLOCA_S_MARKER_SIZE;
            _Marker = *(unsigned int*)_Memory;
            if (_Marker == _ALLOCA_S_HEAP_MARKER)
            {
                free(_Memory);
            }
            #ifdef _ASSERTE
            else if (_Marker != _ALLOCA_S_STACK_MARKER)
            {
                _ASSERTE(("Corrupted pointer passed to _freea" && 0));
            }
            #endif
        }
    }typedef void (__CRTDECL* terminate_handlertypedef void (__CRTDECL* terminate_functiontypedef void (__CRTDECL* unexpected_handlertypedef void (__CRTDECL* unexpected_functionstruct _EXCEPTION_POINTERSstruct __std_exception_data
{
    char const* _What;
    bool        _DoFree;
}void __cdecl __std_exception_copy(
    _In_  __std_exception_data const* _From,
    _Out_ __std_exception_data*       _To
    )void __cdecl __std_exception_destroy(
    _Inout_ __std_exception_data* _Data
    )namespace stdvoid __CLRCALL_PURE_OR_CDECL __ExceptionPtrDestroy(_Inout_ void*)void __CLRCALL_PURE_OR_CDECL __ExceptionPtrCopy(_Out_ void*, _In_ const void*)void __CLRCALL_PURE_OR_CDECL __ExceptionPtrAssign(_Inout_ void*, _In_ const void*)void __CLRCALL_PURE_OR_CDECL __ExceptionPtrSwap(_Inout_ void*, _Inout_ void*)void __CLRCALL_PURE_OR_CDECL __ExceptionPtrCurrentException(_Out_ void*)void __CLRCALL_PURE_OR_CDECL __ExceptionPtrRethrow(_In_ const void*)void __CLRCALL_PURE_OR_CDECL __ExceptionPtrCopyException(
	_Inout_ void*, _In_ const void*, _In_ const void*)typedef short              int16_ttypedef int                int32_ttypedef long long          int64_ttypedef unsigned char      uint8_ttypedef unsigned short     uint16_ttypedef unsigned int       uint32_ttypedef unsigned long long uint64_ttypedef signed char        int_least8_ttypedef short              int_least16_ttypedef int                int_least32_ttypedef long long          int_least64_ttypedef unsigned char      uint_least8_ttypedef unsigned short     uint_least16_ttypedef unsigned int       uint_least32_ttypedef unsigned long long uint_least64_ttypedef signed char        int_fast8_ttypedef int                int_fast16_ttypedef int                int_fast32_ttypedef long long          int_fast64_ttypedef unsigned char      uint_fast8_ttypedef unsigned int       uint_fast16_ttypedef unsigned int       uint_fast32_ttypedef unsigned long long uint_fast64_ttypedef long long          intmax_ttypedef unsigned long long uintmax_tunion
	{	/* pun float types as integer array */
	unsigned short _Word[8];
	float _Float;
	double _Double;
	long double _Long_double;
	}typedef union
	{	/* pun float types as integer array */
	unsigned short _Word[8];
	float _Float;
	double _Double;
	long double _Long_double;
	} _Dconstdouble __CLRCALL_PURE_OR_CDECL _Cosh(double, double)short __CLRCALL_PURE_OR_CDECL _Dtest(double *)double __CLRCALL_PURE_OR_CDECL _Sinh(double, double)short __CLRCALL_PURE_OR_CDECL _Exp(double *, double, short)extern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _Denormextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _Denorm, _Hugevalextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _Denorm, _Hugeval, _Infextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _Denorm, _Hugeval, _Inf,
	_Nanextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _Denorm, _Hugeval, _Inf,
	_Nan, _Snanfloat __CLRCALL_PURE_OR_CDECL _FCosh(float, float)short __CLRCALL_PURE_OR_CDECL _FDtest(float *)float __CLRCALL_PURE_OR_CDECL _FSinh(float, float)short __CLRCALL_PURE_OR_CDECL _FExp(float *, float, short)extern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _FDenormextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _FDenorm, _FInfextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _FDenorm, _FInf, _FNanextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _FDenorm, _FInf, _FNan, _FSnanlong double __CLRCALL_PURE_OR_CDECL _LCosh(long double, long double)short __CLRCALL_PURE_OR_CDECL _LDtest(long double *)long double __CLRCALL_PURE_OR_CDECL _LSinh(long double, long double)short __CLRCALL_PURE_OR_CDECL _LExp(long double *, long double, short)extern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _LDenormextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _LDenorm, _LInfextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _LDenorm, _LInf, _LNanextern _CRTIMP2_PURE_IMPORT /* const */ _Dconst _LDenorm, _LInf, _LNan, _LSnanunsigned int __cdecl _clearfp(void)_CRT_INSECURE_DEPRECATE(_controlfp_s)
_ACRTIMP unsigned int __cdecl _controlfp(
    _In_ unsigned int _NewValue,
    _In_ unsigned int _Mask
    )void __cdecl _set_controlfp(
    _In_ unsigned int _NewValue,
    _In_ unsigned int _Mask
    )errno_t __cdecl _controlfp_s(
    _Out_opt_ unsigned int* _CurrentState,
    _In_      unsigned int  _NewValue,
    _In_      unsigned int  _Mask
    )unsigned int __cdecl _statusfp(void)void __cdecl _fpreset(void)unsigned int __cdecl _control87(
    _In_ unsigned int _NewValue,
    _In_ unsigned int _Mask
    )int* __cdecl __fpecode(void)int __cdecl __fpe_flt_rounds(void)double __cdecl _copysign(_In_ double _Number, _In_ double _Sign)double __cdecl _chgsign(_In_ double _X)double __cdecl _scalb(_In_ double _X, _In_ long _Y)double __cdecl _logb(_In_ double _X)double __cdecl _nextafter(_In_ double _X, _In_ double _Y)int    __cdecl _finite(_In_ double _X)int    __cdecl _isnan(_In_ double _X)int    __cdecl _fpclass(_In_ double _X)float __cdecl _scalbf(_In_ float _X, _In_ long _Y)void __cdecl fpreset(void)errno_t __cdecl _cgetws_s(
        _Out_writes_to_(_BufferCount, *_SizeRead) wchar_t* _Buffer,
        _In_                                      size_t   _BufferCount,
        _Out_                                     size_t*  _SizeRead
        )int __cdecl _cputws(
        _In_z_ wchar_t const* _Buffer
        )wint_t __cdecl _getwch  (void)wint_t __cdecl _getwche (void)wint_t __cdecl _putwch  (_In_ wchar_t _Character)wint_t __cdecl _ungetwch(_In_ wint_t  _Character)wint_t __cdecl _getwch_nolock  (void)wint_t __cdecl _getwche_nolock (void)wint_t __cdecl _putwch_nolock  (_In_ wchar_t _Character)wint_t __cdecl _ungetwch_nolock(_In_ wint_t  _Character)int __cdecl __conio_common_vcwprintf(
        _In_                                    unsigned __int64 _Options,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __conio_common_vcwprintf_s(
        _In_                                    unsigned __int64 _Options,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )int __cdecl __conio_common_vcwprintf_p(
        _In_                                    unsigned __int64 _Options,
        _In_z_ _Printf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                                _locale_t        _Locale,
                                                va_list          _ArgList
        )_CRT_STDIO_INLINE int __CRTDECL _vcwprintf_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return __conio_common_vcwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vcwprintf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return _vcwprintf_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vcwprintf_s_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return __conio_common_vcwprintf_s(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vcwprintf_s(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
                                      va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return _vcwprintf_s_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vcwprintf_p_l(
        _In_z_ _Printf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
                                                va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return __conio_common_vcwprintf_p(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vcwprintf_p(
        _In_z_ _Printf_format_string_ const wchar_t* const _Format,
                                      va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return _vcwprintf_p_l(_Format, NULL, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _cwprintf_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vcwprintf_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwprintf(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vcwprintf_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwprintf_s_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vcwprintf_s_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwprintf_s(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vcwprintf_s_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwprintf_p_l(
        _In_z_ _Printf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                                _locale_t      const _Locale,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vcwprintf_p_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwprintf_p(
        _In_z_ _Printf_format_string_ wchar_t const* const _Format,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vcwprintf_p_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }int __cdecl __conio_common_vcwscanf(
        _In_                                   unsigned __int64 _Options,
        _In_z_ _Scanf_format_string_params_(2) wchar_t const*   _Format,
        _In_opt_                               _locale_t        _Locale,
                                               va_list          _ArgList
        )_CRT_INSECURE_DEPRECATE(_vcwscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _vcwscanf_l(
        _In_z_ _Scanf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
                                               va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return __conio_common_vcwscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS,
            _Format, _Locale, _ArgList);
    }_CRT_INSECURE_DEPRECATE(_vcwscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL _vcwscanf(
        _In_z_ _Scanf_format_string_params_(1) wchar_t const* const _Format,
                                               va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        return _vcwscanf_l(_Format, NULL, _ArgList);
        #pragma warning(pop)
    }_CRT_STDIO_INLINE int __CRTDECL _vcwscanf_s_l(
        _In_z_ _Scanf_format_string_params_(2) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
                                               va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return __conio_common_vcwscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Format, _Locale, _ArgList);
    }_CRT_STDIO_INLINE int __CRTDECL _vcwscanf_s(
        _In_z_ _Scanf_format_string_params_(1) wchar_t const* const _Format,
                                               va_list              _ArgList
        )
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        return _vcwscanf_s_l(_Format, NULL, _ArgList);
    }_CRT_INSECURE_DEPRECATE(_cwscanf_s_l)
    _CRT_STDIO_INLINE int __CRTDECL _cwscanf_l(
        _In_z_ _Scanf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vcwscanf_l(_Format, _Locale, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_INSECURE_DEPRECATE(_cwscanf_s)
    _CRT_STDIO_INLINE int __CRTDECL _cwscanf(
        _In_z_ _Scanf_format_string_ wchar_t const* const _Format,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);

        #pragma warning(push)
        #pragma warning(disable: 4996) // Deprecation
        _Result = _vcwscanf_l(_Format, NULL, _ArgList);
        #pragma warning(pop)

        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwscanf_s_l(
        _In_z_ _Scanf_format_string_params_(0) wchar_t const* const _Format,
        _In_opt_                               _locale_t      const _Locale,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Locale);
        _Result = _vcwscanf_s_l(_Format, _Locale, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }_CRT_STDIO_INLINE int __CRTDECL _cwscanf_s(
        _In_z_ _Scanf_format_string_ wchar_t const* const _Format,
        ...)
#if defined _NO_CRT_STDIO_INLINE
;
#else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vcwscanf_s_l(_Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }const unsigned short* __cdecl __pctype_func(void)const wctype_t*       __cdecl __pwctype_func(void)int __cdecl iswalnum  (_In_ wint_t _C)int __cdecl iswalpha  (_In_ wint_t _C)int __cdecl iswascii  (_In_ wint_t _C)int __cdecl iswblank  (_In_ wint_t _C)int __cdecl iswcntrl  (_In_ wint_t _C)int __cdecl iswdigit  (_In_ wint_t _C)int __cdecl iswgraph  (_In_ wint_t _C)int __cdecl iswlower  (_In_ wint_t _C)int __cdecl iswprint  (_In_ wint_t _C)int __cdecl iswpunct  (_In_ wint_t _C)int __cdecl iswspace  (_In_ wint_t _C)int __cdecl iswupper  (_In_ wint_t _C)int __cdecl iswxdigit (_In_ wint_t _C)int __cdecl __iswcsymf(_In_ wint_t _C)int __cdecl __iswcsym (_In_ wint_t _C)int __cdecl _iswalnum_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswalpha_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswblank_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswcntrl_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswdigit_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswgraph_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswlower_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswprint_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswpunct_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswspace_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswupper_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswxdigit_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswcsymf_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale)int __cdecl _iswcsym_l  (_In_ wint_t _C, _In_opt_ _locale_t _Locale)wint_t __cdecl towupper(_In_ wint_t _C)wint_t __cdecl towlower(_In_ wint_t _C)int    __cdecl iswctype(_In_ wint_t _C, _In_ wctype_t _Type)wint_t __cdecl _towupper_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale)wint_t __cdecl _towlower_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale)int    __cdecl _iswctype_l(_In_ wint_t _C, _In_ wctype_t _Type, _In_opt_ _locale_t _Locale)int __cdecl isleadbyte(_In_ int _C)int __cdecl _isleadbyte_l(_In_ int _C, _In_opt_ _locale_t _Locale)_CRT_OBSOLETE(iswctype) _DCRTIMP int __cdecl is_wctype(_In_ wint_t _C, _In_ wctype_t _Type)wchar_t* __cdecl _wgetcwd(
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_                             int      _SizeInWords
    )wchar_t* __cdecl _wgetdcwd(
    _In_                             int      _Drive,
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_                             int      _SizeInWords
    )int __cdecl _wchdir(
    _In_z_ wchar_t const* _Path
    )int __cdecl _wmkdir(
    _In_z_ wchar_t const* _Path
    )int __cdecl _wrmdir(
    _In_z_ wchar_t const* _Path
    )typedef unsigned long _fsize_tstruct _wfinddata32_t
{
    unsigned   attrib;
    __time32_t time_create;    // -1 for FAT file systems
    __time32_t time_access;    // -1 for FAT file systems
    __time32_t time_write;
    _fsize_t   size;
    wchar_t    name[260];
}struct _wfinddata32i64_t
{
    unsigned   attrib;
    __time32_t time_create;    // -1 for FAT file systems
    __time32_t time_access;    // -1 for FAT file systems
    __time32_t time_write;
    __int64    size;
    wchar_t    name[260];
}struct _wfinddata64i32_t
{
    unsigned   attrib;
    __time64_t time_create;    // -1 for FAT file systems
    __time64_t time_access;    // -1 for FAT file systems
    __time64_t time_write;
    _fsize_t   size;
    wchar_t    name[260];
}struct _wfinddata64_t
{
    unsigned   attrib;
    __time64_t time_create;    // -1 for FAT file systems
    __time64_t time_access;    // -1 for FAT file systems
    __time64_t time_write;
    __int64    size;
    wchar_t    name[260];
}int __cdecl _waccess(
    _In_z_ wchar_t const* _FileName,
    _In_   int            _AccessMode
    )errno_t __cdecl _waccess_s(
    _In_z_ wchar_t const* _FileName,
    _In_   int            _AccessMode
    )int __cdecl _wchmod(
    _In_z_ wchar_t const* _FileName,
    _In_   int            _Mode
    )_CRT_INSECURE_DEPRECATE(_wsopen_s)
_ACRTIMP int __cdecl _wcreat(
    _In_z_ wchar_t const* _FileName,
    _In_   int            _PermissionMode
    )intptr_t __cdecl _wfindfirst32(
    _In_z_ wchar_t const*         _FileName,
    _Out_  struct _wfinddata32_t* _FindData
    )int __cdecl _wfindnext32(
    _In_  intptr_t               _FindHandle,
    _Out_ struct _wfinddata32_t* _FindData
    )int __cdecl _wunlink(
    _In_z_ wchar_t const* _FileName
    )int __cdecl _wrename(
    _In_z_ wchar_t const* _OldFileName,
    _In_z_ wchar_t const* _NewFileName
    )errno_t __cdecl _wmktemp_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _TemplateName,
    _In_                            size_t   _SizeInWords
    )intptr_t __cdecl _wfindfirst32i64(
    _In_z_ wchar_t const*            _FileName,
    _Out_  struct _wfinddata32i64_t* _FindData
    )intptr_t __cdecl _wfindfirst64i32(
    _In_z_ wchar_t const*            _FileName,
    _Out_  struct _wfinddata64i32_t* _FindData
    )intptr_t __cdecl _wfindfirst64(
    _In_z_ wchar_t const*         _FileName,
    _Out_  struct _wfinddata64_t* _FindData
    )int __cdecl _wfindnext32i64(
    _In_  intptr_t                  _FindHandle,
    _Out_ struct _wfinddata32i64_t* _FindData
    )int __cdecl _wfindnext64i32(
    _In_  intptr_t                  _FindHandle,
    _Out_ struct _wfinddata64i32_t* _FindData
    )int __cdecl _wfindnext64(
    _In_  intptr_t               _FindHandle,
    _Out_ struct _wfinddata64_t* _FindData
    )errno_t __cdecl _wsopen_s(
    _Out_  int*           _FileHandle,
    _In_z_ wchar_t const* _FileName,
    _In_   int            _OpenFlag,
    _In_   int            _ShareFlag,
    _In_   int            _PermissionFlag
    )errno_t __cdecl _wsopen_dispatch(
    _In_z_ wchar_t const* _FileName,
    _In_   int            _OFlag,
    _In_   int            _ShFlag,
    _In_   int            _PMode,
    _Out_  int*           _PFileHandle,
    _In_   int            _BSecure
    )_CRT_INSECURE_DEPRECATE(_wsopen_s)
    _ACRTIMP int __cdecl _wopen(
        _In_z_ wchar_t const* _FileName,
        _In_   int            _OpenFlag,
        ...)_CRT_INSECURE_DEPRECATE(_wsopen_s)
    _ACRTIMP int __cdecl _wsopen(
        _In_z_ wchar_t const* _FileName,
        _In_   int            _OpenFlag,
        _In_   int            _ShareFlag,
        ...)intptr_t __cdecl _wexecl(
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wexecle(
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wexeclp(
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wexeclpe(
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wexecv(
            _In_z_ wchar_t const*        _FileName,
            _In_z_ wchar_t const* const* _ArgList
            )intptr_t __cdecl _wexecve(
            _In_z_     wchar_t const*        _FileName,
            _In_z_     wchar_t const* const* _ArgList,
            _In_opt_z_ wchar_t const* const* _Env
            )intptr_t __cdecl _wexecvp(
            _In_z_ wchar_t const*        _FileName,
            _In_z_ wchar_t const* const* _ArgList
            )intptr_t __cdecl _wexecvpe(
            _In_z_     wchar_t const*        _FileName,
            _In_z_     wchar_t const* const* _ArgList,
            _In_opt_z_ wchar_t const* const* _Env
            )intptr_t __cdecl _wspawnl(
            _In_   int            _Mode,
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wspawnle(
            _In_   int            _Mode,
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wspawnlp(
            _In_   int            _Mode,
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wspawnlpe(
            _In_   int            _Mode,
            _In_z_ wchar_t const* _FileName,
            _In_z_ wchar_t const* _ArgList,
            ...)intptr_t __cdecl _wspawnv(
            _In_   int                   _Mode,
            _In_z_ wchar_t const*        _FileName,
            _In_z_ wchar_t const* const* _ArgList
            )intptr_t __cdecl _wspawnve(
            _In_       int                   _Mode,
            _In_z_     wchar_t const*        _FileName,
            _In_z_     wchar_t const* const* _ArgList,
            _In_opt_z_ wchar_t const* const* _Env
            )intptr_t __cdecl _wspawnvp(
            _In_   int                   _Mode,
            _In_z_ wchar_t const*        _FileName,
            _In_z_ wchar_t const* const* _ArgList
            )intptr_t __cdecl _wspawnvpe(
            _In_       int                   _Mode,
            _In_z_     wchar_t const*        _FileName,
            _In_z_     wchar_t const* const* _ArgList,
            _In_opt_z_ wchar_t const* const* _Env
            )int __cdecl _wsystem(
            _In_opt_z_ wchar_t const* _Command
            )struct tm
{
    int tm_sec;   // seconds after the minute - [0, 60] including leap second
    int tm_min;   // minutes after the hour - [0, 59]
    int tm_hour;  // hours since midnight - [0, 23]
    int tm_mday;  // day of the month - [1, 31]
    int tm_mon;   // months since January - [0, 11]
    int tm_year;  // years since 1900
    int tm_wday;  // days since Sunday - [0, 6]
    int tm_yday;  // days since January 1 - [0, 365]
    int tm_isdst; // daylight savings time flag
}_CRT_INSECURE_DEPRECATE(_wasctime_s)
_Success_(return != 0)
_Ret_writes_z_(26)
_ACRTIMP wchar_t* __cdecl _wasctime(
    _In_ struct tm const* _Tm
    )errno_t __cdecl _wasctime_s(
    _Out_writes_z_(_SizeInWords) _Post_readable_size_(26) wchar_t*         _Buffer,
    _In_range_(>=,26)                                     size_t           _SizeInWords,
    _In_                                                  struct tm const* _Tm
    )size_t __cdecl wcsftime(
    _Out_writes_z_(_SizeInWords)  wchar_t*         _Buffer,
    _In_                          size_t           _SizeInWords,
    _In_z_                        wchar_t const*   _Format,
    _In_                          struct tm const* _Tm
    )size_t __cdecl _wcsftime_l(
    _Out_writes_z_(_SizeInWords)  wchar_t*         _Buffer,
    _In_                          size_t           _SizeInWords,
    _In_z_                        wchar_t const*   _Format,
    _In_                          struct tm const* _Tm,
    _In_opt_                      _locale_t        _Locale
    )_CRT_INSECURE_DEPRECATE(_wctime32_s)
_ACRTIMP wchar_t* __cdecl _wctime32(
    _In_ __time32_t const* _Time
    )errno_t __cdecl _wctime32_s(
    _Out_writes_z_(_SizeInWords) _Post_readable_size_(26) wchar_t*          _Buffer,
    _In_  _In_range_(>=, 26)                              size_t            _SizeInWords,
    _In_                                                  __time32_t const* _Time
    )_CRT_INSECURE_DEPRECATE(_wctime64_s)
_ACRTIMP wchar_t* __cdecl _wctime64(
    _In_ __time64_t const* _Time
    )errno_t __cdecl _wctime64_s(
    _Out_writes_z_(_SizeInWords) _Post_readable_size_(26) wchar_t*          _Buffer,
    _In_  _In_range_(>=, 26)                              size_t            _SizeInWords,
    _In_                                                  __time64_t const* _Time)errno_t __cdecl _wstrdate_s(
    _Out_writes_z_(_SizeInWords) _When_(_SizeInWords >=9, _Post_readable_size_(9)) wchar_t* _Buffer,
    _In_                                                                           size_t   _SizeInWords
    )errno_t __cdecl _wstrtime_s(
    _Out_writes_z_(_SizeInWords) _When_(_SizeInWords >=9, _Post_readable_size_(9)) wchar_t* _Buffer,
    _In_                                                                           size_t   _SizeInWords
    )static __inline wchar_t * __CRTDECL _wctime(
            _In_ time_t const* const _Time)
        {
            return _wctime64(_Time);
        }static __inline errno_t __CRTDECL _wctime_s(
            _Pre_notnull_ _Post_z_ _Out_writes_z_(_SizeInWords) wchar_t*      const _Buffer,
            _In_                                                size_t        const _SizeInWords,
            _In_                                                time_t const* const _Time
            )
        {
            return _wctime64_s(_Buffer, _SizeInWords, _Time);
        }typedef unsigned short _ino_ttypedef _ino_t ino_ttypedef unsigned int _dev_ttypedef _dev_t dev_ttypedef long _off_ttypedef _off_t off_tstruct _stat32
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    _off_t         st_size;
    __time32_t     st_atime;
    __time32_t     st_mtime;
    __time32_t     st_ctime;
}struct _stat32i64
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    __int64        st_size;
    __time32_t     st_atime;
    __time32_t     st_mtime;
    __time32_t     st_ctime;
}struct _stat64i32
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    _off_t         st_size;
    __time64_t     st_atime;
    __time64_t     st_mtime;
    __time64_t     st_ctime;
}struct _stat64
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    __int64        st_size;
    __time64_t     st_atime;
    __time64_t     st_mtime;
    __time64_t     st_ctime;
}struct stat
    {
        _dev_t         st_dev;
        _ino_t         st_ino;
        unsigned short st_mode;
        short          st_nlink;
        short          st_uid;
        short          st_gid;
        _dev_t         st_rdev;
        _off_t         st_size;
        time_t         st_atime;
        time_t         st_mtime;
        time_t         st_ctime;
    }int __cdecl _fstat32(
    _In_  int             _FileHandle,
    _Out_ struct _stat32* _Stat
    )int __cdecl _fstat32i64(
    _In_  int                _FileHandle,
    _Out_ struct _stat32i64* _Stat
    )int __cdecl _fstat64i32(
    _In_  int                _FileHandle,
    _Out_ struct _stat64i32* _Stat
    )int __cdecl _fstat64(
    _In_  int             _FileHandle,
    _Out_ struct _stat64* _Stat
    )int __cdecl _stat32(
    _In_z_ char const*     _FileName,
    _Out_  struct _stat32* _Stat
    )int __cdecl _stat32i64(
    _In_z_ char const*        _FileName,
    _Out_  struct _stat32i64* _Stat
    )int __cdecl _stat64i32(
    _In_z_ char const*        _FileName,
    _Out_  struct _stat64i32* _Stat
    )int __cdecl _stat64(
    _In_z_ char const*     _FileName,
    _Out_  struct _stat64* _Stat
    )int __cdecl _wstat32(
    _In_z_ wchar_t const*  _FileName,
    _Out_  struct _stat32* _Stat
    )int __cdecl _wstat32i64(
    _In_z_ wchar_t const*     _FileName,
    _Out_  struct _stat32i64* _Stat
    )int __cdecl _wstat64i32(
    _In_z_ wchar_t const*     _FileName,
    _Out_  struct _stat64i32* _Stat
    )int __cdecl _wstat64(
    _In_z_ wchar_t const*  _FileName,
    _Out_  struct _stat64* _Stat
    )static __inline int __CRTDECL fstat(int const _FileHandle, struct stat* const _Stat)
        {
            _STATIC_ASSERT(sizeof(struct stat) == sizeof(struct _stat64i32));
            return _fstat64i32(_FileHandle, (struct _stat64i32*)_Stat);
        }static __inline int __CRTDECL stat(char const* const _FileName, struct stat* const _Stat)
        {
            _STATIC_ASSERT(sizeof(struct stat) == sizeof(struct _stat64i32));
            return _stat64i32(_FileName, (struct _stat64i32*)_Stat);
        }typedef wchar_t _Wint_twchar_t* __cdecl _wsetlocale(
        _In_       int            _Category,
        _In_opt_z_ wchar_t const* _Locale
        )_locale_t __cdecl _wcreate_locale(
        _In_   int            _Category,
        _In_z_ wchar_t const* _Locale
        )wint_t __cdecl btowc(
        _In_ int _Ch
        )size_t __cdecl mbrlen(
        _In_reads_bytes_opt_(_SizeInBytes) _Pre_opt_z_ char const* _Ch,
        _In_                                           size_t      _SizeInBytes,
        _Inout_                                        mbstate_t*  _State
        )size_t __cdecl mbrtowc(
        _Pre_maybenull_ _Post_z_                       wchar_t*    _DstCh,
        _In_reads_bytes_opt_(_SizeInBytes) _Pre_opt_z_ char const* _SrcCh,
        _In_                                           size_t      _SizeInBytes,
        _Inout_                                        mbstate_t*  _State
        )errno_t __cdecl mbsrtowcs_s(
        _Out_opt_                         size_t*      _Retval,
        _Out_writes_opt_z_(_Size)         wchar_t*     _Dst,
        _In_                              size_t       _Size,
        _Deref_pre_opt_z_                 char const** _PSrc,
        _In_                              size_t       _N,
        _Inout_                           mbstate_t*   _State
        )errno_t __cdecl wcrtomb_s(
        _Out_opt_                        size_t*    _Retval,
        _Out_writes_opt_z_(_SizeInBytes) char*      _Dst,
        _In_                             size_t     _SizeInBytes,
        _In_                             wchar_t    _Ch,
        _Inout_opt_                      mbstate_t* _State
        )errno_t __cdecl wcsrtombs_s(
        _Out_opt_                                         size_t*         _Retval,
        _Out_writes_bytes_to_opt_(_SizeInBytes, *_Retval) char*           _Dst,
        _In_                                              size_t          _SizeInBytes,
        _Inout_ _Deref_prepost_z_                         wchar_t const** _Src,
        _In_                                              size_t          _Size,
        _Inout_opt_                                       mbstate_t*      _State
        )int __cdecl wctob(
        _In_ wint_t _WCh
        )errno_t __CRTDECL wmemcpy_s(
            _Out_writes_to_opt_(_N1, _N) wchar_t*       _S1,
            _In_                         rsize_t        _N1,
            _In_reads_opt_(_N)           wchar_t const* _S2,
            _In_                         rsize_t        _N
            )errno_t __CRTDECL wmemmove_s(
            _Out_writes_to_opt_(_N1, _N) wchar_t*       _S1,
            _In_                         rsize_t        _N1,
            _In_reads_opt_(_N)           wchar_t const* _S2,
            _In_                         rsize_t        _N
            )__inline int __CRTDECL fwide(
        _In_opt_ FILE* _F,
        _In_     int   _M
        )
    {
        _CRT_UNUSED(_F);
        return (_M);
    }__inline int __CRTDECL mbsinit(
        _In_opt_ mbstate_t const* _P
        )
    {
        return _P == NULL || _P->_Wchar == 0;
    }__inline wchar_t _CONST_RETURN* __CRTDECL wmemchr(
        _In_reads_(_N) wchar_t const* _S,
        _In_           wchar_t        _C,
        _In_           size_t         _N
        )
    {
        for (; 0 < _N; ++_S, --_N)
            if (*_S == _C)
                return (wchar_t _CONST_RETURN*)_S;

        return 0;
    }__inline int __CRTDECL wmemcmp(
        _In_reads_(_N) wchar_t const* _S1,
        _In_reads_(_N) wchar_t const* _S2,
        _In_           size_t         _N
        )
    {
        for (; 0 < _N; ++_S1, ++_S2, --_N)
            if (*_S1 != *_S2)
                return *_S1 < *_S2 ? -1 : 1;

        return 0;
    }__inline _CRT_INSECURE_DEPRECATE_MEMORY(wmemcpy_s)
    wchar_t* __CRTDECL wmemcpy(
        _Out_writes_all_(_N) wchar_t*       _S1,
        _In_reads_(_N)       wchar_t const* _S2,
        _In_                 size_t         _N
        )
    {
        #pragma warning(push)
        #pragma warning(disable : 4995 4996 6386)
        return (wchar_t*)memcpy(_S1, _S2, _N*sizeof(wchar_t));
        #pragma warning(pop)
    }__inline _CRT_INSECURE_DEPRECATE_MEMORY(wmemmove_s)
    wchar_t* __CRTDECL wmemmove(
        _Out_writes_all_opt_(_N) wchar_t*       _S1,
        _In_reads_opt_(_N)       wchar_t const* _S2,
        _In_                     size_t         _N
        )
    {
        #pragma warning(push)
        #pragma warning(disable : 4996 6386)
        return (wchar_t*)memmove(_S1, _S2, _N*sizeof(wchar_t));
        #pragma warning(pop)
    }__inline wchar_t* __CRTDECL wmemset(
        _Out_writes_all_(_N) wchar_t* _S,
        _In_                 wchar_t  _C,
        _In_                 size_t   _N
        )
    {
        wchar_t *_Su = _S;
        for (; 0 < _N; ++_Su, --_N)
        {
            *_Su = _C;
        }
        return _S;
    }typedef mbstate_t _Mbstatettypedef int (__CRTDECL* _CRT_REPORT_HOOKtypedef int (__CRTDECL* _CRT_REPORT_HOOKWtypedef int (__CRTDECL* _CRT_ALLOC_HOOKtypedef void (__CRTDECL* _CRT_DUMP_CLIENTstruct _CrtMemBlockHeaderstruct _CrtMemState
{
    struct _CrtMemBlockHeader* pBlockHeader;
    size_t lCounts[_MAX_BLOCKS];
    size_t lSizes[_MAX_BLOCKS];
    size_t lHighWaterCount;
    size_t lTotalCount;
}typedef struct _CrtMemState
{
    struct _CrtMemBlockHeader* pBlockHeader;
    size_t lCounts[_MAX_BLOCKS];
    size_t lSizes[_MAX_BLOCKS];
    size_t lHighWaterCount;
    size_t lTotalCount;
} _CrtMemStateunsigned char _BitScanReverse64(unsigned long * _Index, unsigned __int64 _Mask)unsigned char _bittest(long const *, long)long _InterlockedAnd(long volatile * _Value, long _Mask)short _InterlockedAnd16(short volatile * _Value, short _Mask)__int64 _InterlockedAnd64(__int64 volatile * _Value, __int64 _Mask)char _InterlockedAnd8(char volatile * _Value, char _Mask)_InterlockedCompareExchangelong __MACHINECALL_CDECL_OR_DEFAULT _InterlockedCompareExchange(long volatile * _Destination, long _Exchange, long _Comparand)short _InterlockedCompareExchange16(short volatile * _Destination, short _Exchange, short _Comparand)__int64 _InterlockedCompareExchange64(__int64 volatile * _Destination, __int64 _Exchange, __int64 _Comparand)char _InterlockedCompareExchange8(char volatile * _Destination, char _Exchange, char _Comparand)_InterlockedDecrementlong __MACHINECALL_CDECL_OR_DEFAULT _InterlockedDecrement(long volatile * _Addend)_InterlockedExchangelong __MACHINECALL_CDECL_OR_DEFAULT _InterlockedExchange(long volatile * _Target, long _Value)short _InterlockedExchange16(short volatile * _Target, short _Value)__int64 _InterlockedExchange64(__int64 volatile * _Target, __int64 _Value)char _InterlockedExchange8(char volatile * _Target, char _Value)_InterlockedExchangeAddlong __MACHINECALL_CDECL_OR_DEFAULT _InterlockedExchangeAdd(long volatile * _Addend, long _Value)short _InterlockedExchangeAdd16(short volatile * _Addend, short _Value)__int64 _InterlockedExchangeAdd64(__int64 volatile * _Addend, __int64 _Value)char _InterlockedExchangeAdd8(char volatile * _Addend, char _Value)_InterlockedIncrementlong __MACHINECALL_CDECL_OR_DEFAULT _InterlockedIncrement(long volatile * _Addend)long _InterlockedOr(long volatile * _Value, long _Mask)short _InterlockedOr16(short volatile * _Value, short _Mask)__int64 _InterlockedOr64(__int64 volatile * _Value, __int64 _Mask)char _InterlockedOr8(char volatile * _Value, char _Mask)long _InterlockedXor(long volatile * _Value, long _Mask)short _InterlockedXor16(short volatile * _Value, short _Mask)__int64 _InterlockedXor64(__int64 volatile * _Value, __int64 _Mask)char _InterlockedXor8(char volatile * _Value, char _Mask)void _ReadWriteBarrier(void)unsigned char _interlockedbittestandset(long volatile *, long)extern __type_info_node __type_info_root_nodestruct __std_type_info_data
{
    const char * _UndecoratedName;
    const char   _DecoratedName[1];
    __std_type_info_data() = delete;
    __std_type_info_data(const __std_type_info_data&) = delete;
    __std_type_info_data(__std_type_info_data&&) = delete;

    __std_type_info_data& operator=(const __std_type_info_data&) = delete;
    __std_type_info_data& operator=(__std_type_info_data&&) = delete;
}int __cdecl __std_type_info_compare(
    _In_ const __std_type_info_data* _Lhs,
    _In_ const __std_type_info_data* _Rhs
    )size_t __cdecl __std_type_info_hash(
    _In_ const __std_type_info_data* _Data
    )const char* __cdecl __std_type_info_name(
    _Inout_ __std_type_info_data* _Data,
    _Inout_ __type_info_node*     _RootNode
    )class type_infonamespace stdint __cdecl _isctype_l(_In_ int _C, _In_ int _Type, _In_opt_ _locale_t _Locale)int __cdecl isalpha(_In_ int _C)int __cdecl _isalpha_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isupper(_In_ int _C)int __cdecl _isupper_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl islower(_In_ int _C)int __cdecl _islower_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isdigit(_In_ int _C)int __cdecl _isdigit_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isxdigit(_In_ int _C)int __cdecl _isxdigit_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isspace(_In_ int _C)int __cdecl _isspace_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl ispunct(_In_ int _C)int __cdecl _ispunct_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isblank(_In_ int _C)int __cdecl _isblank_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isalnum(_In_ int _C)int __cdecl _isalnum_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isprint(_In_ int _C)int __cdecl _isprint_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl isgraph(_In_ int _C)int __cdecl _isgraph_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl iscntrl(_In_ int _C)int __cdecl _iscntrl_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl toupper(_In_ int _C)int __cdecl tolower(_In_ int _C)int __cdecl _tolower(_In_ int _C)int __cdecl _tolower_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl _toupper(_In_ int _C)int __cdecl _toupper_l(_In_ int _C, _In_opt_ _locale_t _Locale)int __cdecl __isascii(_In_ int _C)int __cdecl __toascii(_In_ int _C)int __cdecl __iscsymf(_In_ int _C)int __cdecl __iscsym(_In_ int _C)__inline __crt_locale_data_public* __CRTDECL __acrt_get_locale_data_prefix(void const volatile* const _LocalePointers)
    {
        _locale_t const _TypedLocalePointers = (_locale_t)_LocalePointers;
        return (__crt_locale_data_public*)_TypedLocalePointers->locinfo;
    }__inline int __CRTDECL _chvalidchk_l(
        _In_     int       const _C,
        _In_     int       const _Mask,
        _In_opt_ _locale_t const _Locale
        )
    {
        #ifdef _DEBUG
        return _chvalidator_l(_Locale, _C, _Mask);
        #else
        if (_Locale)
        {
            return __acrt_get_locale_data_prefix(_Locale)->_locale_pctype[_C] & _Mask;
        }

        return __chvalidchk(_C, _Mask);
        #endif
    }__inline int __CRTDECL _ischartype_l(
        _In_     int       const _C,
        _In_     int       const _Mask,
        _In_opt_ _locale_t const _Locale
        )
    {
        if (_Locale && __acrt_get_locale_data_prefix(_Locale)->_locale_mb_cur_max > 1)
        {
            return _isctype_l(_C, _Mask, _Locale);
        }

        return _chvalidchk_l(_C, _Mask, _Locale);
    }struct lconv
{
    char*    decimal_point;
    char*    thousands_sep;
    char*    grouping;
    char*    int_curr_symbol;
    char*    currency_symbol;
    char*    mon_decimal_point;
    char*    mon_thousands_sep;
    char*    mon_grouping;
    char*    positive_sign;
    char*    negative_sign;
    char     int_frac_digits;
    char     frac_digits;
    char     p_cs_precedes;
    char     p_sep_by_space;
    char     n_cs_precedes;
    char     n_sep_by_space;
    char     p_sign_posn;
    char     n_sign_posn;
    wchar_t* _W_decimal_point;
    wchar_t* _W_thousands_sep;
    wchar_t* _W_int_curr_symbol;
    wchar_t* _W_currency_symbol;
    wchar_t* _W_mon_decimal_point;
    wchar_t* _W_mon_thousands_sep;
    wchar_t* _W_positive_sign;
    wchar_t* _W_negative_sign;
}struct tmvoid __cdecl _lock_locales(void)void __cdecl _unlock_locales(void)int __cdecl _configthreadlocale(
        _In_ int _Flag
        )char* __cdecl setlocale(
        _In_       int         _Category,
        _In_opt_z_ char const* _Locale
        )struct lconv* __cdecl localeconv(void)_locale_t __cdecl _get_current_locale(void)_locale_t __cdecl _create_locale(
        _In_   int         _Category,
        _In_z_ char const* _Locale
        )void __cdecl _free_locale(
        _In_opt_ _locale_t _Locale
        )wchar_t* __cdecl _wsetlocale(
        _In_       int            _Category,
        _In_opt_z_ wchar_t const* _Locale
        )_locale_t __cdecl _wcreate_locale(
        _In_   int            _Category,
        _In_z_ wchar_t const* _Locale
        )wchar_t**    __cdecl ___lc_locale_name_func(void)unsigned int __cdecl ___lc_codepage_func   (void)unsigned int __cdecl ___lc_collate_cp_func (void)char*    __cdecl _Getdays(void)char*    __cdecl _Getmonths(void)void*    __cdecl _Gettnames(void)wchar_t* __cdecl _W_Getdays(void)wchar_t* __cdecl _W_Getmonths(void)void*    __cdecl _W_Gettnames(void)size_t __cdecl _Strftime(
        _Out_writes_z_(_Max_size) char*           _Buffer,
        _In_                     size_t           _Max_size,
        _In_z_                   char const*      _Format,
        _In_                     struct tm const* _Timeptr,
        _In_opt_                 void*            _Lc_time_arg)size_t __cdecl _Wcsftime(
        _Out_writes_z_(_Max_size) wchar_t*        _Buffer,
        _In_                     size_t           _Max_size,
        _In_z_                   wchar_t const*   _Format,
        _In_                     struct tm const* _Timeptr,
        _In_opt_                 void*            _Lc_time_arg
        )struct _Collvec
	{	/* stuff needed by _Strcoll, etc. */
	unsigned int _Page;		// UINT
	wchar_t *_LocaleName;
	}typedef struct _Collvec
	{	/* stuff needed by _Strcoll, etc. */
	unsigned int _Page;		// UINT
	wchar_t *_LocaleName;
	} _Collvecstruct _Ctypevec
	{	/* stuff needed by _Tolower, etc. */
	unsigned int _Page;		// UINT
	const short *_Table;
	int _Delfl;
	wchar_t *_LocaleName;
	}typedef struct _Ctypevec
	{	/* stuff needed by _Tolower, etc. */
	unsigned int _Page;		// UINT
	const short *_Table;
	int _Delfl;
	wchar_t *_LocaleName;
	} _Ctypevecstruct _Cvtvec
	{	/* stuff needed by _Mbrtowc, etc. */
	unsigned int _Page;		// UINT
	unsigned int _Mbcurmax;
	int _Isclocale;	// LCID == _CLOCALEHANDLE
	unsigned char _Isleadbyte[32];	// 256 bits
	}typedef struct _Cvtvec
	{	/* stuff needed by _Mbrtowc, etc. */
	unsigned int _Page;		// UINT
	unsigned int _Mbcurmax;
	int _Isclocale;	// LCID == _CLOCALEHANDLE
	unsigned char _Isleadbyte[32];	// 256 bits
	} _Cvtvec_Collvec __CLRCALL_PURE_OR_CDECL _Getcoll(void)_Ctypevec __CLRCALL_PURE_OR_CDECL _Getctype(void)_Cvtvec __CLRCALL_PURE_OR_CDECL _Getcvt(void)int __cdecl _Mbrtowc(_Out_opt_ wchar_t *, const char *, size_t,
	mbstate_t *, const _Cvtvec *)float __CLRCALL_PURE_OR_CDECL _Stof(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **, long)double __CLRCALL_PURE_OR_CDECL _Stod(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **, long)long double __CLRCALL_PURE_OR_CDECL _Stold(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **, long)int __CLRCALL_PURE_OR_CDECL _Strcoll(const char *, const char *,
	const char *, const char *, const _Collvec *)size_t __CLRCALL_PURE_OR_CDECL _Strxfrm(
	_Out_writes_(_End1 - _String1) _Post_readable_size_(return) char *_String1,
	_In_z_ char *_End1, const char *, const char *, const _Collvec *)int __CLRCALL_PURE_OR_CDECL _Tolower(int, const _Ctypevec *)int __CLRCALL_PURE_OR_CDECL _Toupper(int, const _Ctypevec *)int __CLRCALL_PURE_OR_CDECL _Wcrtomb(_Out_ char *, wchar_t, mbstate_t *,
	const _Cvtvec *)int __CLRCALL_PURE_OR_CDECL _Wcscoll(const wchar_t *, const wchar_t *,
	const wchar_t *, const wchar_t *, const _Collvec *)size_t __CLRCALL_PURE_OR_CDECL _Wcsxfrm(
	_Out_writes_(_End1 - _String1) _Post_readable_size_(return) wchar_t *_String1,
	_In_z_ wchar_t *_End1, const wchar_t *, const wchar_t *, const _Collvec *)short __CLRCALL_PURE_OR_CDECL _Getwctype(wchar_t, const _Ctypevec *)const wchar_t *__CLRCALL_PURE_OR_CDECL _Getwctypes(const wchar_t *,
	const wchar_t *, short *, const _Ctypevec *)wchar_t __CLRCALL_PURE_OR_CDECL _Towlower(wchar_t, const _Ctypevec *)wchar_t __CLRCALL_PURE_OR_CDECL _Towupper(wchar_t, const _Ctypevec *)char *__cdecl _Getdays(void)char *__cdecl _Getmonths(void)void *__cdecl _Gettnames(void)size_t __cdecl _Strftime(_Out_writes_z_(_Maxsize) char *,
	_In_ size_t _Maxsize, _In_z_ const char *, _In_ const struct tm *,
	_In_opt_ void *)wchar_t *__cdecl _W_Getdays(void)wchar_t *__cdecl _W_Getmonths(void)void *__cdecl _W_Gettnames(void)size_t __cdecl _Wcsftime(_Out_writes_z_(_Maxsize) wchar_t *,
	_In_ size_t _Maxsize, _In_z_ const wchar_t *, _In_ const struct tm *,
	_In_opt_ void *)_locale_t __cdecl _GetLocaleForCP(unsigned int)extern _CRTIMP2_PURE double __CLRCALL_PURE_OR_CDECL _Stodx(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **,
	long, int *)extern _CRTIMP2_PURE long double __CLRCALL_PURE_OR_CDECL _Stoldx(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **,
	long, int *)extern _CRTIMP2_PURE long __CLRCALL_PURE_OR_CDECL _Stolx(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **,
	int, int *)extern _CRTIMP2_PURE unsigned long __CLRCALL_PURE_OR_CDECL _Stoulx(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **,
	int, int *)extern _CRTIMP2_PURE long long __CLRCALL_PURE_OR_CDECL _Stollx(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **,
	int, int *)extern _CRTIMP2_PURE unsigned long long __CLRCALL_PURE_OR_CDECL _Stoullx(const char *,
	_Out_opt_ _Deref_post_opt_valid_ char **,
	int, int *)