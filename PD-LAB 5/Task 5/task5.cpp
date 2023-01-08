#include<iostream>
#include<windows.h>

using namespace std;

void printMaze();
void gotoxy(int x , int y);
void remove(int x, int y);
void printPacman( int x , int y);
char getCharacter(short int x ,short int y);
void playerMove(int x , int y , bool gameRunning);

main (){
    
    int pacmanX = 3;
    int pacmanY = 3;

    bool gameRunning = true;

    system("cls");
    printMaze();
    printPacman(pacmanX , pacmanY);
    playerMove(pacmanX , pacmanY , gameRunning);

    // return 0;

}

void printMaze(){
    cout<<"%%%%%%%%%"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%       %"<<endl;
    cout<<"%%%%%%%%%"<<endl;

}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void remove(int x, int y){
      gotoxy(x,y);
      cout<<" ";
}

void printPacman( int x , int y)
{
    gotoxy(x,y);
    cout<<"P";
}

char getCharacter(short int x ,short int y){
    CHAR_INFO ci;

    COORD xy ={0,0};

    SMALL_RECT rect ={x,y,x,y};

    COORD coordBufsize;

    coordBufsize.X =1;
    coordBufsize.Y= 1;

    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci ,coordBufsize , xy ,&rect)?ci.Char.AsciiChar:' ';
}

void playerMove(int x , int y , bool gameRunnning){

   while (true){

        if(GetAsyncKeyState(VK_LEFT)){
            char nextPosition =getCharacter(x-1 , y);
            if(nextPosition==' '){
                
                remove(x,y);
                x= x-1;
                printPacman(x,y);

            }
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            char nextPosition =getCharacter(x+1 , y);
            if(nextPosition==' '){
                
                remove(x,y);
                x= x+1;
                printPacman(x,y);

            }
        }
        if(GetAsyncKeyState(VK_UP)){
            char nextPosition =getCharacter(x, y-1);
            if(nextPosition==' '){
                
                remove(x,y);
                y= y-1;
                printPacman(x,y);

            }
        }
        if(GetAsyncKeyState(VK_DOWN)){
            char nextPosition =getCharacter(x, y+1);
            if(nextPosition==' '){
                
                remove(x,y);
                y= y+1;
                printPacman(x,y);

            }
        }

        if(GetAsyncKeyState(VK_ESCAPE)){

            gameRunnning= false;

        }
        Sleep(200);
   }
    
}