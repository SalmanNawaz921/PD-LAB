#include <iostream>

using namespace std;

float totalPrice(string month, int stays);

main()
{

    string month;
    int stays;

    cout << "ENTER MONTH IN CAPITAL LETTERS: ";
    cin >> month;

    cout << "ENTER NO OF STAYS PER NIGHT: ";
    cin >> stays;

    float tPrice = totalPrice(month, stays);

    cout << tPrice <<" $ ";

    return 0;
}

float totalPrice(string month, int stays)
{
    float studioPrice;
    float apartmentPrice;

    if ((month == "MAY" || month == "OCTOBER") && (stays > 7 && stays <14 ))
    {
        studioPrice = (50 - (50 * 0.05));
        studioPrice = studioPrice * stays;
        cout << "STUDIO : " << studioPrice <<" $ "<< endl;
        cout << "APARTMENT: ";
        apartmentPrice = (65 * stays);
    }
    else if ((month == "MAY" || month == "OCTOBER") && stays > 14)
    {
        studioPrice = (50 - (50 * 0.30));
        studioPrice = studioPrice * stays;
        cout << "STUDIO : " << studioPrice <<" $ "<< endl;
        cout << "APARTMENT: ";
        apartmentPrice = (65 - (65 * 0.1));
        apartmentPrice = apartmentPrice * stays;
    }
    else if ((month == "JUNE" || month == "SEPTEMBER") && stays > 14)
    {
        studioPrice = (76 - (76 * 0.02));
        studioPrice = studioPrice * stays;
        cout << "STUDIO : " << studioPrice <<" $ "<< endl;
        cout << "APARTMENT: ";
        apartmentPrice = (68.70 - (68.70 * 0.1));
        apartmentPrice = apartmentPrice * stays;
    }
    else if ((month == "AUGUST" || month == "JULY") && stays > 14)
    {
        studioPrice = (75.20 * stays);
        cout << "STUDIO : " << studioPrice <<" $ "<< endl;
        cout << "APARTMENT: ";
        apartmentPrice = ((65) - (65 * 0.1));
        apartmentPrice = apartmentPrice * stays;
    }

    else
    {
        return 0;
    }

    return apartmentPrice;
}