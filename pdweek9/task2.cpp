#include <iostream>
#include <string>
using namespace std;
int main() {
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int ticketpri = 500;
    string moviename;
    cout << "Enter the movie name: ";
    cin >> moviename; 
    bool found = false;
    for (int i=0;i<5;i++) {
        if (movies[i] == moviename) {
            found = true;
            if (i%2==0) {
                cout << "The ticket for " << moviename << " after 10% discount is: " << ticketpri*0.90 << " rupees." << endl;
            } else {
                cout << "The ticket for " << moviename << " after 5% discount is: " << ticketpri*0.95 << " rupees." << endl;
            }
            break;
        }
    }
    if (!found) {
        cout << "Sorry, the movie is not available." << endl;
    }
    return 0;
}
