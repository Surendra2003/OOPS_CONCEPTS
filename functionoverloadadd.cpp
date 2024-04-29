/*
#include<iostream>
using namespace std;
 
 int add(int a,int b,int c)
 {
     return a+b+c;
 }
 float add(float c,float d,float e)
 {
     return c+d+e;
 }
 int main()
 {
     cout<<add(5,7,3)<<endl;
    cout<<add(1.5f,1.6f,1.9f);
 }
 

 */

// compile time polymorphism function overloading
# include<iostream>
using namespace std;
class ABC
{
  public:
  void printresult( int i)
  {
    cout<<"printing int result:"<<i<<endl;
  }
  void printresult( double f)
  {
    cout<<"printing float result"<<f<<endl;
  }
  void printresult( string c)
  {
    cout<<"printing string result"<<c<<endl;
  }


};
 int main()
 {
   ABC show;
   show.printresult(10.56f);
   show.printresult(12);
   show.printresult("my name is surendra");
   return 0;

 }





