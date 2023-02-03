#include <iostream>

using namespace std;

main()
{

    int digit;
    int transformation;

    cout << "HOW MANY NUMBERS YOU WANT TO ENTER: ";
    cin >> digit;

    cout << "HOW MANY TIMES YOU WANT TO PERFORM EVEN/ODD TRANSFORMATION: ";
    cin >> transformation;

    int number[digit];
    for (int i = 0; i < digit; i++)
    {
        cout << "ENTER NUMBER AT INDEX " << i << " : ";
        cin >> number[i];
        if (number[i] % 2 == 0)
        {
            for (int j = 0; j < transformation;j++)
            {
                number[i] = number[i] - 2;
            }
        }
        else
        {
             for (int j = 0; j < transformation;j++)
            {
                number[i] = number[i] + 2;
            }
        }
    }
    for ( int i=0 ; i<digit;i++){
                cout <<number[i] << ",";

    }
}