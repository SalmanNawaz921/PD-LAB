#include <iostream>

using namespace std;

void volumeOfPyramid(float length, float width, float height, string units);

int main()
{

    int length, width, height;

    string units;

    cout << "ENTER LENGTH OF PYRAMID: ";
    cin >> length;

    cout << "ENTER WIDTH OF PYRAMID: ";
    cin >> width;

    cout << "ENTER HEIGHT OF PYRAMID: ";
    cin >> height;

    cout << "ENTER UNITS (meters, centimeters , kilometers , millimeters): ";
    cin >> units;

     volumeOfPyramid(length, width, height, units);

    return 0;
}

void volumeOfPyramid(float length, float width, float height, string units)
{

    float calVolume = ((length * width * height) / 3);

    float inCM = calVolume * 1000000;
    float inKM = calVolume / 1000000000;
    float inMM = calVolume * 1000000000;

    if (units == "meters")
    {

        cout << "Volume Of Pyramid In Meters Is: " << calVolume << " cubic meters";
    }

    if (units == "centimeters")
    {

        cout << "Volume Of Pyramid In CentiMeters Is: " << inCM << " cubic centimetrs";
    }

    if (units == "kilometers")
    {

        cout << "Volume Of Pyramid In KiloMeters Is: " << inKM << " cubic kilometers";
    }

    if (units == "millimeters")
    {

        cout << "Volume Of Pyramid In MilliMeters Is: " << inMM << " cubic millimeters";
    }
}
