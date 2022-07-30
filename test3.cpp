#include <iostream>
using namespace std;

class Employee
{

public:
    int id;
    float salary;
    /*Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }*/

    // Employee(){};
    void bla()
    {
        cout << "blah" << endl;
    }
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    /*Programmer(int inpId)
    {
        //id = inpId;
        languageCode = 9;
    }*/
    void getData()
    {
        // cout<<id<<endl;
    }
};

int main()
{

    // learning inheritance

    Employee e1;
    Programmer p1;
    // P1.bla();
    // P1.print();

    // Employee e1;

    return 0;
}
