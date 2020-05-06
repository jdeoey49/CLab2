// main.cpp
#include <iostream> 
#include "complex.h"
using namespace std;

int Complex::count_ = 0;

// friend function
int returnCount(void)
{
	return Complex::count_;
}

int main()
{
   Complex a( 1, 7 ), b( 9, 2 ), c; // create three Complex objects 

   cout << endl;
   cout << a.toString(); // output object a
   cout << " + ";
   cout << b.toString(); // output object b
   cout << " = ";
   cout << a.add(b).toString() << endl;

   cout << '\n';
   a.setComplexNumber( 10, 1 ); // reset realPart and 
   b.setComplexNumber( 11, 5 ); // and imaginaryPart  
   cout << a.toString(); // output object a
   cout << " - ";
   cout << b.toString(); // output object b
   cout << " = ";  
   cout << a.subtract(b).toString() << endl;

  // cout << "\n\nthere were " << returnCount() << " Complex objects in existence" << endl;

   
   cout << "\nCreating object using assignment operator " << endl;
   Complex d = b;
   /*
   cout << "a.toString()=" << a.toString() << endl;
   cout << "b.toString()=" << b.toString() << endl;
   cout << "c.toString()=" << c.toString() << endl;
   cout << "d.toString()=" << d.toString() << endl;
   */
   cout << "\n\nthere were " << returnCount() << " Complex objects in existence" << endl;
   
   cout << "\n\nWorking with dynamically allocated objects: "<<endl;
   
   Complex* a_ptr = new Complex(1,7);
   Complex* b_ptr = new Complex(9,2);
   cout << "\n\nthere were " << returnCount() << " Complex objects in existence" << endl;

   cout << endl;
   cout << (*a_ptr).toString(); // output object a
   cout << " + ";
   cout << b_ptr->toString(); // output object b
   cout << " = ";
   cout << (*a_ptr).add(*b_ptr).toString() << endl;
   delete a_ptr;
   delete b_ptr;
   
   return 0;
} // end main


