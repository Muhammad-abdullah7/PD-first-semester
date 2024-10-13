#include <iostream>
using namespace std;
string decideactivity(string temp,string humidity);
int main(){
    string temp,humidity;
    cout<<"Enter the temperature:";
    cin>>temp;
    cout<<"Enter the humidity:";
    cin>>humidity;
    string res=decideactivity(temp,humidity);
    cout<<res<<endl;
    
}
string decideactivity(string temp,string humidity){
    if((temp=="warm"||temp=="Warm")&&(humidity=="Dry"|| humidity=="dry")){
        return "Play tennis";
    }if((temp=="warm"||temp=="Warm")&&(humidity=="Humid"|| humidity=="humid")){
        return "swim";
    }if((temp=="cold"||temp=="Cold")&&(humidity=="Dry"|| humidity=="dry")){
        return "Play basketball";
    }if((temp=="Cold"||temp=="cold")&&(humidity=="humid"|| humidity=="Humid")){
        return "Watch tv";
    }return " ";
}