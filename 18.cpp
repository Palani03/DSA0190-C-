// sum of odd number upto N

#include <iostream>
using namespace std;
int main() 
{
    int n, i, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(i=1; i<=n; i++) 
    {
        if(i % 2 != 0) 
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}