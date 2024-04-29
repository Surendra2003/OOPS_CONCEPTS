
/*
// working on single file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream outf("ITEM");      //connecct ITEM file to the outf
    cout<<"Enter item name :";
    char name[30];
    cin>>name;          // get name from key board
    outf<<name<<endl;            // write to file Item 
    cout<<"Enter item cost :";
    float cost;
    cin>>cost;
    outf<<cost<<endl;         // write cost to ITEM file
    outf.close();         //  disconnect ITEM file from outf
    ifstream inf("ITEM");   //connect ITEM file from inf
    inf>>name;          //read name
    inf>>cost;         //read cost
    cout<<""<<endl;
    cout<<"Item name :"<<name<<endl;
    cout<<"Item cost: "<<cost<<endl;
    inf.close();   // disconnect ITEM file from inf
    return 0;                        

}

*/




#include <fstream>
#include <iostream>
using namespace std;
 
int main () 
{
   char data[100];

                                      // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);
                                               // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
                                           // again write inputted data into the file.
   outfile << data << endl;

                                            // close the opened file.
   outfile.close();

                                    // open a file in read mode.
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 
                                     // write the data at the screen.
   cout << data << endl;
   
                              // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

                                         // close the opened file.
   infile.close();

   return 0;
}


