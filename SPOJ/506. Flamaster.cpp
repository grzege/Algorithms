#include<iostream>
using namespace std;

int main(){
	int c,l,ll=3;
	string w;
	cin>>c;
	while(c--){
		cin>>w;
		l=w.length();
		for(int i=0;i<l;i++){
			if(w[i]==w[i+1]&&w[i]==w[i+2]&&w[i+1]==w[i+2]){
				for(int j=i+3;j<l;j++){
					if(w[j]==w[i]){
						ll++;	
					}
					else break;
				}
			cout<<w[i]<<ll;
			i+=ll-1;
			ll=3;
			}
			else{
				cout<<w[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
