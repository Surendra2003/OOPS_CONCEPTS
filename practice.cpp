
//COPY CONSTRUCTOR
#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}












/*
#include<iostream>
using namespace std;
class surendra //defining defult constroctor
{
    public:
    double l;
   // surendra( )//default constuctor
    surendra()
    


    {
       l =5.6 ;
       cout <<"height of surendra is:";
       cout <<" "<<l;

    }

};
int main()
{
surendra height;
return 0;
}
*/
// write a program to implement parameterised constructor
/*
#include<iostream>
using namespace std;
class multiply
{
    public:

    
     int multiply(int a,int b)
    {  
        return a*b;
    }
    cout<<"result of a*b=";
    cout<<""<<multiply(int a,int b);

};
int main()
{
    multiply result1( 10,20);
    multiply result2(5,25);
    return 0;


}
*/






















/*








/*

// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create object and initialize data members
  Wall wall1(10.5, 8.6);
  Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
*/





/*
#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  Wall wall1;
  return 0;
}
*/