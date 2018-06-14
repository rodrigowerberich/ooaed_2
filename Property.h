//
// Created by Rodrigo on 13/06/2018.
//

#ifndef OOAED_2_PROPERTY_H
#define OOAED_2_PROPERTY_H

#include <string>
#include "utils.h"

using String = std::string;


class Property{
public:
    virtual bool operator==(const Property &) const = 0;
    virtual String toString() const = 0;
    virtual std::unique_ptr<Property> getPointer() = 0;
};

class NullProperty: public Property{
public:

    static const NullProperty & instance(){
        if(!m_instance){
            m_instance = std::unique_ptr<NullProperty>(new NullProperty());
        }
        return *m_instance;
    }

    bool operator==(const Property &aProperty) const override {
        return false;
    }

    String toString() const override {
        return String{"Invalid"};
    }

    std::unique_ptr<Property> getPointer() override {
        return make_unique<NullProperty>(*this);
    }

    friend std::unique_ptr<NullProperty>;


private:
    NullProperty(){}
    static std::unique_ptr<NullProperty> m_instance;
};


#endif //OOAED_2_PROPERTY_H
