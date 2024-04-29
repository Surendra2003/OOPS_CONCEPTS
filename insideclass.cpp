#include <iostream>
using namespace std;

class student
{
    public:
    char name[20];
    int roll_no;
    float marks[3],avg,total=0;

    void getdata()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll_no: ";
        cin>>roll_no;
        for(int i=0;i<3;i++)
        {
            cout<<"Enter "<<i+1<<" Subject Number: ";
            cin>>marks[i];
        }
    }

    void dpdata()
    {
        for(int i=0;i<3;i++)
        {
            total+=marks[i];
        }
        avg = total/3;

        cout<<"Total Marks = "<<total<<endl;
        cout<<"Average Marks = "<<avg<<endl;
    }
}S;

int main()
{
    S.getdata();
    S.dpdata();
    return 0;
}
