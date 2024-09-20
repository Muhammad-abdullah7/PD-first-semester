
#include <iostream>
using namespace std;
int main(){
    string name;
    int ch_tick,adu_tick;
    double ch_tickpri,adu_tickpri,total_ammount,remaining,ch_tot,adu_tot,per,charity;
    cout<<"Enter the movie name: ";
    cin>>name;
    cout<<"Enter the no of children tickets sold: ";
    cin>>ch_tick;
     cout<<"Enter the no of adult tickets sold: ";
     cin>>adu_tick;
      cout<<"Enter the price of children tickets sold: ";
      cin>>ch_tickpri;
       cout<<"Enter the price no ofadults tickets sold: ";
       cin>>adu_tickpri;
       ch_tot=ch_tick*ch_tickpri;
       adu_tot=adu_tick*adu_tickpri;
       total_ammount=ch_tot+adu_tot;
       cout<<"Enter the percentage of total ammount you want to donate to charity: ";
       cin>>per;
       charity=(total_ammount)*(per/100);
       remaining=total_ammount-charity;
       cout<<"Total ammount generated from ticket sales: "<<total_ammount<< " dollars."<<endl;
       cout<<"Ammount donated to the charity is: "<<charity<<" dollars."<<endl;
       cout<<"Remaining ammount after the charity is: "<<remaining<<" dollars."<<endl;
       return 0;
       
       
    
}