#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter string\n";
	getline(cin , UserString);
	return UserString;
}

char InvertLetterCase(char & UserChar)
{
	return islower(UserChar) ? toupper(UserChar) : tolower(UserChar);
}

string InveretStringCase(string & UserString)
{
	
	for (short i = 0 ; i < UserString.length(); i++)
	{
		UserString[i] = InvertLetterCase(UserString[i]);
	}
	return UserString;
}

int main()
{

	string UserString = ReadString();

	cout << "\nInverted String\n";
	UserString = InveretStringCase(UserString);

	cout << UserString << "\n";

	return 0;
}
