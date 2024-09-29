#include <iostream>
#include <windows.h>
 void gotoxy(int x,int y);
using namespace std;
int main(){
          system("cls");
          gotoxy(35,15);
          cout<<"MUHAMMAD ABDULLAH ZAFAR."<<endl;
          gotoxy(1,67);                                                                        
}
void gotoxy(int x,int y)
{
COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
