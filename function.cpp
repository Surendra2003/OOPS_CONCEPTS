// programme to show call by value
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    
 cout<<"values in side of swap functions"<<endl;

}
int main()
{
    int m,n;
    
    cout<<"enter the two numbers:"<<endl;
    cin>>m>>n;
   
    swap(m,n);
   
   
      cout<<m<<endl;
    cout<<n<<endl;
}


