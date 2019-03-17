#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int o1,o=0,d=86400,t,n,L[10000],N[10000], M;
		cin>>n>>M;
		for(int i=0;i<n;i++){
			cin>>N[i];
		}
		for(int k=0;k<n;k++){
			L[k]=d/N[k];
		}
		for(int j=0;j<n;j++){
			o+=L[j];
		}
		o1=o/M;
		if(o%M!=0)o1++;
		cout<<o1<<endl;
	}
	return 0;
}
