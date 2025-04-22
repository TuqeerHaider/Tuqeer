#include <iostream>
using namespace std;
int main() 

{
	int R, N;
	cin >> R;
	cin >> N;
	int i;
	for (i = 0; i < 100; i++)
	{
		if ((2 * R) == N)
		{
			cout << i;
			break;
		}
		R = R + 1;
		N = N + 1;
	}
	return 0;
}