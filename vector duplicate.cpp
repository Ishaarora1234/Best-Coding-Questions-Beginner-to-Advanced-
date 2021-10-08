#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v;
	vector <int> a;
	int flag=0;
	int n,s;
	cout<<"enter the no of elements";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	a.push_back(v[0]);
	for(int i=1;i<v.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(v[j]==v[i])
			flag=1;
		}
		if(flag==0)
		a.push_back(v[i]);
	}
	for(int i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	return 0;
}
