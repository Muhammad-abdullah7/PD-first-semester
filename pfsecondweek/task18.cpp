#include <iostream>
using namespace std;
int main(){
    double imposter_count,tot_players;double percentage;
    cout<<"Enter the no of imposters: ";
    cin>>imposter_count;
    cout<<"Enter the total player count: ";
    cin>>tot_players;
    percentage=100.0*(imposter_count/tot_players);
    cout<<"Chances of an imposter among the players are: "<<percentage<<" %."<<endl;
    return 0;
    
}