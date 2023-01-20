#include <iostream>

using namespace std;

void printUpperPart(int number);
void printLowerPart(int number);

main()
{

    int number;

    cout << "ENTER HOW MANY TIMES YOU WANT TO PRINT ASTERINK: ";
    cin >> number;

    printUpperPart(number);
    printLowerPart(number);

    return 0;
}

void printUpperPart(int number)
{
    number = number / 2;
    // int no = number - 1;
    for (int i = 1; i <= number; i++)
    {
        for (int no = 1; no <= number - i; no++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
void printLowerPart(int number)
{
    number = number / 2;
    for (int i = number; i >= 1; i = i - 1)
    {
        for (int no = 1; no <= number - i; no++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j = j + 1)
        {

            cout << "*";
        }
        cout << endl;
    }
}