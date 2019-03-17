#include<iostream>
using namespace std;

int main(){
	int k;
	char w[1002];
	while(cin>>w){
		for(int i=1002;i>=0;i--){
			if(w[i]=='\0')k=i;
		}
		for(int i=k; i>=0;i--){
			if(w[i]!='\0')cout<<w[i];
		}
		cout<<endl;
	}
	return 0;
}
