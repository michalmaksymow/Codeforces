#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui friends, bottles, milliliters, limes, slices, salt, nl, np;

    cin >> friends >> bottles >> milliliters >> limes >> slices >> salt >> nl >> np;

    ui toastsMilli = bottles*milliliters/(friends*nl);
    ui toastsLimes = limes*slices/friends;
    ui toastsSalt = salt/(friends*np);

    cout << min({toastsLimes, toastsMilli, toastsSalt}) << endl;

    return 0;
}