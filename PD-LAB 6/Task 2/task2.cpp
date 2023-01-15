#include <iostream>

using namespace std;

float grade(float english, float maths, float chemistry, float sStudies, float biology, float totalMarks, string userName);

main()
{
    float english, maths, chemistry, sStudies, biology;
    string userName;

    cout << "ENTER NAME OF STUDENT: ";
    cin >> userName;
    cout << "ENTER MARKS IN ENGLISH: ";
    cin >> english;
    cout << "ENTER MARKS IN MATHS: ";
    cin >> maths;
    cout << "ENTER MARKS IN CHEMISTRY: ";
    cin >> chemistry;
    cout << "ENTER MARKS IN Social Studies: ";
    cin >> sStudies;
    cout << "ENTER MARKS IN Biology: ";
    cin >> biology;

    float totalMarks = english + maths + chemistry + sStudies + biology;

    float result = grade(english, maths, chemistry, sStudies, biology, totalMarks, userName);

    string grade;

    if (result > 90 && result <= 100)
    {
        grade = "A+";
    }
    else if (result > 80 && result <= 90)
    {
        grade = "A";
    }
    else if (result > 70 && result <= 80)
    {
        grade = "B+";
    }
    else if (result > 60 && result <= 70)
    {
        grade = "B";
    }
    else if (result > 50 && result <= 60)
    {
        grade = "C";
    }
    else if (result > 40 && result <= 50)
    {
        grade = "D";
    }
    else if (result < 40)
    {
        grade = "F";
    }

    else
    {
        grade = "INVALID";
    }

    cout << "TOTAL MARKS OF " << userName << " ARE " << totalMarks << " OUT OF 500 "
         << " & PERCENTAGE IS " << result << " % "
         << " & GRADE "
         << " IS " << grade;
}

float grade(float english, float maths, float chemistry, float sStudies, float biology, float totalMarks, string userName)
{

    float totalPercentage = ((totalMarks * 100) / 500);
    return totalPercentage;
}