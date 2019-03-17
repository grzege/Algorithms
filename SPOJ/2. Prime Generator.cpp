#include <cstdio>
int main(){
    bool P[32000];
    for(int i=2;i<32000;i++){
        P[i]=true;
    }
    P[0]=false;
    P[1]=false;
    for(int i=2;i<=179;i++){
        if (P[i]==true){
            for(int j=i*i;j<32000;j+=i) P[j]=false;
        }
    }
    int t,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&m);
        bool P2[m-n+1];
        for(int x=0;x<=m-n;x++)P2[x]=true;
        for(int x=2;x<32000;x++){
        	if(P[x]&&x<m){
        		//printf("dla %d:\n",x);
        		if(n%x==0&&n!=x)P2[0]=false;
        		for(int y=(n/x+1)*x;y<=m;y+=x){
        			if(y==x)continue;
        			//printf("%d ",y+n);
        			P2[y-n]=false;
				}
				//printf("\n");
			}
		}
		for(int x=0;x<=m-n;x++)if(P2[x]&&x+n>=2)printf("%d\n",x+n);
    }
    return 0;
}
