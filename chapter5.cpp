// Array of object
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 212;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of employee is " << id << endl;
    }
};
int main()
{
    // Employee Ridhi, Lovish, Rohan, Harry;
    // Ridhi.setId();
    // Ridhi.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}