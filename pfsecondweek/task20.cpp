#include <iostream>
using namespace std;
int main(){
    double weight,price,square_feet,pr_perpound,pr_persqfeet;
    cout<<"Enter the weight of the fertilizer bad in pounds: ";
    cin>>weight;
    cout<<"Enter the prize  of the fertilizer bad in dollars: ";
    cin>>price;
    cout<<"Enter the area of the fertilizer bag in square feet: ";
    cin>>square_feet;
    pr_perpound=price/weight;
    cout<<"The price of the fertilizer per pound is: "<<pr_perpound<<" $."<<endl;
    pr_persqfeet=price/square_feet;
    cout<<"The price of the fertilizer per square feet is: "<<pr_persqfeet<<" square feet."<<endl;
    
    
    return 0;
    
    
}