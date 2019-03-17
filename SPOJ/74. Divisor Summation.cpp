#include<iostream>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		unsigned long long sn=0;
		scanf("%d",&n);
		for(int i=1;i*i<=n;i++){
			if(n%i==0&&n!=1){
				sn+=i;
				if(i!=1&&n/i!=i)sn+=n/i;	
			}
		}
		printf("%llu\n",sn);
	}
	return 0;
}
