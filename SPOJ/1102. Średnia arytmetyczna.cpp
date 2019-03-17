#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t,n,N[101];
	double s,ar,min,r0,r1;
	cin>>t;
	while(t--){
		s=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>N[i];
			s+=N[i];
		}
		ar=s/n;
		for(int i=1;i<n;i++){
			if(i==1){
			r0=fabs(N[0]-ar);
			min=N[0];
			}
			r1=fabs(N[i]-ar);
			if(r1<r0){
				r0=r1;
				min=N[i];
			}
			
		}
		cout<<min<<endl;
	}
	return 0;
}
