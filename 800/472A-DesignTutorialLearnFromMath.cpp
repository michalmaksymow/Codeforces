#include <iostream>

using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
  
    for (size_t i = 2; i < n; i++) 
        if (n % i == 0)
            return false; 

    return true; 
} 

int main()
{
    int n;
    cin >> n;

    if (n%2 == 0 && !isPrime(n/2))
        cout << n/2 << ' ' << n/2 << endl;
    else
    {
        for (size_t i = 2; i < n/2 + 1; i++)
        {
            if (!isPrime(i) && !isPrime(n-i))
            {
                cout << i << ' ' << n-i << endl;
                break;
            }
        }
    }
    return 0;
}