#include <iostream>
using namespace std;
void possiblebonus(int mine,int freind_1);
int main(){
    int mine_1,freind;
    cout<<"Enter your position:";
    cin>>mine_1;
    cout<<"Enter your friend's position:";
    cin>>freind;
    possiblebonus(mine_1,freind);
}
void possiblebonus(int mine,int freind_1){
    if(freind_1-mine >=1&&freind_1-mine<=6){
        cout<<"True"<<endl;
    }if(freind_1-mine <1|| freind_1-mine >6){
        cout<<"False"<<endl;
    }
}