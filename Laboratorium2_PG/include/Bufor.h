#ifndef BUFOR_H
#define BUFOR_H
#include <iostream>

class Bufor
{
    public:
        Bufor();
        Bufor(int rozmiar);
        virtual ~Bufor();
        virtual void add(int value);
        virtual double calculate()=0;
        int getIndex();
        int getSize();
        int getTab(int i);
        int getFirst();
        void setFirst(int value);
        void setTab(int pos,int value);
        void show();
    private:
        int rozmiar;
        int indeks_wolny;
        int* tablica;
};

#endif // BUFOR_H
