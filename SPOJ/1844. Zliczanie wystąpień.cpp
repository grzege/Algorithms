#include<iostream>
using namespace std;

int main(){
	int t[10000];
	while(cin>>t[0]){
		int l=0;
		cin>>t[1];
		for(int i=2;i<t[1]+2;i++){
			cin>>t[i];
		}
		for(int i=2;i<t[1]+2;i++){
			if(t[i]==t[0])l++;
		}
		cout<<l<<endl;
	}
	return 0;
}
