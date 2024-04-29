#include<iostream>
using namespace std;
class person
{
    char name[20];
    int age;
    int rollno;
    int sub1marks;
    int sub2marks;
    int sub3marks;
    float avg;
    public:
    void displaydata(void);
    void getdata(void);
};

 void person::getdata()
 {
     cout<<"Enter your name:";
     cin>>name;
     cout<<"Enter your age:";
     cin>>age;
     cout<<"Enter your roll number:";
     cin>>rollno;
     cout<<"Enter your subject 1 marks:";
     cin>>sub1marks;
     cout<<"Enter your subject 2 marks:";
     cin>>sub2marks;
     cout<<"Enter your subject 3 marks:";
     cin>>sub3marks;

     avg=(sub1marks+sub2marks+sub3marks)/3;
    


 }
 void person::displaydata(void)
 {
     cout<<"\n Name ="<<name;
     cout<<"\n age ="<<age;
     cout<<"\n rollno ="<<rollno;
     cout<<"\n sub1marks ="<<sub1marks;
     cout<<"\n sub2marks ="<<sub2marks;
     cout<<"\n sub3marks ="<<sub3marks;
     cout<<"\n avg ="<<avg;


 }
 int main()
 {
     person p;
    p.getdata();
    p.displaydata();
    return 0;


 }



