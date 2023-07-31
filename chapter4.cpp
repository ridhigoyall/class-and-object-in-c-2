// static data Members and Methods
#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the employee is " << id << " and this is employee no. is " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // default value is 0

int main()
{
    Employee Ridhi, Harsha, Sidhi;
    Ridhi.setData();
    Ridhi.getData();
    Employee::getCount();

    Harsha.setData();
    Harsha.getData();
    Employee::getCount();

    Sidhi.setData();
    Sidhi.getData();
    Employee::getCount();

    return 0;
}