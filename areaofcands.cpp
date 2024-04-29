#include<iostream>
using namespace std;
#define pi 3.14
int squarearea(int &);
int circlearea(int &);
int main()
{
int a=10;
cout << "squarearea(a)" << " " << squarearea(a) << endl;
cout << "circlearea(a)" << " " << circlearea(a) ;
return 0;
}

int squarearea (int&a)
{
    return a*a;
}
int circlearea(int&a)
{
    return  pi*a*a;
}
