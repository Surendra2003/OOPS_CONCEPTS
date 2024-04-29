/* 
Ambiquity Resolution in Inheritance
Ambiguity can be occurred in using the multiple inheritance when a function with the same name occurs in more than one base class.

Let's understand this through an example:

#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  
class C : public A, public B  
{  
    void view()  
    {  
        display();  
    }  
};  
int main()  
{  
    C c;  
    c.display();  
    return 0;  
}  
Output:

error: reference to 'display' is ambiguous
        display();
The above issue can be resolved by using the class resolution operator with the function. In the above example, the derived class code can be rewritten as:
class C : public A, public B  
{  
    void view()  
    {  
        A :: display();         // Calling the display() function of class A.  
        B :: display();         // Calling the display() function of class B.  
  
    }  
};  
An ambiguity can also occur in single inheritance.

Consider the following situation:

class A  
{  
   public:  
void display()  
{  
   cout<<?Class A?;  
}   
} ;  
class B  
{   
  public:  
 void display()  
{  
 cout<<?Class B?;  
}  
} ;  
In the above case, the function of the derived class overrides the method of the base class. Therefore, call to the display() function will simply call the function defined in the derived class. If we want to invoke the base class function, we can use the class resolution operator.

int main()  
{  
    B b;  
   b.display();               // Calling the display() function of B class.  
   b.B :: display();       // Calling the display() function defined in B class.  
}   
*/