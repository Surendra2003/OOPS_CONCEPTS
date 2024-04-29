#include<iostream>
using namespace std;

    class teacher

{
    int i=1;
    char name[20];
    char subject[20];
    int hours;
    int salary;
    public:
    void getdata(void);
    void displaydata(void);
};
    
 void teacher::getdata()
 {
     while(i<=5)
     {
     cout<<"Enter name :";
     cin>>name;
    
     cout<<"Enter subject:";
     cin>>subject;
    
     cout<< "No of hours worked:";
     cin>>hours;
     salary=hours*2500;
     i++;
     }


 }
void teacher::displaydata()
{
    cout<<"\n Name:"<<name;
    cout<<"\n Subject:"<<subject;
    cout<<"\n No hours worked:"<<hours;
    cout<<"\n salary :"<<salary;

}
int main()
{
     
     teacher t;
    
     t.getdata();
      t.displaydata();
     return 0;
}