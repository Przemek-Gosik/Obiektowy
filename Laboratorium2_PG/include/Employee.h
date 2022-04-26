#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
class Employee
{
    public:
        Employee();
        Employee(string surname1, int age1, int experience1, int salary1);
        virtual ~Employee();
        virtual void show();
        virtual float calculateBonus(int value)=0;
        int ageEmployement();
        string getSurname();
        int getAge();
        int getSalary();
        int getExperience();
    private:
        string surname;
        int age;
        int experience;
        int salary;
};

#endif // EMPLOYEE_H
