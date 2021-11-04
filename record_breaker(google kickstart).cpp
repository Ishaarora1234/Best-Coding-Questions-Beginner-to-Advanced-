#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int maxelement=0;
    int arr[]={12,14,18,22,23,13,22,23,19,8};
    for(int i=0;i<8;i++){
        if(arr[i+1]<arr[i]){
            maxelement=max(arr[i],maxelement);
        }
    }
    maxelement=max(maxelement,arr[9]);
    cout<<maxelement;
    return 0;
}