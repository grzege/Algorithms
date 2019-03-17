#include<iostream>
using namespace std;

int main(){
	float a,b,c;
	while(cin>>a){
		cin>>b>>c;
		if(b*b-4*a*c>0)cout<<2<<endl; 
		else if(b*b-4*a*c==0)cout<<1<<endl;
		else cout<<0<<endl;
	}
}
