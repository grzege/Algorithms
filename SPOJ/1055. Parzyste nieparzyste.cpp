#include<iostream>
using namespace std;

int main(){
	int t,n[100],k;
	cin>>t;
	while(t--){
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>n[i];
		}
		for(int z=1;z<=k;z++){
			if(z%2==0)cout<<n[z]<<' ';
		}
		for(int f=1;f<=k;f++){
			if(f%2!=0)cout<<n[f]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
