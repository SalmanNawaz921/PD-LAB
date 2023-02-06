#include <iostream>
#include <cmath >

using namespace std;

main()
{

    string moves[10] = {"Shimmy",
                        "Shake",
                        "Pirouette",
                        "Slide",
                        "Box Step",
                        "Head Spin",
                        "Dosado",
                        "Pop",
                        "Lock",
                        "Arabesque"};

    int number;
    cout << "ENTER YOUR PIN: ";
    cin >> number;

    int no;

    int mode[4];

    int i = 0;
    while (i < 4)
    {
        mode[i] = number % 10;
        number = number / 10;
        i++;
    }

    int f = 0;
    bool invalid = false;

    for (int j = 3; j >= 0; j--)
    {

        if (mode[j] == 9 && (f == 1 || f == 2 || f == 3))
        {
            cout << moves[f - 1] << ",";
            f++;
        }

        else if (mode[j] != 9 && mode[i] < 10 && mode[i] >= 0 && (f == 1 || f == 2 || f == 3))
        {
            cout << moves[mode[j] + f] << ",";
            f++;
        }
        else if (mode[j] <= 9 && mode[j] >= 0 && f == 0)
        {
            cout << moves[mode[j] + f] << ",";
            f++;
        }
        else if (mode[j] != 0 && mode[j] != 1 && mode[j] != 2 && mode[j] != 3 && mode[j] != 4 && mode[j] != 5 && mode[j] != 6 && mode[j] != 7 && mode[j] != 8 && mode[j] != 9)
        {
            invalid = true;
            break;
        }
    }
    if (invalid == true)
    {
        cout << "INVALID INPUT";
    }
}