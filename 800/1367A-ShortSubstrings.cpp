#include <iostream>
#include <string>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    string read;
    char last;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> read;
        last = read[0];
        for (size_t j = 1; j < read.length()-1; j++)
        {
            if (read[j] == last)
            {
                read.erase(read.begin() + j);
            }
            last = read[j];
        }
        cout << read << endl;
    }
    return 0;
}