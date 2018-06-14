//
// Created by Rodrigo on 06/06/2018.
//

#ifndef OOAED_1_INVENTORY_H
#define OOAED_1_INVENTORY_H

#include <vector>
#include <iostream>
#include "Instrument.h"
#include "utils.h"

class Inventory {
public:
    Inventory(){
        instruments.emplace_back();
    }

    void addInstrument(const String & serial_number, double price, InstrumentSpec & instrument);
    void addInstrument(const String & serial_number, double price, InstrumentSpec && instrument);
    const Instrument& get(String serialNumber);

    std::vector<Instrument> search(const InstrumentSpec & search_spec) const;
//    std::vector<Instrument> search(InstrumentSpec && instrument) const;
private:
    std::vector<Instrument> instruments;
};


#endif //OOAED_1_INVENTORY_H
