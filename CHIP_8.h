//
// Created by jared on 6/14/21.
//

#ifndef CHIP_8_CHIP_8_H
#define CHIP_8_CHIP_8_H

#include <fstream>
#include <iostream>
#include "Registers.h"

/*
 * TODO: READ FILE I/O
 * TODO: IMPLEMENT FILE STREAM
 */

class CHIP_8 {
private:
    // Memory
    unsigned short *stack; // This will be as long as the inputted file stream
    unsigned short *index_register;
    unsigned short *program_counter;

    unsigned short registers[MAX_REGISTERS];
    short delay_timer;
    short sound_timer;

    char keypad;
public:
    bool stack_create(std::fstream ROM); // creates stack;

   // void fetch();     TODO
   // void execute();   TODO
   // void decode();    TODO



};

#endif //CHIP_8_CHIP_8_H
