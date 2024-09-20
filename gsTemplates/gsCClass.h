#ifdef __cplusplus
extern "C"
{
#endif

    struct CsubmoduleClass; // Opaque type that we use as a handle
    typedef struct CsubmoduleClass CsubmoduleClass;

    GISMO_EXPORT CsubmoduleClass *  submoduleClass_create();

    GISMO_EXPORT void               submoduleClass_print(CsubmoduleClass * ptr, char* string);

    GISMO_EXPORT void               submoduleClass_delete(CsubmoduleClass * ptr);


#ifdef __cplusplus
}
#endif