#include <iostream>
#include <cmath>

using namespace std;

int time(int examHours, int examMinutes, int hours, int minutes);

main()
{

    int examHours, examMinutes, hours, minutes;

    cout << "ENTER EXAM STARTING HOURS: ";
    cin >> examHours;
    cout << "ENTER EXAM STARTING MINUTES: ";
    cin >> examMinutes;
    cout << "ENTER STUDENT HOUR OF ARRIVAL: ";
    cin >> hours;
    cout << "ENTER STUDENT MINUTES OF ARRIVAL: ";
    cin >> minutes;

    int timeOfArrival = time(examHours, examMinutes, hours, minutes);
    cout << timeOfArrival;
}

int time(int examHours, int examMinutes, int hours, int minutes)
{
    int timeafter24 = (24 - (hours - examHours));
    int timeInHour = examHours - hours;
    int timeInMinutes = examMinutes - minutes;
    int minTime = examMinutes + minutes;
    int timeafter60 = abs(abs((examMinutes + minutes)) - 60);
    int timeAfter60 = abs(abs((examMinutes - minutes)) - 60);

    int arrivalTime;


    if (examHours == hours && minTime == 0)
    {
        cout << "ON TIME" << endl;
        timeAfter60 = 0;
        arrivalTime = timeAfter60;
    }

    else if (timeInHour == 0)
    {
        if (examMinutes > minutes && timeAfter60 <= 30)
        {
            cout << "ON TIME" << endl;
            arrivalTime = timeafter60;
        }
        else if (examMinutes > minutes && (timeAfter60 > 30 && timeAfter60 <= 60))
        {
            cout << "EARLY" << endl;
            arrivalTime = timeafter60;
        }

        else if (examMinutes < minutes && (timeAfter60 > 30 && timeAfter60 <= 60))
        {
            cout << "LATE" << endl;
            arrivalTime = timeafter60;
        }
        else
        {
            arrivalTime = 0;
        }
    }

    else if (timeInHour == 1)
    {
        if (timeAfter60 <= 30)
        {
            cout << "ON TIME" << endl;
            arrivalTime = timeAfter60;
        }
        else if (timeAfter60 > 30 && timeAfter60 <= 60)
        {
            cout << "EARLY" << endl;
            arrivalTime = timeAfter60;
        }
        else
        {
            arrivalTime = 0;
        }
    }
    else if (timeInHour == -1 && (timeAfter60 > 30 && timeAfter60 <= 60))
    {
        if (minTime <= 59)
        {
            cout << "LATE " << endl;
            arrivalTime = timeAfter60;
        }
        else
        {
            cout << "LATE" << endl;
            arrivalTime = timeafter60;
        }
    }

    else if (examHours > hours)
    {
        if (minTime == 0)
        {
            cout << "EARLY " << endl;
            cout << abs(timeInHour) << " : ";
            arrivalTime = 0;
        }
        else
        {
            cout << "EARLY" << endl;
            cout << abs(timeInHour) << " : ";
            arrivalTime = timeafter60;
        }
    }
    else if (examHours < hours)
    {

        if (minTime == 0)
        {
            cout << "LATE " << endl;
            cout << abs(timeInHour) << " : ";
            arrivalTime = 0;
        }

        else
        {
            cout << "LATE" << endl;
            cout << abs(timeInHour) << " : ";
            arrivalTime = timeAfter60;
        }
    }

    return arrivalTime;
}
