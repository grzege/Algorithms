#include<iostream>
using namespace std;

int main(){
	int k,a;
	string t;
	while(getline(cin,t)){
		for(int i=0;i>=0;i++){
			if(t[i]=='\0'){
				k=i;
				break;
			}
		}
		for(int i=0;i<k;i++){
			a=t[i];
			a+=3;
			if(a>90){
				a-=3;
				if(a==88)a=65;
				if(a==89)a=66;
				if(a==90)a=67;
			}
			if(a!=3&&a!=35)t[i]=(char)a;
		}
		for(int i=0;i<k;i++){
			cout<<t[i];
		}
		cout<<endl;
	}
	return 0;
}
