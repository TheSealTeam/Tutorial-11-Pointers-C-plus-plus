//Tutorial 11 - Pointers in C++
//Synced with github
/*In this program we use pointers to change values of variables*/
/*The pointer p points to the variable n, hence they share the same space and when you change what*/
/*p points to with *p n will change and the same thing happens when you change n*/
#include <iostream>
using namespace std;

int main()
{
	//a pointer p, pointers holds addresses as variables holds values. 
	int *p; 
	int n = 0; 
	int b = 10;

	p = &b; //point the pointer p to b. 
	cout << p << endl; //prints the address of p
	p = &n; 
	cout << p << endl; 
	cout << *p << endl; //prints the value p points to

	/*Change the value of what p is pointing to*/
	*p = 1;
	cout << *p << endl; //prints the value p points to

	/*This also changes the value of n*/
	cout << n << endl; 
    
	/*Changing the value of n will also change the value of *p */
	n = 2;
	cout << *p << endl; //prints the value p points to

	//add 10 to the value p points to. 
	*p = *p + 10;
	cout << *p << endl; 

	//incriment the value, the brackets are important. 
	(*p)++;
	cout << *p << endl;

	//incriment the value without brackets
	*p += 1;
	cout << *p << endl;

	system("pause");
	return 0;
}