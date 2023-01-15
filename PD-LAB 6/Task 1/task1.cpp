#include <iostream>

using namespace std;

string condition(string temperature, string humidity);

main()
{

    string temperature, humidity;

    cout << "ENTER THE TEMPERATURE: ";
    cin >> temperature;

    cout << "ENTER THE HUMIDITY: ";
    cin >> humidity;

    string thing = condition(temperature, humidity);
    cout << thing;

}

string condition(string temperature, string humidity)
{
    string thing;
    if (temperature == "warm" && humidity == "dry")
    {
        thing = "PLAY TENNIS";
    }
    else if (temperature == "warm" && humidity == "humid")
    {
        thing = "DO SWIMMING";
    }
    else if (temperature == "cold" && humidity == "dry")
    {
        thing = "PLAY BASKETBALL";
    }
    else if (temperature == "cold" && humidity == "humid")
    {
        thing = "WATCH TV";
    }

    else
    {
        thing = "INVALID INPUT";
    }

    return thing;
}