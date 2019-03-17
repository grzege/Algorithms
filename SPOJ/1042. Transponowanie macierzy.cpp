#include<iostream>
using namespace std;

int main(){
	int m,n,T[200][200],p;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>T[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(m+1!=j)cout<<T[j][i]<<' ';
			else cout<<T[j][i];
			}
		cout<<endl;
		}
	return 0;
}
