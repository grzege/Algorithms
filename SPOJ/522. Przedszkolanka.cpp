#include<iostream>
using namespace std;

int NWD(int a, int b)
{
 while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowuj¹ wynik NWD(a,b)
}

int main(){
	int a,b,N;
	cin>>N;
	while(N--){
		cin>>a>>b;
		cout<<a/NWD(a,b)*b<<endl;
		}
	return 0;
}
