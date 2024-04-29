
/*

#include<iostream>
using namespace std;
 
class Complex
  {
    private:
    int real, imag;
    public:
    Complex(int r = 0, int i = 0) {real = r;   imag = i;}
     
    // This is automatically called when '+' is used with
    // between two Complex objects
         Complex operator + (Complex const &obj) 
         {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
         }
         void print()
         {  
         cout << real << " + i" << imag << '\n';
         }
    };
 
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}

*/
// compile time polymorphism operator overloading
#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
  void getdata(int x,int y)
  {
    a=x;
    b=y;

  }
  void showdata()
  {
    cout<<"value of a ="<<a<<endl;
    cout<<"value of b ="<<b<<endl;
  }
  
  complex operator+(complex obj)
  {
    complex tem;
    tem.a = a+obj.a; 
    tem.b = b+obj.b;
    return (tem);
  }
  

};
int main()
{
  complex t1,t2,t3;
  t1.getdata(1,2);
  t2.getdata(2,3);
 //      t3=t1.operator+t2
   t3=t1+t2;
  t3.showdata();
  return 0;
}




 


