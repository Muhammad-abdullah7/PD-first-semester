#include <iostream>
using namespace std;
void flowershop(double redrose,double whiterose,double tulips);
int main(){
    double red_rose,white_rose,tulips;
    cout<<"Enter the number of red roses:";
    cin>>red_rose;
    cout<<"Enter the number of white roses:";
    cin>>white_rose;
    cout<<"Enter the number of tulips:";
    cin>>tulips;
    flowershop(red_rose,white_rose,tulips);
    
} 
void flowershop(double redrose,double whiterose,double tulips){
    const double redpri=2.0;
    const double whipri=4.10;
    const double tulippri=2.50;
    double tot_red_pri, tot_whi_pri, tot_tulip_pri,tot_pri,dis_pri,pri_af_dis;
    const double dis=20.0;
    tot_red_pri=redrose*redpri;
    tot_whi_pri=whiterose*whipri;
    tot_tulip_pri=tulips*tulippri;
    tot_pri=tot_red_pri+tot_whi_pri+tot_tulip_pri;
    if(tot_pri>200){
        dis_pri=tot_pri*(dis/100);
        pri_af_dis=tot_pri-dis_pri;
        cout<<"Original Price:"<< tot_pri<<endl;
        cout<<"Price after discount:"<<pri_af_dis<<endl;
    }if(tot_pri<200){
        cout<<"Original Price:"<< tot_pri<<endl;
        cout<<"No discounts applied"<<endl;
    }
    
}