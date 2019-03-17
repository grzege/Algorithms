#include<iostream>
using namespace std;

int main(){
	double a,b,c;
	while(cin>>a){
		cin>>b>>c;
		if(a+b>c&&b+c>a&&a+c>b&&a>0&&b>0&&c>0)cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
