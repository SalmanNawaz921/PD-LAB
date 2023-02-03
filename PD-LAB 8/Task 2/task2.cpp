#include <iostream>

using namespace std;

main()
{

    string movieName;

    string movies[5] = {"gladiator",
                        "starwars",
                        "terminator",
                        "takinglives",
                        "tombraider"};

    cout << "ENTER MOVIE NAME: ";
    getline(cin, movieName);

    float discountOdd;
    float discountEven;
    int ticket = 500;
    bool odd = false;
    bool flag=false;
    for (int i = 0; i < 5; i++)
    {
        if (movieName == movies[i] && i % 2 != 0)
        {
            odd = true;
            flag=true;
            discountOdd = ticket - (ticket * 0.05);
            break;
        }
        else if (movieName==movies[i] && i % 2 == 0)
        {
            odd = false;
            flag=true;
            discountEven = ticket - (ticket * 0.1);
            break;
        
        }
        else{
           flag=false;
        }
    }

    if(flag==true&& odd==false){
        cout<<discountEven;
    }
    else if(flag==true && odd==true){
        cout<<discountOdd;
    }
    else{
        cout<<"You Have Entered Wrong Name";
    }
}