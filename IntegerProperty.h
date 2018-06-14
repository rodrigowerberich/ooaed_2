//
// Created by Rodrigo on 14/06/2018.
//

#ifndef OOAED_2_INTEGERPROPERTY_H
#define OOAED_2_INTEGERPROPERTY_H


#include "Property.h"

class IntegerProperty: public Property{
public:

    IntegerProperty(int value = 0):m_value{value}{}

    operator int() const{
        return m_value;
    }

    bool operator==(const Property &aProperty) const override;

    std::unique_ptr<Property> getPointer() override {
        return make_unique<IntegerProperty>(*this);
    }

    String toString() const override;

private:
    int m_value;
};


#endif //OOAED_2_INTEGERPROPERTY_H
