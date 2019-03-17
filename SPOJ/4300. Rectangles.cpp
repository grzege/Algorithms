#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,l=0;
	cin>>n;
	l+=n;
	for(int i=1;i<=n;i++){
		for(int j=2;j*j<=i;j++){
			if(i%j==0)l++;
		}
	}
	cout<<l;
	return 0;
}
