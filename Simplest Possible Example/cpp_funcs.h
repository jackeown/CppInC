// The header needs the extern "C" when being used in 
// cpp files, but not as a header for C.
#ifdef __cplusplus
extern "C" {
#endif

    void my_cpp_func();

#ifdef __cplusplus
}
#endif