#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TextReader
{
public:
	virtual void Print(char* path);
};

void TextReader::Print(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		char buff[50];

		while (!file.eof())
		{
			file.getline(buff, 50);
			cout << buff << endl;
		}
		cout << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}