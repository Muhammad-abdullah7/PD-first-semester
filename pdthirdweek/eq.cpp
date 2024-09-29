#include <iostream>
#include <string>
using namespace std;
void boolval( string value);
int main(){
      string val;
      cout<<"Enter the value:"<<endl;
      cin>>val;
      boolval(val);
    
    
}void boolval(string value){
    if(value=="true"){
        cout<<"False"<<endl;
    } if(value=="false"){
        cout<<"True"<<endl;
    }
}