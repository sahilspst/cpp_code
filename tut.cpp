#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    static int* getPtr(void){
        return &count;
    }
    int* getPtrObj(void){
        return &(this->count);
    }
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee no " << count << endl;
        ;
    }
    void getCount(void)
    {
        cout << "Count = " << count << endl;
    }
    void incrCount(void) { count++; }
};

int Employee::count;

int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();

    Employee::doSomething(&harry);
    harry.getData();


    cout<<"Address of static var for Class is "<<Employee::getPtr();
    cout<<"Address of static var for harry is "<<harry.getPtrObj();




    /*harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    rohan.setData();
    rohan.getData();*/
    return 0;
}