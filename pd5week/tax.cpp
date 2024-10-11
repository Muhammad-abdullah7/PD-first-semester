#include <iostream>
using namespace std;
double price_tot(double price, char sym);
int main(){
    double pri;
    char symbol;
    cout<<"Enter the price of the car:";
    cin>>pri;
    cout<<"Now enter the symbol the car:";
    cin>>symbol;
    double res=price_tot(pri,symbol);
    cout<<"The price of the car after the tax ammount is: "<< res<<" dollars."<<endl;
}
double price_tot(double price, char sym){
    double tax_amm,tot_price;
    const double tax_m=6;
    const double tax_e=8;
    const double tax_s=10;
    const double tax_v=12;
     const double tax_t=15;
    if(sym=='M'){
        tax_amm=price*(tax_m/100);
        tot_price=tax_amm+price;
        return tot_price;
    }
     if(sym=='E'){
        tax_amm=price*(tax_e/100);
        tot_price=tax_amm+price;
        return tot_price;
    } if(sym=='S'){
        tax_amm=price*(tax_s/100);
        tot_price=tax_amm+price;
        return tot_price;
    } if(sym=='V'){
        tax_amm=price*(tax_v/100);
        tot_price=tax_amm+price;
        return tot_price;
    } if(sym=='T'){
        tax_amm=price*(tax_t/100);
        tot_price=tax_amm+price;
        return tot_price;
    }return 0;
}