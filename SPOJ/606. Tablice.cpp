#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n[100],k;
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>n[i];	
		}
	while(k--){
		cout<<n[k]<<' ';
	}
	cout<<endl;
	}
	return 0;
}
