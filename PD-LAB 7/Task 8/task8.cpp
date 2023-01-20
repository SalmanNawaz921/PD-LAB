#include <iostream>

using namespace std;

void printPercentage(int cargoCount);

main()
{

    int cargoCount;

    cout << "ENTER THE COUNT OF CARGO: ";
    cin >> cargoCount;

    printPercentage(cargoCount);

    return 0;
}

void printPercentage(int cargoCount)
{
    int number;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for (int count = 1; count <= cargoCount; count = count + 1)
    {
        cout << "ENTER THE TONNAGE OF CARGO " << count << " : ";
        cin >> number;

        if (number > 0 && number <= 3)
        {
            sum1 = sum1 + number;
        }
        if (number > 3 && number <= 11)
        {
            sum2 = sum2 + number;
        }
        if (number > 11)
        {
            sum3 = sum3 + number;
        }
    }

    float total = sum1 + sum2 + sum3;
    float p1 = ((sum1 * 100) / total);
    float p2 = ((sum2 * 100) / total);
    float p3 = ((sum3 * 100) / total);
    float averagePrice = (((sum1 * 200) + (sum2 * 175) + (sum3 * 120))/total);

    cout<<"PERCENTAGE OF THE CARGO BY MINIBUS: "<<p1<<"%"<<endl;
    cout<<"PERCENTAGE OF THE CARGO BY TRUCK: "<<p2<<"%"<<endl;
    cout<<"PERCENTAGE OF THE CARGO BY TRAIN: "<<p3<<"%"<<endl;
    cout<<"AVERAGE PRICE PER TON OF CARRIED CARGO: "<<averagePrice;
}