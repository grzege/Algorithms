#include<iostream>
using namespace std;

int main(){
	int D,n;
	cin>>D;
	while(D--){
		int s=1;
		cin>>n;
		if(n>=10)cout<<0<<' '<<0<<endl;
		else{
			for(int i=1;i<=n;i++){
			s*=i;
			}
		if(s<=10)cout<<0<<" "<<s%10<<endl;
		else cout<<s%100/10<<" "<<s%10<<endl;
		}	
	}
	return 0;	
}
