#include<iostream>
using namespace std;

int main(){
	int t,n[100],k;
	cin>>t;
	while(t--){
		int p=1;
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>n[i];
		}
		while(k--){
			if(k>0)cout<<n[p++]<<' ';
			else cout<<n[0];
		}
	cout<<endl;
	}
	return 0;
}
