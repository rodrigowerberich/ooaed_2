//
// Created by Rodrigo on 06/06/2018.
//

#ifndef OOAED_1_GUITARENUMS_H
#define OOAED_1_GUITARENUMS_H


#include <string>
#include "Property.h"

using String = std::string;

class Type : public Property{
public:
    enum class Enum{
        ACOUSTIC, ELECTRIC
    };

    static String ConvertTypeToString(Enum value){
        switch (value){
            case Enum::ACOUSTIC:
                return "ACOUSTIC";
            case Enum::ELECTRIC:
                return "ELECTRIC";
        }
    }

    Type(Enum value):m_value{value}{}

    bool operator==(const Property &aProperty) const override {
        if(auto * p = dynamic_cast<const Type*>(&aProperty)){
            return m_value == p->m_value;
        }
        return false;
    }

    String toString() const override{
        return Type::ConvertTypeToString(m_value);
    }

    std::unique_ptr<Property> getPointer() override {
        return make_unique<Type>(*this);
    }

    Enum GetEnum(){
        return m_value;
    }

private:
    Enum m_value;
};

class Builder : public Property{
public:
    enum class Enum{
        FENDER,MARTIN,GIBSON,COLLINGS,OLSON,RYAN,PRS,ANY
    };

    static String ConvertBuilderToString(Enum value){
        switch (value){
            case Enum::FENDER :
                return "FENDER";
            case Enum::MARTIN :
                return "MARTIN";
            case Enum::GIBSON :
                return "GIBSON";
            case Enum::COLLINGS :
                return "COLLINGS";
            case Enum::OLSON :
                return  "OLSON";
            case Enum::RYAN:
                return  "RYAN";
            case Enum::PRS :
                return "PRS";
            case Enum::ANY :
                return "ANY";
        }
    }

    Builder(Enum value):m_value{value}{}

    bool operator==(const Property &aProperty) const override {
        if(auto * p = dynamic_cast<const Builder*>(&aProperty)){
            return m_value == p->m_value;
        }
        return false;
    }

    String toString() const override{
        return Builder::ConvertBuilderToString(m_value);
    }

    std::unique_ptr<Property> getPointer() override {
        return make_unique<Builder>(*this);
    }

    Enum GetEnum(){
        return m_value;
    }

private:
    Enum m_value;
};

class Wood : public Property{
public:
    enum class Enum{
        INDIAN_ROSEWOOD,BRAZILIAN_ROSEWOOD,MAHOGANY,MAPLE,COCOBOLO,CEDAR,ADIRONDACK,ALDER,SITKA
    };

    static String ConvertWoodToString(Enum value){
        switch (value){
            case Enum::INDIAN_ROSEWOOD :
                return "INDIAN_ROSEWOOD";
            case Enum::BRAZILIAN_ROSEWOOD :
                return "BRAZILIAN_ROSEWOOD";
            case Enum::MAHOGANY :
                return "MAHOGANY";
            case Enum::MAPLE :
                return "COLLINGS";
            case Enum::COCOBOLO :
                return  "COCOBOLO";
            case Enum::CEDAR:
                return  "CEDAR";
            case Enum::ADIRONDACK :
                return "ADIRONDACK";
            case Enum::ALDER :
                return "ALDER";
            case Enum::SITKA :
                return "SITKA";
        }
    }

    Wood(Enum value):m_value{value}{}

    bool operator==(const Property &aProperty) const override {
        if(auto * p = dynamic_cast<const Wood*>(&aProperty)){
            return m_value == p->m_value;
        }
        return false;
    }

    String toString() const override{
        return Wood::ConvertWoodToString(m_value);
    }

    std::unique_ptr<Property> getPointer() override {
        return make_unique<Wood>(*this);
    }

    Enum GetEnum(){
        return m_value;
    }

private:
    Enum m_value;
};

class Style : public Property{
public:
    enum class Enum{
        A,F
    };

    static String ConvertStyleToString(Enum value){
        switch (value){
            case Enum::A :
                return "A";
            case Enum::F :
                return "F";
        }
    }

    Style(Enum value):m_value{value}{}

    bool operator==(const Property &aProperty) const override {
        if(auto * p = dynamic_cast<const Style*>(&aProperty)){
            return m_value == p->m_value;
        }
        return false;
    }

    String toString() const override{
        return Style::ConvertStyleToString(m_value);
    }

    std::unique_ptr<Property> getPointer() override {
        return make_unique<Style>(*this);
    }

    Enum GetEnum(){
        return m_value;
    }

private:
    Enum m_value;
};

#endif //OOAED_1_GUITARENUMS_H
