#include<iostream>
#include<string>
using namespace std;
template<typename T,typename U>
T maximum(T a,U b){
	if(a>b)
	return a;
	else
	return b;
}
int main(){
	cout<<maximum(1,2)<<endl;
	cout<<maximum(1.2,0.8)<<endl;
	cout<<maximum(4.8,2)<<endl;
	cout<<maximum(1,2.6)<<endl;
	cout<<maximum(77.878,2.4567)<<endl;
	cout<<maximum('a',2)<<endl;
	cout<<maximum('a','=')<<endl;
	cout<<maximum('m','v')<<endl;
	return 0;	
}
