#include<iostream>
using namespace std;

int main(){
	int t,c,k,w;
	cin>>t;
	while(t--){
		cin>>c>>k>>w;
		if(c*w<=k)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}

