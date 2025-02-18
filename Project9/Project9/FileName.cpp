#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float valor, Moedas[8] = { 2,1,0.5,0.2,0.1,0.05,0.02,0.01 }, Coins[8], change, paidamount = 0;
	cin >> valor;
	cin >> Coins[0];
	cin >> Coins[1];
	cin >> Coins[2];
	cin >> Coins[3];
	cin >> Coins[4];
	cin >> Coins[5];
	cin >> Coins[6];
	cin >> Coins[7];
	for (i = 0; i < 8; i++)
	{
		paidamount += Coins[i] * Moedas[i];
	}
	change = paidamount - valor;
	if (change < 0)
	{
		cout << "Purchase cancelled, you don't have enough money, stupid";
	}
	else if (change == 0)
	{
		cout << "Purchase Completed";
	}
	else
	{
		for (i = 0; i < 8; i++)
		{
			int nCoins = change / Moedas[i];
			if (nCoins > 0)
			{
				cout << nCoins << " Coin of " << Moedas[i] << "\n";
				change -= nCoins * Moedas[i];
			}
		}
	}

}