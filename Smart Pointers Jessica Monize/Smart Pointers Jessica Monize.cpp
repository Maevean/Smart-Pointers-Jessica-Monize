// Smart Pointers Jessica Monize.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <memory>
using namespace std;

//creation of class myPointers
class myPointers {
public:
    //creating pointers text and pointers informational text
    myPointers() 
    {
        cout << "Making unique pointer" << endl;
        cout << " " << endl;
        cout << "Unique Pointer: A singular pointer that points to a memory location, used to call a single time before it self" << endl;
        cout << "destructs. Cannot be changed with other pointers." << endl;
        cout << " " << endl;
        cout << "Shared Pointer: A set of multiple pointers that point to the same memory location. Each new shared pointer" << endl;
        cout << "increases the reference count. Deletes itself when there are no more pointers pointing to this location in the scope." << endl;
        cout << " " << endl;
        cout << "Weak Pointer: A week pointer will only read the pointer at the directed location, but will not increase" << endl;
        cout << "the reference count." << endl;
        cout << " " << endl;
    }//end of creating pointers text and pointers informational text

    //destroying pointers text
    ~myPointers()
    {
        cout << "Destroying Pointer" << endl;
    }//end of destroying pointers text
};//end of class myPointers


int main() 
{
    //start of pointers code to demonstrate the unique pointer
    {
        //invoking unique pointer, to be called for a single time before it self destructs. Cannot be changed.
        unique_ptr<myPointers>pointer1 = make_unique<myPointers>();

    }//end of pointers code

}//end of int main
