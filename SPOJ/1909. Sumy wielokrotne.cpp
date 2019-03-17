#include<iostream>
using namespace std;

int main(){
	long long x[10000],p=0,p1=0,s=0,ss=0,S[10000];
	while(cin>>x[0]){
		if(x[0]!=0){
			for(int i=1;i>=1;i++){
				cin>>x[i];
				if(x[i]==0){
					p=i;
					break;
				}
			}
		}
		for(int i=0;i<=p;i++){
			s+=x[i];
		}
		cout<<s<<endl;
		S[p1]=s;
		p1++;
		s=0,p=0;
	}
	for(int i=0;i<=p1;i++){
		ss+=S[i];
	}
	cout<<ss;
	return 0;
}
