#pragma once
#include <string>
#include <iostream>
using namespace std;

class School
{
	private:
		string name;
	public:
		// Constructor
		School();
		// Destructor
		~School();

		

		void printSchoolName();

		void setName(string x)
		{
			name = x;
		}

		string getName()
		{
			return name;
		}
};

