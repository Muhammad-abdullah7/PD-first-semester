#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
 void moveplayer(int x,int y);
int main(){
int x=5, y=5;
system("cls");
printmaze();
while(true){
moveplayer(x,y);
x=x+1;
if(x==29){
x=5;
}
}
gotoxy(1,25);
}void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printmaze(){
cout<<"###############################"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"#                             #"<<endl;
cout<<"###############################"<<endl;

}void moveplayer(int x,int y){
     gotoxy(x,y);
     cout<<"P"<<endl;
     Sleep(1000);
gotoxy(x,y);
cout<<" "<<endl;




}






