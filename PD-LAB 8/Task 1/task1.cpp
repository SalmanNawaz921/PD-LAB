#include <iostream>

using namespace std;

main()
{

    int quantity;
    string fruitName;

    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};

    cout << "ENTER THE FRUIT NAME IN SMALL LETTERS:";
    getline(cin, fruitName);
    cout << "ENTER THE QUANTITY:";
    cin >> quantity;

    int fruitPrice;
    bool flag = false;

    for (int i = 0; i < 4; i++)
    {
        if (fruitName == fruits[i])
        {
            fruitPrice = 12 * quantity * price[i];
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        cout << "PRICE OF " << fruitName << " IS " << fruitPrice;
    }
    else
    {
        cout << "FRUIT IS UNAVAILABLE";
    }
}