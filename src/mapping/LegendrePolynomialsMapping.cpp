//
// Created by younes on 17/11/2021.
//

#define SOFA_COMPONENT_MAPPING_LEGENDREPOLYNOMIALSMAPPING_CPP
#include "LegendrePolynomialsMapping.inl"
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/core/ObjectFactory.h>

namespace sofa::component::mapping
{
    using namespace defaulttype;

    // Register in the Factory
    int LegendrePolynomialsMappingClass = core::RegisterObject("Set the positions and velocities of points attached to a rigid parent")
                                   .add< LegendrePolynomialsMapping< sofa::defaulttype::Vec3Types, sofa::defaulttype::Vec3Types > >() ;
    template class SOFA_COSSERAT_MAPPING_API LegendrePolynomialsMapping< sofa::defaulttype::Vec3Types, sofa::defaulttype::Vec3Types >;
} // namespace sofa::component::mapping
