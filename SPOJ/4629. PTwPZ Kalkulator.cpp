#include<iostream>
using namespace std;

int main(){
	int t,l,x;
	string w;
	cin>>t;
	while(t--){
		int s=0;
		cin>>w;
		l=w.length();
		for(int i=0;i<l;i+=2){
			x=w[i];
			if(x>=48&&x<=57){
				if(x==48)x=0;
				if(x==49)x=1;
				if(x==50)x=2;
				if(x==51)x=3;
				if(x==52)x=4;
				if(x==53)x=5;
				if(x==54)x=6;
				if(x==55)x=7;
				if(x==56)x=8;
				if(x==57)x=9;
			}
			if(i==0)s+=x;
			if(w[i-1]=='+'&&i!=0)s+=x;
			else if(i!=0) s-=x;
		}
		cout<<s<<endl;
	}
	return 0;
}
