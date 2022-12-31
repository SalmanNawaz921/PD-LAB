#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int x , int y);
void printName();

main(){
	system("cls");
        gotoxy(0,5);
        printName();

}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printName(){

cout<<"      *******         *          *            * *   * *          *          *       *"<<endl;
cout<<"     *               * *         *            *  * *  *         * *         * *     *"<<endl;
cout<<"     *              *   *        *            *   *   *        *   *        *  *    *"<<endl;
cout<<"      ********     *_____*       *            *   *   *       *_____*       *   *   *"<<endl;
cout<<"             *    *       *      *            *       *      *       *      *    *  *"<<endl; 
cout<<"             *   *         *     *            *       *     *         *     *     * *"<<endl; 
cout<<"      *******   *           *    *********    *       *    *           *    *      **"<<endl;
}