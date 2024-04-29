// C++ program for dynamic allocation
#include <iostream>
using namespace std;
 
class naveen {
    int* ptr;
 
public:
    // Default constructor
    naveen()
    {
        // Dynamically initializing ptr
        // using new
        ptr = new int;
        *ptr = 10;
         }
 
    // Function to display the value
    // of ptr
    void display()
    {
        cout << *ptr << endl;
    }
};
 
// Driver Code
int main()
{
    naveen obj1;
 
    // Function Call
    obj1.display();
 
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////

// C++ program to dynamically
// deallocating the memory
#include <iostream>
using namespace std;
 
class surendra {
    int* ptr;
 
public:
    // Default constructor
    surendra()
    {
        ptr = new int;
        *ptr = 10;
    }
 
     // Function to display the value
    void display()
    {
        cout << "Value: " << *ptr
             << endl;
    }
};
 // Driver Code
int main()
{
    // Dynamically allocating memory
    // using new operator
    surendra* obj1 = new surendra();
    surendra* obj2 = new surendra();
 
    // Assigning obj1 to obj2
    obj2 = obj1;
 
    // Function Call
    obj1->display();
    obj2->display();
  // Dynamically deleting the memory
    // allocated to obj1
    delete obj1;
 
    return 0;
}



/*



//Below C++ program is demonstrating dynamic initialization of objects
 and calculating bank deposit:


// C++ program to illustrate the dynamic
// initialization as memory is allocated
// to the object
#include <iostream>
using namespace std;
 
class bank {
    int principal;
    int years;
    float interest;
    float returnvalue;
    public:
    // Default constructor
    bank() {}
 
    // Parameterized constructor to
    // calculate interest(float)
    bank(int p, int y, float i)
    {
        principal = p;
        years = y;
        interest = i/100;
        returnvalue = principal;
        cout << "\nDeposited amount (float):";
 
        // Finding the interest amount
        for (int i = 0; i < years; i++) {
            returnvalue = returnvalue
                          * (1 + interest);
        }
    }
 
    // Parameterized constructor to
    // calculate interest(integer)
    bank(int p, int y, int i)
    {
           principal = p;
        years = y;
        interest = float(i)/100;
        returnvalue = principal;
        cout << "\nDeposited amount"
             << " (integer):";
 
        // Find the interest amount
        for (int i = 0; i < years; i++) {
            returnvalue = returnvalue
                          * (1 + interest);
        }
    }
 
    // Display function
    void display(void)
    {
        cout << returnvalue
             << endl;
    }
};
// Driver Code
int main()
{
    // Variable initialization
    int p = 200;
    int y = 2;
    int I = 5;
    float i = 2.25;
 
    // Object is created with
    // float parameters
    bank b1(p, y, i);
 
    // Function Call with object
    // of class
    b1.display();
 
    // Object is created with
    // integer parameters
    bank b2(p, y, I);
 
    // Function Call with object
    // of class
    b2.display();
 
    return 0;
}

*/
 