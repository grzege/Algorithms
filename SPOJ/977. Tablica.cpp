#include<iostream>
using namespace std;

int main(){
	int a,t[200],n=0,m=0;
	while(cin>>a){
		t[n++]=a;
	}
	for(int i=n-1;i>=0;i--){
		cout<<t[i]<<' ';
	}
	return 0;
}
