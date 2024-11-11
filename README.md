# gsModule
This is a template repository for starting new submodules


# Table of contents
- [1. Introduction](#introduction)
- [2. How to use the submodules](#paragraph1)
    * [2.1. Directory structure](#subparagraph1)
    * [2.2. Inserting the module to the PR testing framework](#subparagraph2)
    * [2.3. Adding unittests](#subparagraph3)  
- [3. FAQ](#faq)

## Introduction <a name="introduction"></a>
- Download (Either with the flag or in the txt file; optionally with HASH tag)
- Stored in optional/
- Locally also possible (without using e.g. github.com/gismo/gsModule.git)
- For having a github backup in github.com/gismo/ --> Contact gismo@inria.fr

## How to use the submodules <a name="paragraph1"></a>
As given in CMakeList.txt:

### Directory structure <a name="subparagraph1"></a>
- Examples are stored in examples and can be run inside in build folder
- The same for filedata
- Source and Header files are in ...
- To include the header file, use eg. #include<src/gsHeader2.h>

### Inserting the module to the CI/PR testing framework <a name="subparagraph2"></a>
- TODO

### Adding unittests <a name="subparagraph3"></a>
- TODO

### Adding a C interface
NOTE: This requires the `gsCInterface` module to be loaded.

An example of C-bindings for `gsTemplates/gsClass.h` can be found in `gsTemplates/cinterface/gsCClass.h` and `gsTemplates/cinterface/gsCClass.cpp`.

To make the bindings detectable, they need to be included in `gsCInterface/Cgismo.h`, as follows:
```C++
#ifdef gsModule_ENABLED
#include <gsModule/gsCClass.h>
#endif
```

To include the C bindings in the MATLAB interface (see the `gsMatlab` module), the C header files need to be included into `gsMatlab/src/gismo_initialize.m.in` as follows:
```
%%% Optional Modules
%%  gsModule @gsModule_path@
```
and
```
... %%% Optional Modules
... %%  gsModule @gsModule_headers@
```
As well as in the `gsMatlab/CMakeLists.txt`
```cmake
if (${SUBMODULE} STREQUAL "gsModule")
    set(gsModule_headers "\n            'addheader','gsCClass.h',...")
    set(gsModule_path "\naddpath(genpath([path_to_optional,'/gsModule']));")
endif()
```

## Frequently asked questions <a name="faq"></a>
- Dependency of other submodules (TODO)
- What happens when stable gets a PR and my module is not anymore working?
- ...
