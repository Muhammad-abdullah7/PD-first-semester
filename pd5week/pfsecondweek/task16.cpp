#include <iostream>
using namespace std;
int main(){
    double initial_velocity,acceleration,tim,final_velocity;
    cout<<"Enter the initial velocity of the body (m/s^-1): ";
    cin>>initial_velocity;
    cout<<"Enter the acceleration of the body (m/s^-2): ";
    cin>>acceleration;
    cout<<"Enter the time (s): ";
    cin>>tim;
    final_velocity=((acceleration*tim)+initial_velocity);
    cout<<"The final velocity of the body is "<<final_velocity <<" meter per square second."<<endl;
    return 0;
    
}