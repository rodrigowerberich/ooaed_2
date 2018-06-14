//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_INSTRUMENT_H
#define OOAED_1_INSTRUMENT_H


#include <string>
#include <iostream>
#include <utility>
#include "InstrumentSpec.h"
#include "InstrumentType.h"
#include "utils.h"

using String = std::string;

class Instrument {
public:
    Instrument()=default;

    Instrument(String serial_number, double price, InstrumentSpec && instrument_spec):
            m_serial_number{std::move(serial_number)},m_price{price},m_instrument_spec{std::move(instrument_spec)}{}

    const InstrumentSpec & getInstrumentSpec() const {
        return m_instrument_spec;
    }

    const String &SerialNumber() const {
        return m_serial_number;
    }

    double Price() const {
        return m_price;
    }

    void SetPrice(double price) {
        m_price = price;
    }

    bool isValid() const{
        return !m_serial_number.empty();
    }

private:
    String m_serial_number;
    double m_price;
    InstrumentSpec m_instrument_spec;
};

#endif //OOAED_1_INSTRUMENT_H
