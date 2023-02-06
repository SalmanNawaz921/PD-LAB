#include <iostream>

using namespace std;

main()
{

    int number;
    cout << "HOW MANY NUMBERS YOU WANT TO ENTER: ";
    cin >> number;

    int numbers[number];
    ;
    bool flag = false;

    int remainder = 1;

    for (int i = 0; i < number; i++)
    {
        cout << "ENTER NUMBER AT INDEX " << i << " :";
        cin >> numbers[i];

        if (numbers[i] == 7 || numbers[i] % 10 == 7 || numbers[i] / 10 == 7)
        {
            flag = true;
        }
        }

    if (flag == true)
    {
        cout << "BOOM!!!";
    }
    else
    {
        cout << "THERE IS NO 7 IN THE ARRAY";
    }
}