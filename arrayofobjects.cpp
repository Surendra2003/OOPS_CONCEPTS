// C++ program to implement
// array of objects

#include<iostream>

using namespace std;
 
class Employee
{
  int id;
  int salary;
  char name[30];
  public:
   
  // Declaration of function
  void getdata();
    // Declaration of function
  void putdata();
};
 
// Defining the function outside
// the class
void Employee::getdata()
{
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
  cout << "Enter salary : ";
  cin >> salary;
}
// Defining the function outside
// the class
void Employee::putdata()
{
  cout << id << " ";
  
  cout << name << " ";

  cout << salary<<" ";
  cout << endl;
}
 
// Driver code
int main()
{
  // This is an array of objects having
  // maximum limit of 50 Employees
  Employee emp[50];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
    // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].getdata();
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].putdata();
}