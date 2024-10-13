#include <iostream>
#include <cmath>
using namespace std;
int calgames(string ye_typ, int holi, int weekend) {
    int weekends = 48;
    int gamesinsofia = 0;
    int extragames = 0;
    gamesinsofia += (weekends - weekend);
    gamesinsofia += (2 * holi) / 3; 
    if (ye_typ == "leap") {
        extragames = gamesinsofia * (15.0 / 100.0); 
        gamesinsofia += extragames; 
    }
    return floor(gamesinsofia);
}
int main() {
    string ye_typ;
    int holi, weekends;
    cin >> ye_typ >> holi >> weekends;
    int totgames = calgames(ye_typ, holi, weekends);
    cout << totgames << endl;
    return 0;
}
