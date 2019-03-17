#include<iostream>
using namespace std;

int main(){
	int t,s;
	char P[11];
	cin>>t;
	while(t--){
		for(int i=0;i<11;i++){
			cin>>P[i];
		}
		s=P[0]*1+P[1]*3+P[2]*7+P[3]*9+P[4]*1+P[5]*3+P[6]*7+P[7]*9+P[8]*1+P[9]*3+P[10]*1;
		if(s%10==0)cout<<"D"<<endl;
		else cout<<"N"<<endl;
	}
	return 0;
}
