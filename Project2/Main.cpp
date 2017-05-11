#include <iostream>
#include <string>
#include "school.cpp"
using namespace std;




int main()
{
	School seneca;
	seneca.setName("Seneca");
	seneca.printSchoolName();
	cout << endl;
	cout << seneca.getName() << endl;
	system("pause");
	return 0;
}