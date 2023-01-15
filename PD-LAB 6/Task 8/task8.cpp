#include <iostream>

using namespace std;

string xyPlane(int height, int x, int y);

main()
{

    int height;
    int x;
    int y;

    cout << "ENTER THE HEIGHT: ";
    cin >> height;
    cout << "ENTER THE X-COORDINATE: ";
    cin >> x;
    cout << "ENTER THE Y-COORDINATE: ";
    cin >> y;

    string plane = xyPlane(height, x, y);
    cout << plane;
}

string xyPlane(int height, int x, int y)
{
    string result;

    if ((x > 0 && x < 3 * height) && (y > 0 && y < height))
    {
        result = "INSIDE";
    }
    else if ((x > height && x < 2 * height) && (y >= height && y < 4 * height))
    {
        result = "INSIDE";
    }
    else if ((x >= height || x == 3 * height) && (y <= height || y == 3 * height))
    {
        result = "BORDER";
    }
    else
    {
        result = "OUTSIDE";
    }
    return result;
}