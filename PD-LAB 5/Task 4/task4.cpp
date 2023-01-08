#include <iostream>

using namespace std;

void project(int hours, int days, int workers);

main()
{
    int hours, days, workers;

    cout << "THE NEEDED HOURS [0..200000]: ";
    cin >> hours;
    cout << "THE DAYS THE FIRM HAS [0..20000]: ";
    cin >> days;
    cout << "THE NUMBER OF ALL WORKERS [0..200]: ";
    cin >> workers;

    project(hours, days, workers);

}

void project(int hours, int days, int workers)
{

    int workersWorkingHours = workers * 10 * days;

    int trainingDays = (workersWorkingHours -((workersWorkingHours*10)/100)) ;

    int totalHours = trainingDays - hours;

    if (totalHours > hours)
    {
        cout << "YES, "<<totalHours<<" HOURS ARE LEFT ";
        
    }

    if (totalHours <= hours)
    {
        cout << "NOT ENOUGH TIME "<< -1 * totalHours<< " HOURS NEEDED";
       
    }
}
