#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;

    ui len, read;
    vector<ui> arr;
    bool status;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> len;
        for (size_t j = 0; j < len; j++)
        {
            cin >> read;
            arr.push_back(read);
        }
        sort(arr.begin(), arr.end());

        status = true;
        for (size_t j = 1; j < len; j++) 
        {
			if(arr[j] - arr[j - 1] > 1)
            {
                status = 0;
                break;
            }
		}
        
        if (status)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        arr.clear();
    }
    return 0;
}