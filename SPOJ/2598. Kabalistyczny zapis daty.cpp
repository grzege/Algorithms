#include<iostream>
using namespace std;

int main(){
	int l,s=0;
	string w;
	cin>>w;
	l=w.length();
	for(int i=0;i<l;i++){
		if(w[i]=='a')s+=1;
		if(w[i]=='b')s+=2;
		if(w[i]=='c')s+=3;
		if(w[i]=='d')s+=4;
		if(w[i]=='e')s+=5;
		if(w[i]=='f')s+=6;
		if(w[i]=='g')s+=7;
		if(w[i]=='h')s+=8;
		if(w[i]=='i')s+=9;
		if(w[i]=='k')s+=10;
		if(w[i]=='l')s+=20;
		if(w[i]=='m')s+=30;
		if(w[i]=='n')s+=40;
		if(w[i]=='o')s+=50;
		if(w[i]=='p')s+=60;
		if(w[i]=='q')s+=70;
		if(w[i]=='r')s+=80;
		if(w[i]=='s')s+=90;
		if(w[i]=='t')s+=100;
		if(w[i]=='v')s+=200;
		if(w[i]=='x')s+=300;
		if(w[i]=='y')s+=400;
		if(w[i]=='z')s+=500;
	}
	cout<<s;
}
