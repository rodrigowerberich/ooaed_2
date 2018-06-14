//
// Created by Rodrigo on 06/06/2018.
//

#include "Inventory.h"
#include "utils.h"

void Inventory::addInstrument(const String &serial_number, double price, InstrumentSpec &instrument) {
        instruments.emplace_back(serial_number,price,std::move(instrument));
}

void Inventory::addInstrument(const String &serial_number, double price, InstrumentSpec &&instrument) {
    instruments.emplace_back(serial_number,price,std::move(instrument));
}

const Instrument& Inventory::get(String serialNumber){
    auto found = std::find_if(instruments.begin(),instruments.end(),
                 [&serialNumber](const Instrument & m) -> bool {return m.SerialNumber() == serialNumber;});
    if(found == instruments.end()){
        return instruments[0];
    }else{
        return *found;
    }
}

std::vector<Instrument> Inventory::search(const InstrumentSpec &search_spec) const {
    std::vector<Instrument> found_instruments;
    for(const auto & instrument:instruments){
        if(search_spec == instrument.getInstrumentSpec()){
            found_instruments.push_back(instrument);
        }
    }
    return found_instruments;
}

//std::vector<Instrument> Inventory::search(InstrumentSpec &&instrument) const {
//    return std::vector<Instrument>();
//}
