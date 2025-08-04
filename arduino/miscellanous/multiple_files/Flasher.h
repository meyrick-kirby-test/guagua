#ifndef FLASHER_H
#define FLASHER_H

#include "Arduino.h"

class Flasher
{
    public:
        Flasher(int pin, int duration);
        void flash(int times);

    private:
        int _pin;
        int _d;
};

#endif
