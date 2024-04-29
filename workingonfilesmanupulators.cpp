/*
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char string[30];
    cout<<"enter a string";
    cin>>string;
    int len=strlen(string)
    fstream file;
    cout<<"\n opening the 'text'file and storing the string in it \n\n";
    file.open('text',ios::in|ios::out);
    for(int i=0;i<len;i++)
    file.put(string[i]);
    file.seekg(0);
    char ch;
    cout<<"reading the file context:";
    while(file)
    {
        file.grt(ch);
        cout<<ch;

    }
    return 0;
}

*/


#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
char string[80];
cout<<"Enter a string: ";
cin>>string;
int len=strlen(string);
fstream file;               //input and output stream
cout<<"\n Opening the 'TEXT' file and storing the string in it.\n\n";

file.open("TEXT", ios::in | ios::out);

for(int i=0;i<len;i++)

file.put(string[i]);          //put a character to file

file.seekg(0);               //go to the start

char ch;
cout<<"Reading the file contents: ";
while(file)
{
file.get(ch);                  //get a character from file

cout<<ch;                      //display it on screen
}
return 0;
}













/*

//reading from two files simultaneously

#include <iostream>
#include <stdlib.h>
using namespace std;
    

int main()
{
    FILE *fp1,*fp2;
    char line1[50],line2[50];
    char *n1,*n2;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","r");

    cin>>line1>>line2;

    if((fp1==NULL)||(fp2==NULL))
    {
       cout<<"error";            // printf("ERROR");
        exit(1);
    }
    while(1)
    {
        n1=fgets(line1,sizeof(line1),fp1);
        n2=fgets(line2,sizeof(line2),fp2);
        if((n1==NULL)||(n2==NULL))
        {
            break;
        }
          cout<<""<<line1<<""<<line2;                    // printf("%s%s",line1,line2);

    }
    return 0;
}

*/


