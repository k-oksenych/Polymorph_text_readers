#pragma once
#include "TextReader.h"

class DecimalTextReader : public TextReader
{
public:
	virtual void Print(char* path) override;
};

void DecimalTextReader::Print(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		char c;

		while (!file.eof())
		{
			file >> c;
			printf("%d ", c);
			//printf("%x ", c);
		}
		cout << endl << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}