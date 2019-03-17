#include<iostream>
using namespace std;

int main(){
	int N, x, y;
	cin>>N;
	while(N--){
		cin>>x>>y;
		if(y+2==x){
			if(x%2==0&&y%2==0){
				cout<<x+y<<endl;
			}
			else{
				cout<<x+y-1<<endl;
			}
		}
		else if(x==y){
			if(x%2==0&&y%2==0){
				cout<<x+y<<endl;
			}
			else{
				cout<<x+y-1<<endl;
			}
		}
		else cout<<"No Number\n";
	}
	return 0;
}
