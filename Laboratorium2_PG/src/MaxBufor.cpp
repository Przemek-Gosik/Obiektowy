#include "MaxBufor.h"

double MaxBufor::calculate(){
    int maks=this->getTab(0);
    for(int i=0;i<this->getIndex();i++){
        if(maks<this->getTab(i)){
            maks=this->getTab(i);
        }
    }
    return maks;
}
void MaxBufor::add(int value){
    if(this->getSize() >this->getIndex()){

        Bufor::add(value);
    }
    else{
        cout<<"Tablica jest juz pelna!!"<<endl;
    }
}
