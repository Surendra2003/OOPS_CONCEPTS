
#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
       } catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}





/*


throw − A program throws an exception when a problem shows up. 
             This is done using a throw keyword.

catch − A program catches an exception with an exception handler at the place in a program 
  where you want to handle the problem. The catch keyword indicates the catching of an exception.

try − A try block identifies a block of code for which particular exceptions will be activated. 
            It's followed by one or more catch blocks.

            try {        /// try 
// protected code
} catch( ExceptionName e1 ) {
// catch block
} catch( ExceptionName e2 ) {
// catch block
} catch( ExceptionName eN ) {
// catch block
}



////throwing
double division(int a, int b) {
if( b == 0 ) {
throw "Division by zero condition!";
}
return (a/b);
}double division(int a, int b) {
if( b == 0 ) {
throw "Division by zero condition!";
}
return (a/b);
}



////catching
    try {
// protected code
} catch( ExceptionName e ) {
// code to handle ExceptionName exception
}



The following is an example, which throws a division by zero exception
               and we catch it in catch block.

 

*/


/*

#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
     try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}


// Because we are raising an exception of type const char*,
 //so while catching this exception, we have to use const char* in catch block.
 //If we compile and run above code, this would produce the following result −

 */