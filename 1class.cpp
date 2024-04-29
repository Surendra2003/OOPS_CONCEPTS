#include<iostream>
using namespace std;
class person
{
    char name[20];
    int age;
    public :
    void displaydata(void);
    void getdata(void);

};
void person::getdata()
{
    cout<<"Enter name :";
    cin>>name;

    cout<<"Enter age :";

    cin>>age;

}
void person::displaydata(void)
{
    cout<<"\n Name="<<name;
    cout<<"\n Age="<<age;

}
int main()
{
    person p;
    p.getdata();
    p.displaydata();
    return 0;

}

