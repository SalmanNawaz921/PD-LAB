#include <iostream>

using namespace std;

main()
{
    int colorNumber;
    int product , add;

    cout << "HOW MANY COLORS YOU WANT TO ENTER: ";
    cin >> colorNumber;

    string color[colorNumber];

    for (int i = 0; i < colorNumber; i++)
    {
        cout << "ENTER COLOR NAME: ";
        cin >> color[i];
    }

    product = colorNumber * 2;
    add = (colorNumber-1)+product;

    cout<<"IT WILL TAKE "<<add<<" SECONDS TO COLOR "<<colorNumber<<" SQUARES";
}