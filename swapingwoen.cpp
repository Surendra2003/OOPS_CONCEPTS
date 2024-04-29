
#include <iostream>

using namespace std;
int main()
{
    int num1,num2;

    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;

    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;

    cout<<"First Number = "<<num1<<endl<<"Second Number = "<<num2;

    return 0;
}

