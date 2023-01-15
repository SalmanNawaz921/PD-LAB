#include <iostream>

using namespace std;

float totalPrice(string fruitName, string day, float quantity);

main()
{

    string fruitName;
    string day;
    float quantity;

    cout << "ENTER FRUIT NAME IN CAPITAL LETTERS: ";
    cin >> fruitName;

    cout << "ENTER DAY IN CAPITAL LETTERS: ";
    cin >> day;

    cout << "ENTER QUANTTY IN INTEGERS: ";
    cin >> quantity;

    float tPrice = totalPrice(fruitName, day, quantity);
    cout << tPrice;

    return 0;
}

float totalPrice(string fruitName, string day, float quantity)
{
    float price;

    if (fruitName == "BANANA" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 2.50 * quantity;
    }
    else if (fruitName == "BANANA" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 2.70 * quantity;
    }
    else if (fruitName == "APPLE" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 1.20 * quantity;
    }
    else if (fruitName == "APPLE" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 1.25 * quantity;
    }
    else if (fruitName == "ORANGE" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 0.85 * quantity;
    }
    else if (fruitName == "ORANGE" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 0.90 * quantity;
    }
    else if (fruitName == "GRAPRUIT" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 1.45 * quantity;
    }
    else if (fruitName == "GRAPEFRUIT" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 1.60 * quantity;
    }
    else if (fruitName == "KIWI" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 2.70 * quantity;
    }
    else if (fruitName == "KIWI" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 3.00 * quantity;
    }
    else if (fruitName == "PINEAPPLE" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 5.50 * quantity;
    }
    else if (fruitName == "PINEAPPLE" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 5.60 * quantity;
    }
    else if (fruitName == "GRAPES" && (day == "MONDAY" || day == "TUESDAY" || day == "WEDNESDAY" || day == "THURSDAY" || day == "FRIDAY"))
    {
        cout << "PRICE IS: ";
        price = 3.85 * quantity;
    }
    else if (fruitName == "GRAPES" && (day == "SATURDAY" || day == "SUNDAY"))
    {
        cout << "PRICE IS: ";
        price = 4.20 * quantity;
    }
    else
    {
        price = quantity;
    }

    return price;
}