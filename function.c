#include<stdio.h>

void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    
    printf("values in side of swap functions\n");

}
int main()
{
    int m,n;
    
    printf("enter the two numbers:\n");
    scanf("%d%d",&m,&n);
   // cin>>m>>n;
   
    swap(m,n);
    printf("%d",m);
    printf("%d",n);
   
     // cout<<m<<endl;
    //cout<<n<<endl;
}

