#include <iostream>
#include <time.h>
#include <string>
#include <random>

using namespace std;

void main()
{
    srand(time(0));
    std::string  A[5] = { "Micheal", "Ricar", "Long", "Short", "Note" },
        B[5] = { "Vale", "Vales", "Santarem", "Cartaxo", "Azambuja"};
    
    cout << A[rand() % 5];
    cout << B[rand() % 5];
    


}