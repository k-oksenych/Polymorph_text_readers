#include <iostream>
#include <fstream>

#include "TextReader.h"
#include "DecimalTextReader.h"
#include "HexadecimalTextReader.h"
#include "BinaryTextReader.h"

using namespace std;

int main()
{
	char path[30];

	cout << "Enter file path: ";
	cin >> path;

	while (true)
	{
		int option;
		cout << "Choose display mode: " << endl;
		cout << "1. text" << endl << "2. decimal" << endl << "3. hexadecimal" << endl << "4. binary" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
		{TextReader text;
		text.Print(path); }
			break;
		case 2:
		{DecimalTextReader text2;
		text2.Print(path); }
			break;
		case 3:
		{HexadecimalTextReader text3;
		text3.Print(path); }
			break;
		case 4:
		{BinaryTextReader text4;
		text4.Print(path); }
			break;
		default:
			cout << "Error" << endl;
		}
	}
}