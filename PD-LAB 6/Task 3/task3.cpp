#include <iostream>

using namespace std;

string zodiacSign(int day, string month);

main()
{

    int day;
    string month;

    cout << "ENTER THE MONTH: ";
    cin >> month;

    cout << "ENTER THE DAY: ";
    cin >> day;

    string sign = zodiacSign(day, month);
    cout <<"YOUR ZODIAC SIGN IS "<<sign;

    return 0;
}

string zodiacSign(int day, string month)
{
    string sign;
    if ((day >= 21 && month == "MARCH") || (day <= 19 && month == "APRIL"))
    {
        sign = "ARIES";
    }
    else if ((day >= 20 && month == "APRIL") || (day <= 20 && month == "MAY"))
    {
        sign = "TAURUS";
    }
    else if ((day >= 21 && month == "MAY") || (day <= 19 && month == "JUNE"))
    {
        sign = "GEMINI";
    }
    else if ((day >= 21 && month == "JUNE") || (day <= 22 && month == "JULY"))
    {
        sign = "CANCER";
    }
    else if ((day >= 23 && month == "JULY") || (day <= 22 && month == "AUGUST"))
    {
        sign = "LEO";
    }
    else if ((day >= 23 && month == "AUGUST") || (day <= 22 && month == "SEPTEMBER"))
    {
        sign = "VIRGO";
    }
    else if ((day >= 23 && month == "SEPTEMBER") || (day <= 22 && month == "OCTOBER"))
    {
        sign = "LIBRA";
    }
    else if ((day >= 23 && month == "OCTOBER") || (day <= 21 && month == "NOVEMBER"))
    {
        sign = "SCORPIO";
    }
    else if ((day >= 22 && month == "NOVEMBER") || (day <= 21 && month == "DECEMBER"))
    {
        sign = "SAGITTARIUS";
    }
    else if ((day >= 22 && month == "DECEMBER") || (day <= 19 && month == "JANAUARY"))
    {
        sign = "CAPRICORN";
    }
    else if ((day >= 20 && month == "JANUARY") || (day <= 18 && month == "FEBRUARY"))
    {
        sign = "AQUARUIS";
    }
    else if ((day >= 19 && month == "FEBRURARY") || (day <= 20 && month == "MARCH"))
    {
        sign = "PISCES";
    }
    else{
        sign="INAVLID!";
    }

    return sign;
}