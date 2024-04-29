/*
#include<iostream>
using namespace std;
class Bank
{
public:
float a,interest,totalbalance;
virtual void calinterest(float balance)//
   {
      a=balance;
      interest=a*4/100;
      totalbalance=a+interest;
      cout<<"your interest is :"<<interest<<endl;
      cout<<"your total balance is :"<<totalbalance;
    }
  
};
 class SBI:public Bank

 {
      public:
 void calinterest(float balance)
 {
     a=balance;
     interest=a*5/100;
     totalbalance=a+interest;
     cout<<"your interest is :"<<interest<<endl;
     cout<<"your total balance :"<<totalbalance<<endl;
 }
};
int main()
{
    Bank object1,*ptr;
    SBI object2;
    ptr = & object2;                  //ADDRESS OF DERIVED CLASS
    ptr->calinterest(500.50);
    return 0;
}
*/














































#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}





/*

class Animal {
   private:
    string type;
    ... .. ...
    public:
      Animal(): type("Animal") {}
    ... .. ...
};

class Dog : public Animal {
   private:
    string type;
    ... .. ...
    public:
      Animal(): type("Dog") {}
    ... .. ...
};

class Cat : public Animal {
   private:
    string type;
      ... .. ...
    public:
      Animal(): type("Cat") {}
    ... .. ...
};
*/



/*


// C++ program to demonstrate the use of virtual function

#include <iostream>
#include <string>
using namespace std;

class Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Animal() : type("Animal") {}

    // declare virtual function
    virtual string getType() {
        return type;
    }
};

class Dog : public Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Dog() : type("Dog") {}

    string getType()
     override 
     {
        return type;
     }
};

class Cat : public Animal 
{
   private:
    string type;

   public:
    // constructor to initialize type
    Cat() : type("Cat") {}

    string getType() override {
        return type;
    }
};

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

int main() {
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
}




*/



/*




*/

