#include <iostream>
using namespace std;

int main() {
	int i, x, y, z, Answer, Answer1;
		
	cout << "Tell me the age of Rui?";
		cin >> Answer;
		cout << "Tell me the age of Rui's Mother?";
		cin >> Answer1;
		{	// For Rui
			x = Answer1 / 2;
			y = x - Answer;
		}
		{	// For his mother
			z= y + Answer1;
		}
		cout << "After " << y << " years Rui will be half of her mother age""\n";
		cout << "At that time Rui's mother will be " << z << " years old";
}