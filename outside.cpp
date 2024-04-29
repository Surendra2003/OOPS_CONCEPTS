#include <iostream>
using namespace std;

class test
{
    int emp_id;
    char dpname[20];
    float salary;

    public:
    void getdata();
    void dpdata();
};

void test::getdata()
{
    cout<<"Enter Emp_ID: ";
    cin>>emp_id;
    cout<<"Enter Department Name: ";
    cin>>dpname;
    cout<<"Enter Salary: ";
    cin>>salary;
}

void test::dpdata()
{
    cout<<"Emp_ID = "<<emp_id<<endl;
    cout<<"Department = "<<dpname<<endl;
    cout<<"Salary"<<salary;
}

int main()
{
    test t;
    t.getdata();
    t.dpdata();

    return 0;
}