 #include <string>
#include <iostream>
using namespace std;

class employee
{
    string name[3],dep[3];
    int empid[3];

    public: void getdata();
    void displaydata();
};

void employee::getdata(){
    
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Employee ID: ";
        cin>>empid[i];
        fflush(stdin);
        cout<<"Enter Name: ";
        getline(cin,name[i]);
        cout<<"Enter Department Name: ";
        getline(cin,dep[i]);
    }
}

void employee::displaydata(){
    cout<<endl<<" DETAILS "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Name = "<<name[i]<<endl;
        cout<<"Department = "<<dep[i]<<endl;
        cout<<"Employee id = "<<empid[i]<<endl;
    }
}

int main()
{
    employee e;
    e.getdata();
    e.displaydata();

    return 0;
}











/*[3:49 pm, 19/04/2022] Abhisek Hsp Cse:
 #include <string>
#include <iostream>
using namespace std;

class employee
{
    string name[3],dep[3];
    int empid[3];

    public: void getdata();
    void displaydata();
};

void employee::getdata(){
    
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Employee ID: ";
        cin>>empid[i];
        fflush(stdin);
        cout<<"Enter Name: ";
        getline(cin,name[i]);
        cout<<"Enter Department Name: ";
        getline(cin,dep[i]);
    }
}

void employee::displaydata(){
    cout<<endl<<" DETAILS "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Name = "<<name[i]<<endl;
        cout<<"Department = "<<dep[i]<<endl;
        cout<<"Employee id = "<<empid[i]<<endl;
    }
}

int main()
{
    employee e;
    e.getdata();
    e.displaydata();

    return 0;
}
*/