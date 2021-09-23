#include<iostream>
#include<string>
using namespace std;
string l(string s,int n)
{
	string a;
	if(s[n]=='2')
	{
		a="abc";
	}
	if(s[n]=='3')
	{
		string a="def";
	}
	if(s[n]=='4')
	{
		string a="ghi";
	}
	if(s[n]=='5')
	{
		string a="jkl";
	}
	if(s[n]=='6')
	{
		string a="mno";
	}
	if(s[n]=='7')
	{
		string a="pqrs";
	}
	if(s[n]=='8')
	{
		string a="tuv";
	}
	if(s[n]=='9')
	{
		string a="wxyz";
	}
	return a;
}


int ka(int n,string s,string o[])
{
	int j=0;
	if(n==0)
	{
		o[0]="";
		return 1;
	}
	int t=ka(n-1,s.substr(0,n-1),o);
	
	string a=l(s,n);
	for(int i=0;i<t;i++)
	{
		o[t+i]=o[i];
	}
	for(int i=0;i<t*a.size();i++)
	{
		if(t*a.size()%i==0)
			j++;
		o[i]+=a[j];
	}
	return t*a.size();
}
int main()
{
	string s1;
	string * o=new string;
	cin>>s1;
	int n=s1.size();
	int t=ka(n,s1,o);
	for(int i=0;i<t;i++)
	cout<<o[i]<<" ";
	delete[]o;
	return 0;
}
