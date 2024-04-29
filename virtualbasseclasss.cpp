/*
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()  // constructor
    {
        a=25;
    }
};
class B : public virtual A
{

};
class C : public virtual A
{

} ;
class D : public virtual C
{

};
int main()
{
    D object; //object creation of derived class d
    cout<<"a = "<<object.a<<endl;
    return 0;
}

*/

/*

#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"my name is surendra";
    
    }
};
class B :public virtual A
{
public:
};
class C :virtual public B
{
public:
};
class D : public virtual C
{

};
int main()
{
   D object;
   object.show();
   return 0;
}

*/


#include<iostream>

using namespace std;

class student {
    int rno;
public:

    void getnumber() {
        cout << "Enter Roll No:";
        cin>>rno;
    }

    void putnumber() {
        cout << "Roll No:" << rno << endl;
    }
};
class test : virtual public student {
public:
    int part1, part2;

    void getmarks() {
        cout << "Enter Marks"<<endl;
        cout << "Part1:";
        cin>>part1;
        cout << "Part2:";
        cin>>part2;
    }

    void putmarks() {
        cout << "Marks Obtained"<<endl;
        cout << "Part1:" << part1<<endl;
        cout << "Part2:" << part2<<endl;
    }
};
class sports : public virtual student {
public:
    int score;

    void getscore() {
        cout << "Enter Sports Score:";
        cin>>score;
    }

    void putscore() {
        cout << "Sports Score is:" << score<<endl;
    }
};
class result : public test, public sports {
    int total;
public:

    void display() {
        total = part1 + part2 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "Total Score:" << total<<endl;
    }
};
int main() {
    result obj;

    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    return 0;
}

