#include<iostream>
using namespace std;

int main(){
	int n,l,dz=0;
	cin>>n;
	while(n--){
		cin>>l;
		for(int i=1;i<=l;i++){
			if(l%i==0)dz++;
		}
	if(dz==2)cout<<"TAK"<<endl;
	if(dz!=2)cout<<"NIE"<<endl;
	dz=0;
	}
	return 0;
}
