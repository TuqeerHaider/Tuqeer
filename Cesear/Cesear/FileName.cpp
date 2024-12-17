#include <iostream>

using namespace std;

void main()
{
	int i, j, Number, Size;
	char Phrase[100], alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	{
		cout << " \n Tell me a number \n ";
		cin >> Number;
		cout << " \n Tell me a size \n ";
		cin >> Size;
		cout << " \n Tell me the phrase \n ";
		for (i = 0; i < Size; i++)
		{
		cin >> Phrase[i];
		}
		for (j = 0; j < Size; j++)
		{
			for (i = 0; i < 26; i++)
			{
				if (Phrase[j] == alphabet[i])
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
		}
	
	}
}