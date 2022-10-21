/** @file helloSubmodule.cpp

    @brief First example of submodule

    This file is part of the G+Smo library.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.

    Author(s): P. Weinmueller
*/

//! [Include namespace]
#include <gismo.h>

#include <gsSubmodule/src/gsClassExample.h>

using namespace gismo;
//! [Include namespace]

int main(int argc, char *argv[])
{

  gsInfo << "Hello submodule!\n";

  // Example how to use the class in submodules
  submoduleClass submClass;
  std::string str = "Hello, I am called from the submodule Class";
  submClass.printString(str);

  gsMultiPatch<real_t> mp;
  gsReadFile<>("turtle.xml",mp);
  gsInfo<<"Plotting the geometry, given in gsSubmodule/filedata in Paraview as geom.pvd\n";
  gsWriteParaview( mp, "geom",1000,true);
  
  return EXIT_SUCCESS;
}
