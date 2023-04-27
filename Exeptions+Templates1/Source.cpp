// Evan Wall
// CIS 1202
// 4/27/2023

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

char character(char start, int offset)
{
	int invalidCharacterException = NULL, invalidRangeException = NULL;
	char target;
	if (isalpha(start))
	{
		target = start + offset;
	}
	else
		throw invalidCharacterException;
	if (isalpha(target))
	{
		return target;
	}
	else
		throw invalidRangeException;
}

int main()
{
	char driver = 'd', holdr;
	int offDriver = '2';
	try
	{
		holdr = character(driver, offDriver);
		cout << holdr;
	}
	catch (int invalidCharacterException)
	{
		cout << "Whoops, That isn't correct."
	}
}