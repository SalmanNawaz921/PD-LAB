#include <iostream>

using namespace std;

void printPercentages(int number);

main()
{

    int number;

    cout << "ENTER NUMBER: ";
    cin >> number;

    printPercentages(number);

    return 0;
}

void printPercentages(int number)
{
    int p1Count = 0, p2Count = 0, p3Count = 0;

    int no = 0;
    for (int count = 1; count <= number; count = count + 1)
    {
        cout << "ENTER NUMBER " << count << " : ";
        cin >> no;

        if (no % 2 == 0)
        {
            p1Count++;
        }
        if (no % 3 == 0)
        {
            p2Count++;
        }
        if (no % 4 == 0)
        {
            p3Count++;
        }
    }

    float p1 = ((p1Count * 100) /number);
    float p2 = ((p2Count * 100) /number);
    float p3 = ((p3Count * 100) /number);

    cout<<"PERCENTAGE OF NUMBERS EXACTLY DIVISIBLE BY 2: "<<p1<<"%"<<endl;
    cout<<"PERCENTAGE OF NUMBERS EXACTLY DIVISIBLE BY 3: "<<p2<<"%"<<endl;
    cout<<"PERCENTAGE OF NUMBERS EXACTLY DIVISIBLE BY 4: "<<p3<<"%";
}