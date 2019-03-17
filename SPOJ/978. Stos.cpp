#include<iostream>
using namespace std;

int main(){
	int s, S[11], k, f=0;
	char x;
	while(cin>>x){
		if(x=='+'){
			cin>>s;
			if(f>9){
				cout<<":("<<endl;
			}
			else{
				S[f]=s;
				f++;
				k=1;
				cout<<":)"<<endl;
			}
		}
		else if(x=='-'){
			if(k==1){
				f--;
				k=0;
			}
			if(f<0){
				cout<<":("<<endl;
				f=0;
			}
			else{
			cout<<S[f]<<endl;
			f--;
			}
		}
	}
	return 0;
}
