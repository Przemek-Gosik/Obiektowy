#ifndef MEANBUFOR_H
#define MEANBUFOR_H
#include "Bufor.h"
#include <iostream>

class MeanBufor: public Bufor
{
    public:
        MeanBufor():Bufor(){};
        MeanBufor(int rozmiar):Bufor(rozmiar){};
        virtual double calculate() override;
};

#endif // MEANBUFOR_H
