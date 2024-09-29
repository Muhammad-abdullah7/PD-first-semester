#include <iostream>
using namespace std;
void discount(string name,double price);
int main(){
    string name_1;
    double pri;
  
while(true){
  cout<<"Enter the name of the country:";
    cin>>name_1;
    cout<<"Enter the ticket price before discount:($)";
    cin>>pri;
    discount(name_1,pri);
    }
    
    
}void discount(string name,double price){
    const double disforpak=5;
    const double disforire=10;
    const double disforind=20;
    const double disforeng=30;
    const double disforcan=45;
    double dispri,priafterdis;
    if(name=="Pakistan"){
        dispri=price*(disforpak/100);
        priafterdis=price-dispri;
        cout<<"The price after discount is:($) "<<priafterdis<<endl;
    }  if(name=="Ireland"){
        dispri=price*(disforire/100);
        priafterdis=price-dispri;
        cout<<"The price after discount is:($) "<<priafterdis<<endl;
    }  if(name=="India"){
        dispri=price*(disforind/100);
        priafterdis=price-dispri;
        cout<<"The price after discount is: ($)"<<priafterdis<<endl;
    }  if(name=="England"){
        dispri=price*(disforeng/100);
        priafterdis=price-dispri;
        cout<<"The price after discount is: ($)"<<priafterdis<<endl;
    }  if(name=="Canada"){
        dispri=price*(disforcan/100);
        priafterdis=price-dispri;
        cout<<"The price after discount is:($) "<<priafterdis<<endl;
    }
}