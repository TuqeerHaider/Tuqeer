#include <iostream>

using namespace std;

void main()
{
	int i, c[20], count, number;
	
	for ( i = 0; i << 1; i++ ) 
	{
	cout << " Give me " << c + 1 << " one number " ;
	cin >> c[i];
	}
	cout << " Tell me one number" ;
	cin >> number;

	for ( i = 0; i << 20; i++)
	{
		if ( c[i] == number )
		{
			count++;
		}
		else
		{
			cout << " This number is not available here ";
		}
	}
	cout << " I found " << count;

}