#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct job{
	public:
	int jn;
	int d;
	int p;
    bool comparat(const job& lhs, const job& rhs);
};

bool comparat(const job& lhs, const job& rhs) {
   return lhs.p > rhs.p;
}

int main(){
	int n;
	cout<<"enter the number of jobs: ";
	cin>>n;
	int profit=0;
	vector<job> j;
	for(int i=0;i<n;i++){
		job b;
		cout<<"enter the deadline and profit (space-separated) of the "<<i+1<<"th job: ";
		cin>>b.d>>b.p;
		b.jn=i+1;
		j.push_back(b);
	}
	
sort(j.begin(), j.end(), &comparat);

	int g[(j[0].d)+1]={0};
	for(int i=0;i<n;i++)
	{
		for(int k=((j[i].d)-1);k>=0;k--){
			
			if(g[k]==0)
		{
			g[k]=j[i].jn;
			profit+=j[i].p;
			i++;
		}	
		
		}
	}
	cout<<"Jobs scheduled: \n";
	for(int i=0;i<(j[0].d)+1;i++){
		cout<<g[i]<<"th ";
	}
	cout<<"\nMaximum Profit with this Job Schedule: "<<profit;
	return 0;
	
}
