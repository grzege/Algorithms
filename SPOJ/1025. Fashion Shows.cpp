#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int h=0,n,N[1000][2],p=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>N[i][0];
		}
		for(int i=0;i<n;i++){
			cin>>N[i][1];
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(N[i][0]<N[j][0]){
					p=N[i][0];
					N[i][0]=N[j][0];
					N[j][0]=p;
				}
			}
		}
			for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
					if(N[i][1]<N[j][1]){
						p=N[i][1];
						N[i][1]=N[j][1];
						N[j][1]=p;
				}
			}
		}
		for(int i=0;i<n;i++){
			h+=N[i][0]*N[i][1];
		}
		cout<<h<<endl;
	}
	return 0;
}
