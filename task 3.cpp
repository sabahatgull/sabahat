#include <iostream>
using namespace std;
int main()
{
    int min, max, i, flag;
    min=3;
    max=100;
     cout << "Prime numbers between " << min << " and " << max << " are: ";
    while (min < max)
    {
        flag = 0;
        for(i = 2; i <= min/2; i++)
        {
            if(min % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << min << " ";
        min++;
    }}
