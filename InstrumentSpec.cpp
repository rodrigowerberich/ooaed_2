//
// Created by Rodrigo on 11/06/2018.
//

#include "InstrumentSpec.h"
#include "utils.h"

const Property & InstrumentSpec::Property(const String &property) const{
    if(m_properties.count(property)){
        return *m_properties.at(property);
    }else{
        return  NullProperty::instance();
    }
}

bool InstrumentSpec::operator==(const InstrumentSpec &other) const {
    for(const auto & pair:other.Properties()){
        String key = pair.first;
        if(m_properties.count(key)){
            if(!compare_pointer(m_properties.at(key),pair.second)){
                return false;
            }
        }
    }
    return true;
}