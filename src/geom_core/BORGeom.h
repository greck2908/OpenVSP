//
// This file is released under the terms of the NASA Open Source Agreement (NOSA)
// version 1.3 as detailed in the LICENSE file which accompanies this software.
//

// BORGeom.h:
// Rob McDonald
//
//////////////////////////////////////////////////////////////////////

#if !defined(VSP_BOR_GEOM__INCLUDED_)
#define VSP_BOR_GEOM__INCLUDED_

#include "Geom.h"
#include "XSec.h"


//==== BOR Geom ====//
class BORGeom : public Geom
{
public:
    BORGeom( Vehicle* vehicle_ptr );
    virtual ~BORGeom();

    virtual void ComputeCenter();
    virtual void Scale();
    virtual void AddDefaultSources( double base_len = 1.0 );

    virtual void OffsetXSecs( double off );

    Parm m_Aradius;
    Parm m_Bradius;
    Parm m_Cradius;

protected:
    virtual void UpdateSurf();

    double m_Xoff;
};


#endif // !defined(VSP_BOR_GEOM__INCLUDED_)
