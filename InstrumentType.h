//
// Created by Rodrigo on 13/06/2018.
//

#ifndef OOAED_2_INSTRUMENTTYPE_H
#define OOAED_2_INSTRUMENTTYPE_H

#include <string>
#include <vector>
#include "Property.h"

using String = std::string;

class InstrumentType : public Property{
public:
    enum class Enum{
        GUITAR,
        BANJO,
        MANDOLIN
    };

    static String ConvertInstrumentTypeToString(Enum value){
        switch (value){
            case Enum::GUITAR:
                return "GUITAR";
            case Enum::BANJO:
                return "BANJO";
            case Enum::MANDOLIN:
                return "MANDOLIN";
        }
    }

    InstrumentType(Enum value):m_value{value}{}

    bool operator==(const Property &aProperty) const override {
        if(auto * p = dynamic_cast<const InstrumentType*>(&aProperty)){
            return m_value == p->m_value;
        }
        return false;
    }

    std::unique_ptr<Property> getPointer() override {
        return make_unique<InstrumentType>(*this);
    }

    String toString() const override {
        return InstrumentType::ConvertInstrumentTypeToString(m_value);
    }

    Enum GetEnum() const{
        return m_value;
    }

private:
    Enum m_value;
};


#endif //OOAED_2_INSTRUMENTTYPE_H
