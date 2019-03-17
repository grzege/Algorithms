#include<iostream>
using namespace std;

int main(){
	double x;
	cin>>x;
	while(x){
		double m=2,c=0,s=0;
		while(s<=x){
			s+=1/m;
			c++,m++;
		}
		cout<<c<<" card(s)"<<endl;
		cin>>x;
	}
	return 0;
}
