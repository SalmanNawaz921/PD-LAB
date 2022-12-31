#include<iostream>

using namespace std;

void challanFunction(int speed);

main (){
    int speed;
    cout<<"ENTER THE SPEED IN KM/H: ";
    cin>>speed;

    challanFunction(speed);
    return 0;

}

void challanFunction(int speed){
    if(speed > 100){
        cout<<"Halt...You Will Be Challanged!!!";
    }
    if(speed <= 100){
        cout<<"Perfect, You're Going Good";
    }
}