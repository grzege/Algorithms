#include <cctype>
#include<iostream>
using namespace std;

int main(){
	char w[1002];
	while(cin.getline(w,1002)){
		int k,kk=1;
		for(int i=1002;i>=0;i--){
			if(w[i]=='\0')k=i;
		}
		for(int i=0;i<=k;i++){
			if(w[i]==' '){
				kk++;
				w[i+1]=toupper(w[i+1]);
				for(int j=i; j<=k; j++){
					if(w[j]&&w[j+1]==' ')i--;
					w[j]=w[j+1];
				}
			}
		}
		for(int i=0;i<=k-kk;i++){
			cout<<w[i];
		}
		cout<<endl;
	}
	return 0;
}
