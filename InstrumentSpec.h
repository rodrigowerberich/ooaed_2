//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_INSTRUMENTSPEC_H
#define OOAED_1_INSTRUMENTSPEC_H


#include "InstrumentEnums.h"
#include "Property.h"
#include <unordered_map>
#include <memory>

using BaseProperty = std::unique_ptr<Property>;
using BasePair = std::pair<String,BaseProperty>;
using InstrumentProperties = std::unordered_map<String,BaseProperty>;

class InstrumentSpec {
public:
    InstrumentSpec() = default;
    InstrumentSpec(InstrumentProperties && properties):m_properties{std::move(properties)}{}

    InstrumentSpec(const InstrumentSpec & other){
        for(auto & pair: other.m_properties){
            auto key = pair.first;
            auto property = pair.second->getPointer();
            m_properties.insert(std::make_pair<String,BaseProperty >(std::move(key),std::move(property)));
        }
    }



    bool operator ==(const InstrumentSpec & other) const;
    const InstrumentProperties & Properties() const{return m_properties;}
    const Property & Property(const String & property) const;

private:
    InstrumentProperties m_properties;
};

#endif //OOAED_1_INSTRUMENTSPEC_H
