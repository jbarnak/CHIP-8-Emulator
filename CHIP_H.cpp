#include "CHIP_8.h"

bool CHIP_8::stack_create(std::fstream ROM)
{
    if(! ROM.is_open())
    {
        std::cout << "Error Reading File" << std::endl;
        return false;
    }

    else
    {
        while(! ROM.eof())
        {

            stack = new unsigned short [];
        }
    }
}
