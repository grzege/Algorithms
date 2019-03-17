#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	while(N--){
		int a, a1=0, b, b1=0, ab=0, ab1;
		cin>>a>>b;
		int lca = floor(log10(a)+1);
		for(int i=1;i<=lca;i++){
			a1+=floor(pow(10,lca-i))*(a%10);
			a/=10;
		}
		int lcb = floor(log10(b)+1);
		for(int i=1;i<=lcb;i++){
			a1+=floor(pow(10,lcb-i))*(b%10);
			b/=10;
		}
		ab1=a1+b1;
		int lcab = floor(log10(ab1)+1);
		for(int i=1;i<=lcab;i++){
			ab+=floor(pow(10,lcab-i))*(ab1%10);
			ab1/=10;
		}
		cout<<ab<<endl;
	}
	return 0;
}
