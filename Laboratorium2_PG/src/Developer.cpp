#include "Developer.h"
using namespace std;
Developer::Developer(string surname1,int age1,int experience1,int salary1):Employee(surname1,age1,experience1,salary1){
}
float Developer::calculateBonus(int value){
float result=value+0.2*value*(getSalary()+getExperience());
return result;
}
