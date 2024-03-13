// program to find the sum of natural numbers

#include <iostream>
using namespace std;
int main() 
{
    int n, i, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(i=1; i<=n; i++) 
        {
            sum += i;
        }
    cout << sum;
    return 0;
}