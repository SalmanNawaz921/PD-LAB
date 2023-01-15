#include <iostream>

using namespace std;

float charges(char customerType, char time, float noOfMins);

main()
{

    char customerType, time;
    float noOfMins;

    cout<<"ENTER CUSTOMER TYPE((r,R) OR (p,P)): ";
    cin>>customerType;
    cout<<"PRESS D or d for day time & N or n for night time : ";
    cin>>time;
    cout<<"ENTER NUMBER OF MINUTES: ";
    cin>>noOfMins;


    float totalMins = charges(customerType, time, noOfMins);

    cout << totalMins;

    return 0;
}

float charges(char customerType, char time, float noOfMins)
{

    float totalMins;

    if ((customerType == 'R' || customerType == 'r') && (time == 'd' || time == 'D' || time == 'n' || time == 'N'))
    {
        if (noOfMins <= 50)
        {
            cout << "TOTAL CHARGES ARE: ";
            totalMins = 10;
        }
        else
        {
            cout << "TOTAL CHARGES ARE: ";
            totalMins = (noOfMins + (noOfMins * 0.20));
        }
    }
    else if ((customerType == 'P' || customerType == 'p') && (time == 'd' || time == 'D'))
    {
        if (noOfMins <= 75)
        {
            cout << "TOTAL CHARGES ARE: ";
            totalMins = 25;
        }
        else
        {
            cout << "TOTAL CHARGES ARE: ";
            totalMins = (noOfMins + (noOfMins * 0.10));
        }
    }
    else if ((customerType == 'P' || customerType == 'p') && (time == 'n' || time == 'N'))
    {
        if (noOfMins <= 100)
        {
            cout << "TOTAL CHARGES ARE: ";
            totalMins = 25;
        }
        else
        {
            cout << "TOTAL CHARGES ARE: ";
            totalMins = (noOfMins + (noOfMins * 0.05));
        }
    }

    cout << " $ ";
    return totalMins;
}