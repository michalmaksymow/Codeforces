#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

bool isPrime(ui number) 
{
    ui limit = min(number/2u, 50000u);
    for (size_t i = 2; i<=number/2; i++) 
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ui cases;
    cin >> cases;
    ui n;
    bool turn{}; // Ashinshgup=0
    for (size_t i = 0; i < cases; i++)
    {
        cin >> n;
        // Check cases when n=1 or n=2
        if (n==1)
            cout << "FastestFinger" << endl;
        else if (n==2)
            cout << "Ashishgup" << endl;
        else if (n%2!=0)
            cout << "Ashishgup" << endl;
        else
        {
            double l = log2(n);
            if (l == floor(l))
                cout << "FastestFinger" << endl;
            else
            {
                if (n%4 == 0)
                    cout << "Ashishgup" << endl;
                else
                {
                    if (isPrime(n/2))
                        cout << "FastestFinger" << endl;
                    else
                        cout << "Ashishgup" << endl;
                }
            }
        }
    }
    return 0;
}