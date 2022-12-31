#include<iostream>
#include<windows.h>

using namespace std;

void printMaze();
void gotoxy(int x, int y);
void moveVertically(int x , int y);
main(){

system("Color F5");
system("cls");

printMaze();
         int x=2 ,y=1;
	while(true){
         moveVertically(x,y);

	if(y < 23){
	     
		y=y+1;
	
	}

          if(y==23){
	     
            gotoxy(x,y-1);
             cout<<" ";
             y=1;
             x=4;
	
	}


	}

}

void printMaze(){


cout<<"###################################################################################"<<endl;
cout<<"||. .  . . . . . . . . . . . . . . . . . . . . . . . . . . . . .   . . . . . . . ||"<<endl;  
cout<<"||. .  %%%%%%%%%%%%%               . . .          %%%%%%%%%%%%%%   |%|. .   %%%% ||"<<endl;
cout<<"||. .       |%|  |%|             |%|. . .           |%|   |%|      |%|. .    |%| ||"<<endl;                                  
cout<<"||. .       |%|  |%|             |%|. . .           |%|   |%|      |%|. .    |%| ||"<<endl; 
cout<<"||. .      %%%%%%%%%        .  . |%|. . .          %%%%%%%%%%%%%%     . .  %%%%. ||"<<endl; 
cout<<"||. .      |%|              .  . |%|. . .     . . . . . . . . . . |%| . .      . ||"<<endl;
cout<<"||. .      %%%%%%%%%%%%%%%%%.  . |%|. . .         %%%%%%%%%%%     |%| . .  %%%%. ||"<<endl;
cout<<"||. .                   |%| .                     |%|. . . . .    |%| . .   |%|. ||"<<endl;
cout<<"||. .    . . . . . . . .|%| .             P       |%|. . . . . |%|    . .   |%|. ||"<<endl;
cout<<"||. . |%|   |%|%%%%|%| .|%| .  |%|                   . . . . . |%|    . .|%||%|. ||"<<endl;                                     
cout<<"||. . |%|   |%|    |%|. .   %%%%%%%%%%%%%%%%%%%%%%%  . . . . . |%|      .|%| .   ||"<<endl; 
cout<<"||. . |%|   |%|    |%|. .                . . .|%|         %%%%%%%%     . |%| .   ||"<<endl;
cout<<"||. . |%|               .                . . .|%|                |%|  . .|%| .   ||"<<endl;
cout<<"||. . |%|               %%%%%%%%%%%       . . .|%| %%%%%%%%      |%|  . .|%|%%%  ||"<<endl;
cout<<"||. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .    |%|  . . . . .  ||"<<endl;                
cout<<"||      . . . . . . . . . . . . . . . . . . . . . . . . . . .           . . . .  ||"<<endl;
cout<<"||. . |%|   |%|    |%|. .         %%%%%%%%%%%%%%   . . . .|%|     |%|  . .|%| .  ||"<<endl;
cout<<"||. . |%|   |%|    |%|. .                 ...|%|      %%%%%%      |%|  . .|%| .  ||"<<endl;
cout<<"||. . |%|               .         G       ...|%|                  |%|  . .|%| .  ||"<<endl;
cout<<"||. . |%|   %%%%%%%%%%%                   ...|%| %%%%%%%%%        |%|  . .|%|%%% ||"<<endl;
cout<<"||. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .     |%|  . . . .   ||"<<endl;  
cout<<"||      . . . . . . . . . . . . . . . . . . . . . . . . . .     . . . . . . . .  ||"<<endl;
cout<<"###################################################################################"<<endl;

}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void moveVertically(int x , int y){
        gotoxy(x,y-1);
        cout<<" ";
        gotoxy(x,y);
        cout<<"P";
        Sleep(200);

}