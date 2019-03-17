#include<iostream>
using namespace std;

int main(){
	int i;
	char l;
	string w;
	while(cin>>l){
		int k=1;
		getline(cin,w);
		i=w.length();
		for(int j=0;j<i;j++){
			w[j]=w[j+1];
		}
		for(int j=0;j<i;j++){
			if(w[j]==l){
				for(int f=j;f<i;f++){
					w[f]=w[f+1];	
				}
				k++;
				j--;
			}
		}
		for(int j=0;j<i-k;j++){
			cout<<w[j];
		}
	cout<<endl;
	}
	return 0;
}
