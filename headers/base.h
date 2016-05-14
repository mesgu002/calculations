#ifndef BASE_H
#define BASE_H

using namespace std;

class Base
{
	public:
		//Base Constructor
		Base() { };
		// Pure Virtual Function
		virtual double evaluate() = 0;
};

