#include<iostream>
using namespace std;

int main(){
	int a, b;
	char k;
	while(cin>>k){
		cin>>a>>b;
		if(k=='+')cout<<a+b<<endl;
		if(k=='-')cout<<a-b<<endl;
		if(k=='*')cout<<a*b<<endl;
		if(k=='/')cout<<a/b<<endl;
		if(k=='%')cout<<a%b<<endl;
		
	}
	return 0;
}
