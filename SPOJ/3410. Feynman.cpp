#include<iostream>
using namespace std;

int main(){
	int x,r=0;
	cin>>x;
	while(x){
		for(int i=1;i<=x;i++){
			r+=(i*i);
		}
		cout<<r<<endl;
		cin>>x;	
		r=0;
	}
	return 0;
}
