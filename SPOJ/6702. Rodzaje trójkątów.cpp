#include<iostream>
using namespace std;

int main(){
	long long a,b,c;
	while(cin>>a){
		cin>>b>>c;
		if(a+b>c&&a+c>b&&b+c>a){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)cout<<"prostokatny"<<endl;
			else{
				long long x,y,z;
				z=max(a,b);
				z=max(z,c);
				if(z!=a)y=a;
				else if(z!=b) y=b;
				else y=c;
				if(z!=b&&y!=b)x=b;
				else if(z!=c&&y!=c)x=c;
				else x=a;
				if(x*x+y*y<z*z)cout<<"rozwartokatny"<<endl;
				if(x*x+y*y>z*z)cout<<"ostrokatny"<<endl;
			}
		
		}
		else cout<<"brak"<<endl;
	}
return 0;
}
