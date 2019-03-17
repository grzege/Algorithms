#include<iostream>
using namespace std;

int main(){
	int t,d,x;
	string nr;
	cin>>t;
	while(t--){
		cin>>nr;
		d=nr.length();
		for(int i=0;i<d;i++){
			x=nr[i];
			if(x>=65&&x<=67)cout<<2;
			if(x>=68&&x<=70)cout<<3;
			if(x>=71&&x<=73)cout<<4;
			if(x>=74&&x<=76)cout<<5;
			if(x>=77&&x<=79)cout<<6;
			if(x>=80&&x<=83)cout<<7;
			if(x>=84&&x<=86)cout<<8;
			if(x>=87&&x<=90)cout<<9;
		}
		cout<<endl;
	}
	return 0;
}
