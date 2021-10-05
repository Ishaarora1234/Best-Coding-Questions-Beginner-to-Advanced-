#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
	vector<int> equilibrium(vector<int> v,int n){
	int sum=0;
	vector<int> result;
    int leftsum = 0;
    for (int i=0;i<n;++i) 
        sum+=v[i]; 
    for (int i=0;i<n;++i) 
    { 
        sum-=v[i]; 
        if (leftsum==sum) 
            result.push_back(i); 
        leftsum+=v[i]; 
    } 
	return result;
}
int main(){
	
	int n,data;
	vector<int> v,result;
	cout<<"enter the number of array elements: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		v.push_back(data);
	}
	result=equilibrium(v,n);
	for(int i=0;i<result.size();i++)
	cout<<result[i]<<" ";
	return 0;
}
