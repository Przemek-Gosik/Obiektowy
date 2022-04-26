#include "TeamLeader.h"

TeamLeader::TeamLeader(string surname1,int age1,int experience1,int salary1):Employee(surname1,age1,experience1,salary1){
}
float TeamLeader::calculateBonus(int value){
    float result=value*(1+getSalary()+getExperience());
    return result;
}
void TeamLeader::show(){
    cout<<"Jestem Team Leader z "<<getExperience()<<" letnim doswiadczeniem"<<endl;
}


