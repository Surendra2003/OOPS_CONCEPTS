#include<iostream>
using namespace std;
main()
{
    int *p;
    float *q;
    p=new int;
    q=new float;
    *p=50;
    *q=60.5;
    cout<<"*p"<<endl<<*q;
    delete p;
    delete q;
    

}