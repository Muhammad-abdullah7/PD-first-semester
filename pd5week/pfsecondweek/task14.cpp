#include <iostream>
using namespace std;
int main(){
    int no_of_sides;
    cout<<"Enter the no of sides of a polygon: ";
    cin>>no_of_sides;
    int tot_angle=(no_of_sides-2)*180;
    cout<<"Total internal angle of a "<<no_of_sides<<" is "<<tot_angle<<" degrees."<<endl;
    return 0;
}