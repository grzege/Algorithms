#include<iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
	  	int *x = new int;
	  	cin>>a>>b;
		for (int i = a; i < b; i++) x = 1;
		for (int i = a; i < b; i++){
	    if (x){
	    	for (int j = i; j*i < b; j++) x = 0;
			}
		}
	    for (int i = a; i < b; i++)
	    if (x){
	      cout << i<<endl;
		}
	}
	return 0;
}
