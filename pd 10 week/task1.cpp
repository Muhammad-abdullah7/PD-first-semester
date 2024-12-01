#include <iostream>
using namespace std;
bool can_formcons(int arr[],int n);
int main() {
    int arr1[]={5, 1, 4, 3, 2};
    int arr2[]={5, 1, 4, 3, 2, 8};
    int arr3[]={5, 6, 7, 8, 9, 9};
    cout << can_formcons(arr1,5)<<endl; 
    cout << can_formcons(arr2,6)<<endl; 
    cout << can_formcons(arr3,6)<<endl; 
    return 0;
}
bool can_formcons(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return false;
            }
        }
    }
    int minval=arr[0],maxval=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minval){
            minval=arr[i];
        }
        if (arr[i]>maxval){
            maxval=arr[i];
        }
    }
    int range=maxval-minval+1;
    return range==n;
}