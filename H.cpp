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
        for (int j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 1 || j == 5)
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