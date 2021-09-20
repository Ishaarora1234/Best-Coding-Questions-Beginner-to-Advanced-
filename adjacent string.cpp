#include<iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int m=0,a=0;
    cin>>s;
    for(int i=1;s[i]!='\0';i++)
    {
    if((s[i]==65 && s[a]==66)||(s[i]==66 && s[a]==65))
        a++;
    else
        m++;
    }
    cout<<m<<endl;   
    return 0;
}
