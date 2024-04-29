
#include<iostream>
using namespace std;
template class T ;
 class domain
{
    T n1,n2 ;
    public:
    domain(T a,T b)
    {
        n1=a; 
        n2=b;
        void check()
        {
            if(n1>n2)
            cout<<n1<<"is largest number.";
            else
            cout<<n2<<"is largest number.";
        }
    }
    
};
    int main()
    {
        domain <float> obj1(5.2,5.4);
        domain <int> obj2(3,5);
        obj1.check();
        obj2.check();
        return 0;

    }