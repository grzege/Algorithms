#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		int z=0,kk;
		cin>>n;
		for(int k=1;k>=1;k++){
			if(pow(5,k)>=n){
			kk=k;
			break;	
			}
		}
		for(int i=1;i<=kk;i++){
			z+=floor(n/pow(5,i));
		}
		cout<<z<<endl;
	}
	return 0;
}
