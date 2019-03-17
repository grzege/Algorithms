#include<iostream>
using namespace std;

int main(){
	int a1,a2,a3,r1,r2;
	while(cin>>a1){
		cin>>a2>>a3;
		if(a1==0&&a2==0&&a3==0)break;
		r1=a2-a1;
		r2=a3-a2;
		if(r1==r2){
			cout<<"AP "<<a3+r1<<endl;
		}
		else if(a1!=0&&a2!=0&&a3!=0){
			if(a2/a1==a3/a2){
				cout<<"GP "<<a3*a2/a1<<endl;
			}
		}
		else break;
	}
	return 0;
}
