#include "School.h"



// Constructor
School::School()
{
	cout << " this is no parameter Constructor in C++" << endl;
}

// Destructor
School::~School()
{
	cout << " this is Destructor in C++" << endl;
}

School::printSchoolName()
{
	cout << name << endl;
}
