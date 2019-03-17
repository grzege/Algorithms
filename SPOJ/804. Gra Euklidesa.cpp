#include<iostream>
using namespace std;

int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int pom;
	  	while(b!=0)
	    {
	    pom = b;
	    b = a%b;
	    a = pom; 
		}
		cout<<(a+b)*2<<endl;
	}
	return 0;
}
