#include <iostream>
using namespace std;
int main()
{
	// if use the namspace std, can save to write down complete name
	std::cout << "Hello World !" << std::endl;
	// \n is c changle new line way and same like c++ endl in the stand namespace
	std::cout << "\n";

	int x = 1;
	cout << x << endl <<endl;
	
	// cin to read user type in the console.
	cout << "Enter a number : ";
	cin >> x;
	cout << x << endl << endl;


	system("pause");
	return 0;
}