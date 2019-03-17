#include<iostream>
#include<math.h>
using namespace std;

int main(){
	unsigned long long n;
	cin>>n;
	while(n!=1){
		if(n%2==0&&n>0)n/=2;
		else break;
	}
	if(n<=1)cout<<"TAK";
	else cout<<"NIE";
	return 0;
}
