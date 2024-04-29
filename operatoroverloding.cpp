#include <iostream>
using namespace std;
class rectangle
{
    int l,b;
    public:
    rectangle()
    {
        l=0;
        b=0;
    }
    void operator++()
    {
        l+=2;
        b+=2;
    }
    void display()
    {
        cout<<"length="<<l<<endl;
        cout<<"breadth="<<b<<endl;
    }

};
int main()
{
    rectangle r;
    cout<<"before increament"<<endl;
    r.display();
    ++ r;
    cout<<"after increament"<<endl;
    r.display();
    return 0;


}

/*

// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ ()
     {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main()
 {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}
*/