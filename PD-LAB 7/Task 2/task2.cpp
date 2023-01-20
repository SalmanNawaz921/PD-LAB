#include <iostream>

using namespace std;

main()
{

    int number;

    cout << "ENTER HOW MANY TIMES YOU WANT TO PRINT ASTERINK: ";
    cin >> number;
    // number = -1 * number;

    for (int i = number; i >= 1; i = i - 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}