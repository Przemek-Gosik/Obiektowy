#include "Bufor.h"
using namespace std;
Bufor::Bufor()
{
    this->tablica=new int [10];
    this->rozmiar=10;
    this->indeks_wolny=0;
}
Bufor::Bufor(int rozmiar){
    this->rozmiar=rozmiar;
    this->tablica=new int [rozmiar];
    this->indeks_wolny=0;
}
Bufor::~Bufor(){
    delete []tablica;
}
void Bufor::add(int value){
    cout<<"tu"<<endl;
    tablica[this->indeks_wolny]=value;
    this->indeks_wolny=this->indeks_wolny+1;
}
int Bufor::getIndex(){
    return this->indeks_wolny;
}
int Bufor::getSize(){
    return this->rozmiar;
}
int Bufor::getFirst(){
    return tablica[this->indeks_wolny];
}
int Bufor::getTab(int i){
    return tablica[i];
}
void Bufor::setFirst(int value){
    if(this->indeks_wolny!=this->rozmiar){
        tablica[this->indeks_wolny]=value;
        this->indeks_wolny++;
    }
    else{
        cout<<"Tablica jest pe³na!"<<endl;
    }
}
void Bufor::setTab(int pos,int value){
    if(pos < this->rozmiar){
        if(pos == this->indeks_wolny){
            tablica[pos]=value;
            this->indeks_wolny++;
        }
        else{
            tablica[pos]=value;
        }
        }
        else{
            cout<<"Bledna pozycja!"<<endl;
        }
    }


void Bufor::show(){
    cout<<"Wypisanie tablicy: "<<endl;
for(int i=0;i<this->indeks_wolny;i++){
    cout<<tablica[i]<<" ";
}
cout<<"tu"<<endl;
cout<<endl;
}
