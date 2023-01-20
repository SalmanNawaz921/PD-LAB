#include <iostream>

using namespace std;

main()
{
    int period;
    cout << "ENTER PERIOD: ";
    cin >> period;

    int patientsNo = 0;
    int doctorNo = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int day = 1; day <= period; day++)
    {
        cout << "ENTER NO OF PATIENTS ON DAY " << day << " : ";
        cin >> patientsNo;

        if ((day % 3 == 0) && (treatedPatients < untreatedPatients))
        {
            doctorNo = doctorNo + 1;
            // treatedPatients=doctorNo;
        }
        if (patientsNo > doctorNo)
        {
            treatedPatients = treatedPatients + doctorNo;
            untreatedPatients = untreatedPatients + patientsNo - doctorNo;
        }
        else
        {
            treatedPatients = treatedPatients + patientsNo;
        }
    }

    cout << "TREATED PATIENTS: " << treatedPatients << endl;
    cout << "UNTREATED PATIENTS: " << untreatedPatients << endl;

    return 0;
}