#include <iostream>
using namespace std;

void pet(int holidays);

int main() {
    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    pet(holidays);
    return 0;
}

void pet(int holidays) {
    const int tot_min = 30000; 
    const int workdays = 365 - holidays; 
    const int w_day_pltime = 63; 
    const int holiday_pltime = 127; 
    int totalplaytime = (workdays * w_day_pltime) + (holidays * holiday_pltime);
    int difference = tot_min - totalplaytime;
    if (difference > 0) {
        cout << "Tom sleeps well" << endl;
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }
    if (difference <= 0) {
        cout << "Tom will run away" << endl;
        difference = -difference; 
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }
}
