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
        int y =2;
	while (true)
	{
          movePlayer(x,y);
        if(y < 6){
	  y=y+1;
 	  }
        if(y == 6){
	  gotoxy(x,y-1);
          cout<<" ";
          y=2;
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
        gotoxy(x,y-1);
        cout<<" ";
        gotoxy(x,y);
        cout<<"P";
        Sleep(200);

}