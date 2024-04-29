#include<iostream>
using namespace std;

class calculation
{
    public:
    inline int add(int,int);
    inline int sub(int,int);
    inline float div(float,float);
    inline int multi(int,int);
};
int calculation::add(int a,int b)
{
    return a+b;
}
int calculation::sub(int a,int b)
{
    return a-b;
}
float calculation::div(float a,float b)
{
    return a/b;
}
int calculation::multi(int a,int b)
{
    return a*b;
}
int main()
{
    calculation c;
    cout<<c.add(12,35)<<endl;
    cout<<c.sub(50,20)<<endl;
    cout<<c.div(50.00f,2.50f)<<endl;
    cout<<c.multi(10,5)<<endl;
    

    return 0;
}

 