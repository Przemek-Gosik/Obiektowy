#include "Employee.h"
using namespace std;
Employee::Employee(string surname1,int age1,int experience1,int salary1){
    surname=surname1;
    age=age1;
    experience=experience1;
    salary=salary1;
}
Employee::~Employee(){
};
void Employee::show(){
cout<<surname<<" wiek: "<<age<<" "<<experience<<" lat pracy, zarobki:"<<salary<<endl;
}
int Employee::ageEmployement(){
    return age-experience;
}
int Employee::getAge(){
    return age;
}
int Employee::getExperience(){
    return experience;
}
string Employee::getSurname(){
    return surname;
}
int Employee::getSalary(){
    return salary;
}
