 //#include<iostream>
//using namespace std;
//int main()
//{
 //char operator;
 //float num1,num2;
 //cout<<"enter an opertor(+,-,*,/):";
 //cin>>operator;
 //cout<<"enter two numbers :"<<endl;
 //cin>>num1>>num2;

// switch(operator){
  //   case'+':
    // cout<<num1<<"+"<<num2<<"="<<num1+num2;
    // break;
 //}

    
//}








// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) 
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}

