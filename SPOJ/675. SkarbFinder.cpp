#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int D, N, a[100000], b[100000];
	cin>>D;
	while(D--){
		int Bpl=0,Bpo=0,Bz=0,Bw=0,pp,wz;
		cin>>N;
		for(int i=0;i<N;i++){
			cin>>a[i]>>b[i];
		}
		for(int i=0;i<N;i++){
			if(a[i]==0)Bpl+=b[i];
			if(a[i]==1)Bpo+=b[i];
			if(a[i]==2)Bz+=b[i];
			if(a[i]==3)Bw+=b[i];
		}
		if(Bpl!=Bpo){
			pp=max(Bpl,Bpo)-min(Bpl,Bpo);
			if(Bpl>Bpo)cout<<0<<' '<<pp<<endl;
			else cout<<1<<' '<<pp<<endl;
			if(Bz!=Bw){
				wz=max(Bz,Bw)-min(Bz,Bw);
				if(Bz>Bw)cout<<2<<' '<<wz<<endl;
				else cout<<3<<' '<<wz<<endl;
			}
		}
		else if(Bz!=Bw){
			wz=max(Bz,Bw)-min(Bz,Bw);
			if(Bz>Bw)cout<<2<<' '<<wz<<endl;
			else cout<<3<<' '<<wz<<endl;
		}
		else if(Bpl==Bpo&&Bz==Bw)cout<<"studnia"<<endl;
	}
	return 0;
}
