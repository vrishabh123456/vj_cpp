#include<iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int c2 = 1;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
    {
        cout << (c2%2==1)<< "\t";
        c2++;
    }
    cout << "\n";        
    }
}
 
