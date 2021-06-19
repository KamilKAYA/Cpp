#ifndef COMMUNICATION_H
#define COMMUNICATION_H
#include "rs232.h"

class Communication: public RS232
{
public:
    Communication();
    int GetTopClass();
};

#endif // COMMUNICATION_H
