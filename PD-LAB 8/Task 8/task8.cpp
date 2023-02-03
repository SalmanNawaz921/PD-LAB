#include <iostream>

using namespace std;

main()
{

    string moves[10] = {"Shimmy",
                        "Shake",
                        "Pirouette",
                        "Slide",
                        "Box Step",
                        "Head Spin",
                        "Dosado",
                        "Pop",
                        "Lock",
                        "Arabesque"};

    int number;
    cout << "ENTER YOUR PIN: ";
    cin >> number;

    int no;

    int mode[number];

    int i=0;
    while(i<4){
         mode[i] = number % 10;
        number = number / 10;
        i++;

    }

    for(int j=3 ; j>=0 ;j--){

        

        if(mode[j]==0){
            cout<<moves[((j-mode[j])/1)];
        }
        else if(mode[j+1]<mode[j]){
            cout<<moves[mode[j-1]];
        }
        else{
        cout<<moves[mode[j]]<<",";
        }
    }

}