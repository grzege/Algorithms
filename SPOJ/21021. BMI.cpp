#include<iostream>
using namespace std;

int main(){
	int t,m[100];
	float BMI[100],w[100];
	cin>>t;
	string o[100];
	for(int i=0; i<t;i++){
		cin>>o[i]>>m[i]>>w[i];
	}
	for(int i=0; i<t;i++){
		BMI[i]=m[i]/((w[i]/100)*(w[i]/100));
	}
	cout<<endl<<"niedowaga"<<endl;
	for(int i=0; i<t;i++){
		if(BMI[i]<18.5)cout<<o[i]<<endl;
	}
	cout<<endl<<"wartosc prawidlowa"<<endl;
	for(int i=0; i<t;i++){
		if(BMI[i]>=18.5&&BMI[i]<25)cout<<o[i]<<endl;
	}
	cout<<endl<<"nadwaga"<<endl;
	for(int i=0; i<t;i++){
		if(BMI[i]>=25)cout<<o[i]<<endl;
	}
	return 0;
}
