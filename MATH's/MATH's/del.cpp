#include <iostream>
using namespace std;

int main()
{
    int numbers[10], sum = 0, i, answer;
    {
        // To Find Smallest Number
        int s[10];
        {
            int result = s[0], i;
            for (i = 0; i < 10; i++)
            {
                if (result > s[i])
                {
                    result = s[i];
                }
            }
            return result;
        }
        
        //To Find Largest Number
        int s[10];
        {
            int result = s[0], i;
            for (i = 0; i < 10; i++)
            {
                if (result < s[i])
                {
                    result = s[i];
                }
            }
            return result;
        }

        //To Find Average Number
        int s[10];
        {
            int result = s[0], i;
            for (i = 0; i < 10; i++)
            {
                result = result + s[i];
            }
            return result;
        }

        cout << "\n Tell me " << i + 1 << " 10 number \n";
        cin >> numbers[i];
        cout << "\n Press 1 to calculate the average of the numbers \n Press 2 to find the smallest number \n Press 3 to find the biggest number \n Press 0 to exit ";
        cin >> answer;
    }
    if (answer == 1)
    {
     
    }
    if (answer == 2)
    {

    }
    if (answer == 3)
    {

    }
    return 0;
}
