#include <iostream>
using namespace std;
int main(){
    int min,tot_frames_per_sec;
    const int frames_per_sec=25;
    cout<<"Enter the total number of minutes: ";
    cin>>min;
    tot_frames_per_sec=frames_per_sec*min*60;
    cout<<"Total number of frames per second for the following video is: "<<tot_frames_per_sec<<endl;
    return 0;
}