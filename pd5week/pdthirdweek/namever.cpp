#include <iostream>
#include <windows.h>
void gotoxy(int x,int y);
using namespace std;
int main(){
   system("cls");
gotoxy(20,10);
cout<<"A"<<endl;
gotoxy(20,11);
cout<<"B"<<endl;
gotoxy(20,12);
cout<<"C"<<endl;
gotoxy(20,13);
cout<<"D"<<endl;
gotoxy(20,14);
cout<<"U"<<endl;
gotoxy(20,15);
cout<<"L"<<endl;
gotoxy(20,16);
cout<<"L"<<endl;
gotoxy(20,17);
cout<<"A"<<endl;
gotoxy(20,18);
cout<<"H"<<endl;
gotoxy(1,25);



}
void gotoxy(int x,int y){
COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}