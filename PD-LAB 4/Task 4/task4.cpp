#include<iostream>
#include<windows.h>

using namespace std;

void maze();
void gotoxy(int x , int y);
void movePlayer(int x , int y);
main(){
	system("cls");
	maze();
        int x =3;
        int y =3;
	while (true)
	{
          movePlayer(x,y);
        if(x < 20){
	  x=x+1;
 	  }
        if(x == 20){
	  gotoxy(x-1,y);
          cout<<" ";
          x=3;
 	  }
	}
}

void maze()
{
 cout<<"######################"<<endl;
 cout<<"#                    #"<<endl;
 cout<<"#                    #"<<endl;
 cout<<"#                    #"<<endl;
 cout<<"#                    #"<<endl;
 cout<<"#                    #"<<endl;
 cout<<"#                    #"<<endl;
 cout<<"######################"<<endl;
} 
void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void movePlayer(int x , int y){
        gotoxy(x-1,y);
        cout<<" ";
        gotoxy(x,y);
        cout<<"P";
        Sleep(200);

}