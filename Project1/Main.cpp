#include <iostream>
using namespace std;

// function prototyping
void printFunction();

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

	if (x = 2){
		cout << "your enter number is 2" << endl;
	}else{
		cout << "your enter number is not 2" << endl;
	}

	printFunction();

	printNumber();

	printNumber(100);

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


