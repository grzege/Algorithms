#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int A, D, Ar[10000], Dr[10000],p;
	cin>>A>>D;
	while(A!=0&&D!=0){
		for(int i=0;i<A;i++){
			cin>>Ar[i];
		}
		for(int i=0;i<D;i++){
			cin>>Dr[i];
		}
		for(int i=0;i<A;i++){
			for(int j=i;j<A;j++){
				if(Ar[i]<Ar[j]){
					p=Ar[i];
					Ar[i]=Ar[j];
					Ar[j]=p;
				}
			}
		}
		for(int i=0;i<D;i++){
			for(int j=i;j<D;j++){
				if(Dr[i]<Dr[j]){
					p=Dr[i];
					Dr[i]=Dr[j];
					Dr[j]=p;
				}
			}
		}
		if(Ar[A-1]<Dr[D-2])cout<<"Y"<<endl;
		else cout<<"N"<<endl;
		cin>>A>>D;
	}
	return 0;
}
