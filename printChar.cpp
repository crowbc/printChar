/*
This program prints characters, and the decimal and hexadecimal ASCII values for the characters.
*/
/*
Author: Brian Crow
Created on: 24MAY2019
Modified on: 24MAY2019
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int num;
	char ch;

	for ( num = 32; num <= 126; num++ )
	{
		ch=num;
		cout << "The character '" << ch;
		cout << "' is represented by the decimal number " << dec << num;
		cout << " or the hexadecimal number " << hex << num << ".\n";
	}

	return 0;
}
