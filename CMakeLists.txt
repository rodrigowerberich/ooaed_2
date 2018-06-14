cmake_minimum_required(VERSION 3.10)
project(ooaed_2)

set(CMAKE_CXX_STANDARD 11)

add_executable(ooaed_2 main.cpp Inventory.cpp Inventory.h InstrumentEnums.h InstrumentEnums.cpp Instrument.cpp Instrument.h InstrumentSpec.cpp InstrumentSpec.h utils.h InstrumentType.cpp InstrumentType.h Property.cpp Property.h StringProperty.cpp StringProperty.h IntegerProperty.cpp IntegerProperty.h)