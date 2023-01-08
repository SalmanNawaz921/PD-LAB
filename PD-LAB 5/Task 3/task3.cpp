#include <iostream>

using namespace std;

void calculateTax(char type, float price);

main()
{

    char type;
    float price;

    cout << "ENTER VEHICLE TYPE: ";
    cin >> type;

    cout << "ENTER PRICE OF VEHICLE: ";
    cin >> price;

    calculateTax(type, price);
}

void calculateTax(char type, float price)
{

    float mPrice = ((price * 6) / 100);
    float ePrice = ((price * 8) / 100);
    float sPrice = ((price * 10) / 100);
    float vPrice = ((price * 12) / 100);
    float tPrice = ((price * 15) / 100);

    if (type == 'M')
    {

        cout << "The Final Price Of Vehichle Type " << type << " After Adding The Tax Is: " << mPrice;
    }

    if (type == 'E')
    {

        cout << "The Final Price Of Vehichle Type " << type << " After Adding The Tax Is: "<<ePrice;
    }
    if (type == 'S')
    {

        cout << "The Final Price Of Vehichle Type " << type << " After Adding The Tax Is: "<<sPrice;
    }
    if (type == 'V')
    {

        cout << "The Final Price Of Vehichle Type " << type << " After Adding The Tax Is: "<<vPrice;
    }

    if (type == 'T')
    {

        cout << "The Final Price Of Vehichle Type " << type << " After Adding The Tax Is: "<<tPrice;
    }
}
