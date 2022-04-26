#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"

class Developer: public Employee
{
    public:
        Developer();
        Developer(string surname1,int age1, int experience1,int salary1);
        virtual float calculateBonus(int value) override;
};

#endif // DEVELOPER_H
