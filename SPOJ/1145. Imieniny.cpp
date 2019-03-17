using namespace std;
#include<iostream>

int main(){
	int D,L,C,k=1;
	cin>>D;
	while(D--){
		cin>>L>>C;
		L--;
		if(L!=0){
			while(C>=2*L){
				C-=L;
			}
			while(L>=2*C){
				L=-C;
			}
			if(C==L)cout<<"NIE"<<endl;
			else cout<<"TAK"<<endl;
		}
		else cout<<"TAK";
	}
	return 0;
}
