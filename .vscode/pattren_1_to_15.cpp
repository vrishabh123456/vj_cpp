#include<iostream>

using namespace std;

int main()
{
    int i;
    int j,a=1;

    for (i = 1; i <=5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << "\t";
            a++;
        }
        cout << "\n"; 
    }
}