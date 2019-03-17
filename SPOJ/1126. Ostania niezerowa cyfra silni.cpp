#include<iostream>
using namespace std;

int main(){
	unsigned long long t,n;
	cin>>t;
	while(t--){
		int s=1;
		cin>>n;
		if(n%5==0)n++;
		for(int i=1;i<=n;i++){
			s*=i;
			while(s%10==0)s/=10;
			s%=1000;
		}
		s%=10;
		cout<<s<<endl;
	}
	return 0;
}
