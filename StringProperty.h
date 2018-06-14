//
// Created by Rodrigo on 14/06/2018.
//

#ifndef OOAED_2_STRINGPROPERTY_H
#define OOAED_2_STRINGPROPERTY_H


#include "Instrument.h"

class StringProperty: public String , public Property{
public:
    StringProperty(const String & string = ""):String(string){}
    bool operator==(const StringProperty &aProperty) const;
    bool operator==(const Property &aProperty) const override;

    std::unique_ptr<Property> getPointer() override {
        return make_unique<StringProperty>(*this);
    }

    String toString() const override;
};

#endif //OOAED_2_STRINGPROPERTY_H
