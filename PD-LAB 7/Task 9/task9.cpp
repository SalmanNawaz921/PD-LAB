#include <iostream>

using namespace std;

void printShape(int number);

main()
{

    int number;

    cout << "ENTER NUMBER OF ROWS: ";
    cin >> number;

    printShape(number);

    return 0;
}

void printShape(int number)
{

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int no = 1; no <= number - i; no++)
        {

            cout << "  ";
        }
        for (int j = 1; j <= i; j = j + 1)
        {

            cout << "*";
        }
        cout << endl;
    }
}