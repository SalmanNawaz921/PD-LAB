#include <iostream>
#include <windows.h>

using namespace std;

int score = 0;

void printMaze();
void gotoxy(int x, int y);
void playerMove(int x, int y, bool gameRunning);
void remove(int x, int y);
void clear(int x, int y, char pCharacter);
void ghost1(int gx, int gy);
void moveGhost1(int gx, int gy, char pCharacter, string direction, bool gameRunning);
void moveGhost2(int g1x, int g1y, char pCharacter, string dir, bool gameRunning);

int main()
{
    system("Color F4");
    system("cls");

    int x = 3, y = 2;
    int gx = 20, gy = 22;
    int g1x = 32, g1y = 2;

    char pCharacter = ' ';
    string direction = "RIGHT";
    string dir = "DOWN";

    bool gameRunning = true;

    cout << "SCORE : " << score;
    printMaze();

    moveGhost1(gx, gy, pCharacter, direction, gameRunning);
    moveGhost2(g1x, g1y, pCharacter, dir, gameRunning);
    playerMove(x, y, gameRunning);

    return 0;
}

void printMaze()
{
    cout << endl;
    cout << "###################################################################################" << endl;
    cout << "||. .  . . . . . . . . . . . . . . . . . . . . . . . . . . . . .   . . . . . . . ||" << endl;
    cout << "||. .  %%%%%%%%%%%%%                . . .         %%%%%%%%%%%%%%   |%|. .   %%%% ||" << endl;
    cout << "||. .       |%|  |%|             |%|. . .           |%|   |%|      |%|. .    |%| ||" << endl;
    cout << "||. .       |%|  |%|             |%|. . .           |%|   |%|      |%|. .    |%| ||" << endl;
    cout << "||. .      %%%%%%%%%        .  . |%|. . .          %%%%%%%%%%%%%%     . .  %%%%. ||" << endl;
    cout << "||. .      |%|              .  . |%|. . .     . . . . . . . . . . |%| . .      . ||" << endl;
    cout << "||. .      %%%%%%%%%%%%%%%%%.  . |%|. . .         %%%%%%%%%%%     |%| . .  %%%%. ||" << endl;
    cout << "||. .                   |%| .                     |%|. . . . .    |%| . .   |%|. ||" << endl;
    cout << "||. .    . . . . . . . .|%| .                     |%|. . . . . |%|    . .   |%|. ||" << endl;
    cout << "||. . |%|   |%|%%%%|%| .|%| .  |%|                   . . . . . |%|    . .|%||%|. ||" << endl;
    cout << "||. . |%|   |%|    |%|. .   %%%%%%%%%%%%%%%%%%%%%%%  . . . . . |%|      .|%| .   ||" << endl;
    cout << "||. . |%|   |%|    |%|. .                . . .|%|         %%%%%%%%     . |%| .   ||" << endl;
    cout << "||. . |%|               .                . . .|%|                |%|  . .|%| .   ||" << endl;
    cout << "||. . |%|               %%%%%%%%%%%       . . .|%| %%%%%%%%      |%|  . .|%|%%%  ||" << endl;
    cout << "||. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .    |%|  . . . . .  ||" << endl;
    cout << "||      . . . . . . . . . . . . . . . . . . . . . . . . . . .           . . . .  ||" << endl;
    cout << "||. . |%|   |%|    |%|. .         %%%%%%%%%%%%%%   . . . .|%|     |%|  . .|%| .  ||" << endl;
    cout << "||. . |%|   |%|    |%|. .                 ...|%|      %%%%%%      |%|  . .|%| .  ||" << endl;
    cout << "||. . |%|               .         G       ...|%|                  |%|  . .|%| .  ||" << endl;
    cout << "||. . |%|   %%%%%%%%%%%                   ...|%| %%%%%%%%%        |%|  . .|%|%%% ||" << endl;
    cout << "||. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .     |%|  . . . .   ||" << endl;
    cout << "||      . . . . . . . . . . . . . . . . . . . . . . . . . .     . . . . . . . .  ||" << endl;
    cout << "###################################################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void remove(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void clear(int x, int y, char pCharacter)
{
    gotoxy(x, y);
    cout << pCharacter;
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

char getCharacter(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}

void playerMove(int x, int y, bool gameRunning)
{
    char nextPosition;
    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            nextPosition = getCharacter(x - 1, y);
            if (nextPosition == ' ')
            {

                remove(x, y);
                x = x - 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                x--;
                printPacman(x, y);
                score++;
            }
            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            nextPosition = getCharacter(x + 1, y);
            if (nextPosition == ' ')
            {

                remove(x, y);
                x = x + 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                x++;
                printPacman(x, y);
                score++;
            }
            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            nextPosition = getCharacter(x, y - 1);
            if (nextPosition == ' ')
            {

                remove(x, y);
                y = y - 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                y--;
                printPacman(x, y);
                score++;
            }
            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            nextPosition = getCharacter(x, y + 1);
            if (nextPosition == ' ')
            {

                remove(x, y);
                y = y + 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                y++;
                printPacman(x, y);
                score++;
            }

            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {

            gameRunning = false;
        }
        Sleep(200);
    }
}

void ghost1(int gx, int gy)
{
    gotoxy(gx, gy);
    cout << "G";
}

void moveGhost1(int gx, int gy, char pCharacter, string direction, bool gameRunning)
{
    while (gameRunning)
    {
        if (direction == "RIGHT")
        {
            char nextPosition = getCharacter(gx + 1, gy);
            if (nextPosition == '%' || nextPosition == '|')
            {
                direction == "LEFT";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(gx, gy, pCharacter);
                gx = gx + 1;
                pCharacter = nextPosition;
                ghost1(gx, gy);
            }
            else if (nextPosition == 'P')
            {
                gameRunning = false;
            }
        }

        if (direction == "LEFT")
        {
            char nextPosition = getCharacter(gx - 1, gy);
            if (nextPosition == '%' || nextPosition == '|')
            {
                direction == "RIGHT";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(gx, gy, pCharacter);
                gx = gx - 1;
                pCharacter = nextPosition;
                ghost1(gx, gy);
            }
            else if (nextPosition == 'P')
            {
                gameRunning = false;
            }
        }
        Sleep(200);
    }
}

void moveGhost2(int g1x, int g1y, char pCharacter, string dir, bool gameRunning)
{
    while (gameRunning)
    {

        if (dir == "DOWN")
        {
            char nextPosition = getCharacter(g1x, g1y + 1);
            if (nextPosition == '%' || nextPosition == '|' || nextPosition == '#')
            {
                dir == "UP";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(g1x, g1y, pCharacter);
                g1y = g1y + 1;
                pCharacter = nextPosition;
                ghost1(g1x, g1y);
            }
            else if (nextPosition == 'P')
            {
                gameRunning = false;
            }
        }

        if (dir == "UP")
        {
            char nextPosition = getCharacter(g1x, g1y - 1);
            if (nextPosition == '%' || nextPosition == '|' || nextPosition == '#')
            {
                dir == "DOWN";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(g1x, g1y, pCharacter);
                g1y = g1y - 1;
                pCharacter = nextPosition;
                ghost1(g1x, g1y);
            }
            else if (nextPosition == 'P')
            {
                gameRunning = false;
            }
        }
    }
}
