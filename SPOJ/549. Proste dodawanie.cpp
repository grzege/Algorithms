#include<iostream>
using namespace std;

int main(){
	int t,n,s=0,x;
	cin>>t;
		while(t--){
			cin>>n;
			for(int i=1;i<=n;i++){
				cin>>x;
				s+=x;
			}
		cout<<s<<endl;
		s=0;
	}
	return 0;
}
