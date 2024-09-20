#include <iostream>
using namespace std;
int main(){
    const int no_of_days=15;
    double weight_to_loose;
    string name;
    int days;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter the weight you want to loose: ";
    cin>>weight_to_loose;
    days=weight_to_loose*no_of_days;
    cout<<"According to the prescription of docgtor you will need "<<days<<" days to loose "<< weight_to_loose <<" kgs of weight."<<endl;
    return 0;
    
    
}