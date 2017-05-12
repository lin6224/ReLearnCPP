#include <iostream>
using namespace std;

// function prototyping
void printFunction();

// function overloading
void printNumber();
void printNumber(int);


int main()
{
	// if use the namspace std, can save to write down complete name
	std::cout << "Hello World !" << std::endl;
	// \n is c changle new line way and same like c++ endl in the stand namespace
	std::cout << "\n";

	int x = 1 * 3;
	cout << x << endl <<endl;
	
	// cin to read user type in the console.
	cout << "Enter a number : ";
	cin >> x;
	cout << x << endl << endl;

	// use the switch can instant the if else
	if (x = 2){
		cout << "your enter number is 2" << endl;
	}else{
		cout << "your enter number is not 2" << endl;
	}

	printFunction();

	printNumber();

	printNumber(100);

	int y = 0;
	// do while, for  to loop
	while ( y < 10 )
	{
		cout << y << endl;
		y++;
	}


	// basic pointer information
	int z = 5;
	// *p will get the z memory address
	int *p = &z;

	// print out the z memory address
	cout << &z << endl;
	// print out the p memory address
	cout << p << endl;
	//print out the value in the memory address
	cout << *p << endl;


	system("pause");
	return 0;
}


void printNumber()
{
	cout << " not a number to print " << endl;
}


void printNumber( int x )
{
	cout << x << endl;
}


void printFunction()
{
	cout << "it is from printFunction ()" << endl;
}


