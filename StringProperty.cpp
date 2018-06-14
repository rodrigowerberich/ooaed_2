//
// Created by Rodrigo on 14/06/2018.
//

#include "StringProperty.h"

bool StringProperty::operator==(const Property &aProperty) const {
    if(auto * p = dynamic_cast<const StringProperty *>(&aProperty)){
        return *this == *p;
    }
    return false;
}

bool StringProperty::operator==(const StringProperty &aProperty) const {
    return (static_cast<String>(*this) == static_cast<const String>(aProperty));
}

String StringProperty::toString() const{
    return *this;
}
