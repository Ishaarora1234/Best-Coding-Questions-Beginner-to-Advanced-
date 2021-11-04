#include<iostream>
using namespace std;
int main(){
    int maxlen=0;
    int currlen=0;
    int diff=0;
    int arr[]={4,5,8,10,12,15,18,21,24,21,5};
    int prevdiff=arr[0]-arr[1];
    for(int i=0;i<11;i++){
        diff=arr[i]-arr[i+1];
        if(diff==prevdiff || diff==(prevdiff*-1)){
            currlen+=1;
            prevdiff=diff;
            if(currlen>maxlen)
            maxlen=currlen;
        }
        else
        prevdiff=diff;
    }
    cout<<maxlen;
}