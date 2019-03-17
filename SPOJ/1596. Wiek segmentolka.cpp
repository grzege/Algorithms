#include<iostream>
using namespace std;

int main(){
	int s=0,t, n, N[10001];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>N[i];
		}
		for(int i=n;i>=1;i--){
		s+=N[i];
		}
		cout<<s+n-1<<endl;
		s=0;
	}
	return 0;
}
