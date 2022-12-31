#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
main(){
system("cls");
cout<<"TEST";

gotoxy(15,15);
cout<<"MY NAME IS MUHAMMAD SALMAN";

}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}