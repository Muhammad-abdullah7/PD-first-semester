#include <iostream>
using namespace std;

int main() {
    int sq_f; 
    double length, width, tot_area, walls_paint;
    cout << "Enter the square feet of wall you can paint: ";
    cin >> sq_f;
    cout << "Enter the length of the wall (in meters): ";
    cin >> length;
    cout << "Enter the width of the wall (in meters): ";
    cin >> width;
    tot_area = length * width ;
    walls_paint = sq_f / tot_area;
    cout << "You can paint a total of " << walls_paint << " walls with this amount." << endl;

    return 0;
}
