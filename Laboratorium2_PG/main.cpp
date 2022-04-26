#include <iostream>
#include "Developer.h"
#include "Employee.h"
#include "TeamLeader.h"
#include "Bufor.h"
#include "MaxBufor.h"
#include "MeanBufor.h"
using namespace std;
void whoWorkMoreThan5Years(Employee** employees, int rozmiar){
    for(int i=0;i<rozmiar;i++){
        if(employees[i]->getExperience() > 5){
            employees[i]->show();
        }
    }
};
int howManyEarnLessThanMeanBonus(Employee** employees,int rozmiar){
    int licznik=0;
    float srednia=0;
    for(int i=0;i<rozmiar;i++){
        srednia+=employees[i]->calculateBonus(1);
    }
    srednia=srednia/rozmiar;
    for(int i=0;i<rozmiar;i++){
        if(employees[i]->calculateBonus(1)<srednia){
            licznik++;
        }
    }
    return licznik;
};
int main()
{
    /*
    Employee** pracownicy = new Employee*[5];
    pracownicy[0] = new Developer("Kowalski", 20, 7, 15000);
    pracownicy[1] = new Developer("Kowalewski", 22, 4, 15000);
    pracownicy[2] = new Developer("Kowalsky", 21, 5, 15000);
    pracownicy[3] = new Developer("Kowal", 22, 6, 15000);
    pracownicy[4] = new TeamLeader("Nowak", 30, 10, 25000);

    whoWorkMoreThan5Years(pracownicy, 5);
    cout << howManyEarnLessThanMeanBonus(pracownicy, 5) << endl;
   */
     Bufor *b = new MeanBufor(5);
    b->add(1);
    b->add(2);
    b->add(3);
    b->add(4);
    b->add(5);
    b->show();
    cout << b->calculate() << endl;
    cout<<b->getSize()<<endl;

    Bufor *b2 = new MaxBufor(5);
    b2->add(1);
    b2->add(2);
    b2->add(3);
    b2->add(4);
    b2->add(5);
    b2->add(6);

    b2->show();
    cout << b2->calculate();

    return 0;
}
