#include<iostream>
using namespace std;

unsigned long long NWD(unsigned  long long a,unsigned long long b)
{
    unsigned long long c;
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}


int main(){
	unsigned long long l1,m1,l2,m2,l3,m3,d1,d2,d3;
	char x,y;
	cin>>l1>>x>>m1>>l2>>y>>m2;
	cout<<l1<<"/"<<m1<<" "<<"+"<<" "<<l2<<"/"<<m2<<" "<<"="<<" ";
	d1=NWD(l1,m1);
	l1/=d1;
	m1/=d1;
	d2=NWD(l2,m2);
	l2/=d2;
	m2/=d2;
	l3=((l1*m2)+(l2*m1));
	m3=(m1*m2);
	d3=(NWD(l3,m3));
	l3/=d3;
	m3/=d3;
	cout<<l3<<"/"<<m3;
	return 0;
}
