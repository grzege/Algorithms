#include<iostream>
#include<string>
using namespace std;

int main(){
	int t,l;
	cin>>t;
	while(t--){
		string w;
		cin>>w;
		l=w.length();
		cout<<w.substr(0,l/2)<<endl;
	}
	return 0;
}
