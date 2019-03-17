#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double a,b,c,k;
	cout.setf( ios::fixed);
	cout.precision(2);
	cin>>a>>b>>c;
	if(a!=0){
		k=(c-b)/a;
		k*=100;
		k=round(k);
		k/=100;
		cout<<k;
	}
	else if(a==0&&(c-b)!=0)cout<<"BR";
	else cout<<"NWR";

	return 0;
}
