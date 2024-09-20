#include <iostream>
using namespace std;
int main(){
    float veg_prkg,fru_prkg,tot_pr,tot_priv,tot_prif,grand;
    int veg_wei,fru_wei;
    cout<<"Enter the price of vegetables per kg in coins: ";
    cin>>veg_prkg;
    cout<<"Enter the price of fruits per kg in coins: ";
    cin>>fru_prkg;
    cout<<"Enter the total weight of vegetables in kgs: ";
    cin>>veg_wei;
    cout<<"Enter the total weight of fruits in kgs: ";
    cin>>fru_wei;
    tot_priv=(veg_prkg*veg_wei)/1.94;
    tot_prif=(fru_prkg*fru_wei)/1.94;
    grand=tot_priv+tot_prif;
    cout<<"The total price of vegetables and fruits in rupees is: "<<grand<<" rupees."<<endl;
    
    
    

}