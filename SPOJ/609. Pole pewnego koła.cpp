#include<iostream>
using namespace std;

int main(){
	double r, d, S;
	double pi=3.141592654;
	cin>>r>>d;
	S=((r*r)-((d*d)/4))*pi;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<S;
	return 0;
}
