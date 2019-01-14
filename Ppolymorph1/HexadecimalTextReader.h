#pragma once

#include "TextReader.h"

class HexadecimalTextReader : public TextReader
{
public:
	virtual void Print(char* path) override;
};

void HexadecimalTextReader::Print(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		char c;

		while (!file.eof())
		{
			file >> c;
			printf("%x ", c);
		}
		cout << endl << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}