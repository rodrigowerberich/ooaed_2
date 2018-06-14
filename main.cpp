#include <iostream>
#include "utils.h"
#include "Inventory.h"
#include "StringProperty.h"
#include "IntegerProperty.h"

using BaseProperty = std::unique_ptr<Property>;
using InstrumentProperties = std::unordered_map<String,BaseProperty>;

void initializeInventory(Inventory & inventory){
    InstrumentProperties map1;
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::GUITAR);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::COLLINGS);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","CJ");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ACOUSTIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::INDIAN_ROSEWOOD);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::SITKA);
    inventory.addInstrument("11277",3999.95,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::GUITAR);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::MARTIN);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","D 18");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ACOUSTIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::MAHOGANY);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::ADIRONDACK);
    inventory.addInstrument("122784",5495.95,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::GUITAR);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::FENDER);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","Stratocastor");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ELECTRIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::ALDER);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::ALDER);
    inventory.addInstrument("V95693",5495.95,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::GUITAR);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::FENDER);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","Stratocastor");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ELECTRIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::ALDER);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::ALDER);
    inventory.addInstrument("V9512",5495.95,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::GUITAR);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::GIBSON);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","SG'61 Reissue");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ELECTRIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::MAHOGANY);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::MAHOGANY);
    inventory.addInstrument("#82765501",1890.95,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::GUITAR);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::GIBSON);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","Les Paul");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ELECTRIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::MAPLE);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::MAPLE);
    inventory.addInstrument("#70108276",2295.95,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::MANDOLIN);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::GIBSON);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","F5");
    map_emplace_unique_ptr<String,Style>(map1,"Style",Style::Enum::F);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ACOUSTIC);
    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::MAPLE);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::MAPLE);
    inventory.addInstrument("#9019920",5495.99,InstrumentSpec{std::move(map1)});

    map1 = InstrumentProperties();
    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::BANJO);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::GIBSON);
    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","RB-3");
    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",5);
    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ACOUSTIC);
    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::MAPLE);
    inventory.addInstrument("#8900231",2945.95,InstrumentSpec{std::move(map1)});

}

void print_instrument(const Instrument & instrument){
    if(instrument.isValid()){
        std::cout << "Instrument " << instrument.SerialNumber() <<
                  " is a " << instrument.getInstrumentSpec().Property("InstrumentType").toString() << " ";
        if(auto * instrument_type = dynamic_cast<const InstrumentType*>(&instrument.getInstrumentSpec().Property("InstrumentType"))){
            switch(instrument_type->GetEnum()){
                case InstrumentType::Enum::GUITAR :{
                    std::cout << instrument.getInstrumentSpec().Property("Builder").toString() << " " <<
                             instrument.getInstrumentSpec().Property("Model").toString() << " " <<
                             instrument.getInstrumentSpec().Property("NumStrings").toString() << "-strings " <<
                             instrument.getInstrumentSpec().Property("Type").toString() << ", " <<
                             instrument.getInstrumentSpec().Property("BackWood").toString() << " back and sides, " <<
                             instrument.getInstrumentSpec().Property("TopWood").toString() << " top, for $" <<
                             instrument.Price() << std::endl;
                    break;
                }case InstrumentType::Enum::MANDOLIN :{
                    std::cout << instrument.getInstrumentSpec().Property("Builder").toString() << " " <<
                              instrument.getInstrumentSpec().Property("Model").toString() << "-" <<
                              instrument.getInstrumentSpec().Property("Style").toString() << " " <<
                              instrument.getInstrumentSpec().Property("Type").toString() << ", " <<
                              instrument.getInstrumentSpec().Property("BackWood").toString() << " back and sides, " <<
                              instrument.getInstrumentSpec().Property("TopWood").toString() << " top, for $" <<
                              instrument.Price() << std::endl;
                    break;
                }case InstrumentType::Enum::BANJO :{
                    std::cout << instrument.getInstrumentSpec().Property("Builder").toString() << " " <<
                              instrument.getInstrumentSpec().Property("Model").toString() << " " <<
                              instrument.getInstrumentSpec().Property("NumStrings").toString() << "-strings " <<
                              instrument.getInstrumentSpec().Property("Type").toString() << ", " <<
                              instrument.getInstrumentSpec().Property("BackWood").toString() << " back and sides, for $" <<
                              instrument.Price() << std::endl;
                    break;
                }
            }
        }
    }
}


int main() {

    Inventory inventory;
    initializeInventory(inventory);


    InstrumentProperties map1;
//    map_emplace_unique_ptr<String,InstrumentType>(map1,"InstrumentType",InstrumentType::Enum::BANJO);
    map_emplace_unique_ptr<String,Builder>(map1,"Builder",Builder::Enum::GIBSON);
//    map_emplace_unique_ptr<String,StringProperty>(map1,"Model","CJ");
//    map_emplace_unique_ptr<String,IntegerProperty>(map1,"NumStrings",6);
//    map_emplace_unique_ptr<String,Type>(map1,"Type",Type::Enum::ACOUSTIC);
//    map_emplace_unique_ptr<String,Wood>(map1,"TopWood",Wood::Enum::INDIAN_ROSEWOOD);
//    map_emplace_unique_ptr<String,Wood>(map1,"BackWood",Wood::Enum::SITKA);
    InstrumentSpec whatErinLikes{std::move(map1)};

    auto instruments = inventory.search(whatErinLikes);
    if(!instruments.empty()){
        std::cout << "You might like these instruments:" << std::endl;
        for(const auto & instrument:instruments){
            print_instrument(instrument);
        }
    }else{
        std::cout << "Sorry no instrument found" << std::endl;
    }
//
    return 0;
}