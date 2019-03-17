#include<iostream>
using namespace std;

int main(){
	int N,p=0, tp[10000];
	cin>>N;
	N++;	
	for(int f=0;f<N;f++){
		string t;
		getline(cin,t);
		for(int i=97;i<=122;i++){
			for(int j=0;j<t.length();j++){
				if(t[j]==i)tp[i]++;
			}
		}
		for(int i=65;i<=90;i++){
			for(int j=0;j<t.length();j++){
				if(t[j]==i)tp[i]++;
			}
		}
	}
	for(int g=97;g<=122;g++){
		if(tp[g]>0)cout<<(char)g<<' '<<tp[g]<<endl;
	}
	for(int g=65;g<=90;g++){
		if(tp[g]>0)cout<<(char)g<<' '<<tp[g]<<endl;	
	}
	return 0;
}
