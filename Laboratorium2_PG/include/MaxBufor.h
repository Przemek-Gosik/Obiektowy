#ifndef MAXBUFOR_H
#define MAXBUFOR_H
#include "Bufor.h"
using namespace std;

class MaxBufor:public Bufor
{
    public:
        MaxBufor():Bufor(){};
        MaxBufor(int rozmiar):Bufor(rozmiar){};
        virtual double calculate() override;
        virtual void add(int value) override;
};

#endif // MAXBUFOR_H
