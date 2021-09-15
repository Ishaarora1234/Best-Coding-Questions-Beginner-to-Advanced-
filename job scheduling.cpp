#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of jobs: ";
	cin>>n;
	int profit=0;
	int max=0;
	int d[n],p[n];
	for(int i=0;i<n;i++){
		cout<<"enter the deadline and profit(space-separated) of the "<<i<<"th job: ";
		cin>>d[i]>>p[i];
		if(d[i]>max){
			max=d[i];
		}	
	}
	int g[max]={0};
	for(int i=0;i<n;i++){
		for(int j=(d[i]-1);j>=0;j--){
			if(profit+p[i]-g[j]>profit){
				profit+=p[i];
				profit-=g[j];
				g[j]=p[i];
			}
		}
	}
	for(int i=0;i<max;i++){
		cout<<g[i]<<" ";
	}
	cout<<endl;
	cout<<profit;
	
	
	
}
