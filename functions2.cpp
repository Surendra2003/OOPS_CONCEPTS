// programe to  the call by reference
#include<iostream>
using namespace std;
void swap1(int*a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
    
 cout<<"values in side of swap functions"<<endl;

}
int main()
{
    int m,n;
    
    cout<<"enter the two numbers:"<<endl;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
   
    swap1(&m,&n);
   
   
      cout<< "m=" <<m<<endl;
    cout<<"n="<<n<<endl;
}
