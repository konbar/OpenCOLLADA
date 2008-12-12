/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_ENVIRONMENTFOG_H__
#define __MayaDM_ENVIRONMENTFOG_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMGeometryShape.h"
namespace MayaDM
{
/*
<p><pre>
 This contains the "shape" for the environment fog.

</pre></p>
*/
class EnvironmentFog : public GeometryShape
{
public:
public:
	EnvironmentFog(FILE* file,const std::string& name,const std::string& parent=""):GeometryShape(file, name, parent, "environmentFog"){}
	virtual ~EnvironmentFog(){}
protected:
	EnvironmentFog(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):GeometryShape(file, name, parent, nodeType) {}
private:

};
}//namespace MayaDM
#endif//__MayaDM_ENVIRONMENTFOG_H__
