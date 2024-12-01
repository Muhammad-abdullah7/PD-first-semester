#include <iostream>
#include <string>
using namespace std;
int rotations(string directions[],int size){
    int rota=0;
    int angle=0;
    for(int i=0;i<size;i++){
        if(directions[i]=="right"){
            angle+=90;
        }else{
            angle-=90;
        }
        if(angle==360||angle==-360){
            rota++;
            angle=0;
        }
    }
    return rota;
}
int main() {
    string dirs1[]={"right","right","right","right","left","right"};
    string dirs2[]={"left","right","left","right"};
    string dirs3[]={"right","right","right","right","right","right","right","right"};
    string dirs4[]={"left","left","left","left"};
    cout<<rotations(dirs1,6)<<endl;
    cout<<rotations(dirs2, 4)<<endl;
    cout<<rotations(dirs3, 8)<<endl;
    cout<<rotations(dirs4, 4)<<endl;
    return 0;
}