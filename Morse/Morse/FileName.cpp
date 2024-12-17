#include <iostream>

using namespace std;

void main ()
{
	int i,  j, answer, answer1, Alphabet1;
	char		Alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' },
				Morse[26] = { '._', '_...', '_._.', '_..', '.', '.._.', '__.', '....', '..', '.___', '_._', '._..', '__', '_.', '___', '.__.', '__._', '._.', '...', '_', '.._', '..._', '.__', '_.._', '_.__', '__..' };
	
	for (i = 0; i < 5; i++)
	{
		cout << " Do you want to proceed with Morse(1) or Alphabet(2)";
		cin >> answer;
	}
	
		if (answer == 1)

	{

	cout << " \n Tell me the Morse \n ";
	cin >> Morse;
	cout << " \n Tell me a Alphabet \n ";
	cin >> Alphabet1;
		if (Morse[j] == Alphabet[i])
		{
			if (i + Number > 25)
			{
				cout << alphabet[24 - i + Number];
			}
			else
			{
				cout << alphabet[i + Number];
			}
		}
}