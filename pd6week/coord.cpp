#include <iostream>
using namespace std;
string chposi(int h, int x, int y) {
    if (y>=0&&y<=4*h) {
        if (x>=0&&x<=2*h) {
            if (y==0||y==4*h) {
                return "Border";
            }
            if (x==0||x==2*h) {
                return "Border";
            }
            if (y==2*h&&(x>=0&&x<=2*h)) {
                return "Border";
            }
            if(x==h&&(y>=0&&y<=4*h)) {
                return "Border";
            }
            return "Inside";
        }
    }
    return "Outside";
}

int main() {
    int h,x,y;
    cin>>h>>x>>y;
    cout << chposi(h,x,y) << endl;
    return 0;
}
