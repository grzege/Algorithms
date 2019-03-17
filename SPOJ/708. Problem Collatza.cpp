#include<iostream>
using namespace std;

int main(){
	int s,t,x;
	cin>>t;
	while(t--){
		cin>>s;
		int y=0;
		x=s;
		while(1){
			if(s==1){
				cout<<0<<endl;
				break;
				}
			if(x%2!=0){
				x=x*3+1;
				if(x==4)break;
				y++;
			}
			if(x%2==0){
				x/=2;
				if(2*x==1)break;
				y++;
			}
			
		}
		if(s!=1)cout<<y<<endl;
	}
	return 0;
}
