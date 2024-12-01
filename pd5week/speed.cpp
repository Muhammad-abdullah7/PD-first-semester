#include <iostream>
using namespace std;
void speedlimit(int speed);
int main(){
    int sp_1;
    cout<<"Enter the speed to check if you are going at normal speed:";
    cin>>sp_1;
    speedlimit(sp_1);
    
}void speedlimit(int speed){
    if(speed>100){
        cout<<"Halt... You will be challenged."<<endl;
    } if(speed<=100){
        cout<<"Perfect!You are going good."<<endl;
    }
}