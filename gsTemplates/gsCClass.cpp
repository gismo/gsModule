#ifdef gsCInterface_ENABLED

#include <gismo.h>
#include <gsModule/gsTemplates/gsClass.h>
#include <gsModule/gsTemplates/gsCClass.h>

#ifdef __cplusplus
extern "C"
{
#endif

GISMO_EXPORT CsubmoduleClass * submoduleClass_create()
{
    return reinterpret_cast<CsubmoduleClass*>(new gismo::submoduleClass());
}

GISMO_EXPORT void submoduleClass_print(CsubmoduleClass * ptr, char* string)
{ reinterpret_cast<gismo::submoduleClass*>(ptr)->printString(string); }

GISMO_EXPORT void submoduleClass_delete(CsubmoduleClass * ptr)
{ delete reinterpret_cast<gismo::submoduleClass*>(ptr); }

#ifdef __cplusplus
}
#endif

#endif // gsCInterface_ENABLED