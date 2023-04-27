// Evan Wall
// CIS 1202
// 4/27/2023

#include <iostream>
#include <cctype>

using namespace std;

char character(char start, int offset)
{
	string invalidCharacterException = "Starting Character Invalid.";
	int invalidRangeException = 5;
	char target = NULL;
	if (isalpha(start))
	{
		target = start + offset;
		cout << target;
	}
	else
		throw invalidCharacterException;
	if (isalpha(target))
	{
		cout << "this worked again";
		return target;
	}
	else
		throw "Offset Character Invalid.";
}

int main()
{
	char driver = 'a', holdr;
	int offDriver = '1';
	try
	{
		holdr = character(driver, offDriver);
		cout << holdr;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (int invalidRangeException)
	{
		cout << "Invalid Range.";
	}
	return 0;
}