
// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;

// Abstract class
class Shape
 {
   protected:
    float dimension;

   public:
    void getDimension()
     {
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public Shape 
{
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape 
{
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() 
{
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "Enter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}







/*

//  example for abstarct class
#include<iostream>
using namespace std;
class Base
{
    int x;
    public:
    virtual void fun() = 0;
    int getX()
    {
        return x ;
    }
};
//this class inherits from basse class and implements fun()
class Derived : public Base
{
    int y;
    public:
    void fun()
    {
        cout<<"this is surendra i am calling fun() ";
    }
};
int main(void)
{
    Derived d;
    d.fun();
    return 0;

}
*/

/*
1) A class is abstract if it has atleast one pure virtual function

 #include<iostream>
 using namespace std;
 class Text
 {
     int x;
     public:
     virtual void show()=0 //virtual void Test::show()
     int getX()
     { 
         return x;
     }
 } ;
 int main(void)
 {
     Test t;
     return 0;

 }

 2) we can have pointers and references of abstract class type

 #include<iostream>
 using namespace std;
 class base
 {
     public:
     virtual void show() = 0;
 };
 class derived :public base
 {
     pubic:
     void show()
     {
       cout<<"in derived class"<<endl;

     }
 };
 int main(void)
 {
     base*bp=new derived();
     bp->show();
     return 0;

 }


3) if we do not override the pure virtual function in derived class,
    then derived class also becomes abstract class

    #include<iostream>
    using namespace std;
    class base
    {
        public:
        virtual void show() = 0;

    };
    class derived : public base
    {

    };
    int main (void)
    {                    //'derived': virtual void base show()
        derived d;
        return 0;
    }

4) An abstract class can have constructors
     #include<iostream>
     using namespace std;
     class base
     {
         protected:
         int x ;
         public:
         virtual void fun() = 0;
         base (int i)
         }


     }



















     */









