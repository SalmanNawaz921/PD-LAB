#include<iostream>

using namespace std;

void tomCat(int holidays);

main (){
    
    int holidays;

    cout<<"Enter Number Of Holidays: ";
    cin>>holidays;

    tomCat(holidays);
    
    return 0;

}

void tomCat(int holidays){
    int workingDays = 365-holidays;
    int timeForGames = workingDays * 63 + holidays * 127;
    int difference = 30000 - timeForGames;

    if(timeForGames <= 30000){
        cout<<"TOM SLEEPS WELL!!"<<endl;
        cout<<"Difference From Norm Is: "<<difference<<" minutes less for play"<<endl;
    }
    if(timeForGames > 30000){
        cout<<"TOM WILL RUN AWAY!!"<<endl;
        cout<<"Difference From Norm Is: "<<-1*difference<<" minutes for play "<<endl;
    }

}