#include "MeanBufor.h"

double MeanBufor::calculate(){
    double srednia=0;
    for(int i=0;i<this->getIndex();i++){
        srednia+=this->getTab(i);
    }
    srednia=srednia/this->getIndex();
    return srednia;

}
