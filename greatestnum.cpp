

#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,big;

    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;

    big = (num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);
    cout<<"Greatest = "<<big;

    return 0;
}
