#include<iostream>
using namespace std;

int area(int side)
{
return side*side;
}
int area(int height,int width)
{
    return height*width;
}
float area(float radius)
{
    return 3.14*radius*radius;
}
int main()
{
    cout<<area(5.0f)<<endl;
    cout<<area(4)<<endl;
    cout<<area(2,3)<<endl;
}
