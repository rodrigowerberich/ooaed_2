//
// Created by Rodrigo on 14/06/2018.
//

#include "IntegerProperty.h"

bool IntegerProperty::operator==(const Property &aProperty) const {
    if(auto * p = dynamic_cast<const IntegerProperty *>(&aProperty)){
        return static_cast<int>(*this) == static_cast<int>(*p);
    }
    return false;
}

String IntegerProperty::toString() const {
    return std::to_string(m_value);
}
