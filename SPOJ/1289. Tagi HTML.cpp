#include<iostream>
using namespace std;

int main(){
	string w;
	int l,k,x;
	while(getline(cin,w)){
		l=w.length();
		for(int i=0;i<l;i++){
			if(w[i]=='<'){
				cout<<'<';
				for(int j=i+1;j>=0;j++){
					if(w[j]=='>')break;
					x=toupper(w[j]);
					cout<<(char)x;
					k=j;
				}
				i=k;
			}
			else(cout<<w[i]);
		}
		cout<<endl;
	}
	return 0;
}
