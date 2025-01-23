#include <iostream>
#include <string>

using namespace std;

void main()
{
	char Vowel[5] = {'A','E','I','O','U'};
	string pea = "PEA";
	int Word;

	cout << " Tell me a word";
	cin >> Word;

	for (int i = 0; i < Word; i++)
	{
		if (Vowel == Word)
			Vowel += Word;
	}
	
	 cout << " P's Language: " << Word << endl;
	
	
}