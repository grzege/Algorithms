#include<iostream>
using namespace std;

int main(){
	int k, n ,f=0, N[100000];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	for(int c=0;c<n;c++){
		if(c+k<n){
		cout<<N[c+k]<<' ';
		f++;
		}
		}
		for(int o=0; o<n-f;o++){
			cout<<N[o]<<' ';
	}
}
