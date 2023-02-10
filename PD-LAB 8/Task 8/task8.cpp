#include <iostream>
#include <cmath>
#include <string>

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

    string input;
    cout << "ENTER YOUR PIN: ";
    cin >> input;

    int no;

    int mode[4];

    int i = 0;
    bool isNumber = true;
    for (int i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]))
        {
            isNumber = false;
            break;
        }
    }

    if (!isNumber)
    {
        cout << "INVALID INPUT" << endl;
        return 0;
    }

    int number = stoi(input);

    while (i < 4)
    {
        mode[i] = number % 10;
        number = number / 10;
        i++;
    }

    int f = 0;

    for (int j = 3; j >= 0; j--)
    {

        if (mode[j] == 9 && (f == 1 || f == 2 || f == 3))
        {
            cout << moves[f - 1] << ",";
            f++;
        }

        else if (mode[j] <= 9 && (f == 0 || f == 1 || f == 2 || f == 3))
        {
            cout << moves[mode[j] + f] << ",";
            f++;
        }
    }
}