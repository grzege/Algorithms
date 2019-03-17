#include<iostream>
using namespace std;

int main(){
	char s;
	int Z[10],k,a,b;
	while(cin>>s){
		if(s=='z'){
		cin>>k;
		cin>>Z[k];	
		}
		else if(s=='*'){
			cin>>k;
			a=Z[k];
			cin>>k;
			b=Z[k];
			cout<<a*b<<endl;
		}
		else if(s=='/'){
			cin>>k;
			a=Z[k];
			cin>>k;
			b=Z[k];
			cout<<a/b<<endl;
		}
		else if(s=='+'){
			cin>>k;
			a=Z[k];
			cin>>k;
			b=Z[k];
			cout<<a+b<<endl;
		}
		else if(s=='-'){
			cin>>k;
			a=Z[k];
			cin>>k;
			b=Z[k];
			cout<<a-b<<endl;
		}
		else if(s=='%'){
			cin>>k;
			a=Z[k];
			cin>>k;
			b=Z[k];
			cout<<a%b<<endl;
		}
	}
	return 0;
}
