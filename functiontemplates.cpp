#include<iostream>
using namespace std;
template<class T>
T sum(T a ,T b)
{
    cout<<"Total= "<<a+b<<endl;
}
int main()
{
 sum(5.6,3.5);
 sum(3,2);   
}