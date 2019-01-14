#pragma once

#include <cstdlib>

#include "TextReader.h"

class BinaryTextReader : public TextReader
{
public:
	virtual void Print(char* path) override;
};

void BinaryTextReader::Print(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		char c;

		while (!file.eof())
		{
			file >> c;
			char buff[33];
			_itoa_s((int)c, buff, 2);
			printf("%s ", buff);
		}
		cout << endl << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}