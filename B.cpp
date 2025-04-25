#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 3; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 6; j++)
        {
            if (j == 1 || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 1 && j == 4) || (i == 1 && j == 5) || (i == 2 && j == 6) || (i == 3 && j == 2) || (i == 3 && j == 3) || (i == 3 && j == 4) || (i == 3 && j == 5) || (i == 4 && j == 6) || (i == 5 && j == 2) || (i == 5 && j == 3) || (i == 5 && j == 4) || (i == 5 && j == 5))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}