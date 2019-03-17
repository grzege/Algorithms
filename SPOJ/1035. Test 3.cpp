#include<iostream>
using namespace std;

int main(){
	int x,x1,p=0,l=0;
	while(cin>>x){
		cout<<x<<endl;
		if(x1!=x&&p==1&&x==42)l++;
		if(l==3)break;
		x1=x;
		p=1;
	}
	return 0;
}
