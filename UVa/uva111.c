#include <stdio.h>
int n;


int main(){
	int i,j,k;
	scanf("%d%d",&n,&k);
	int a[n],b[n],c[n+1][n+1];
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(k--){
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for(i=0;i<n+1;i++){
			for(j=0;j<n+1;j++){
				c[i][j]=0;
			}		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[i]==b[j]){
					c[i+1][j+1] = 1 + c[i][j];
				}
				else{
					if(c[i][j+1]>=c[i+1][j])
						c[i+1][j+1] = c[i][j+1];
					else
						c[i+1][j+1] = c[i+1][j];
//					c[i+1][j+1]=max(c[i][j+1],c[i+1][j]);
				}
			}
		}
		for(i=0;i<n+1;i++){
			for(j=0;j<n+1;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		printf("%d\n",c[n][n]);
//		int length = lcs(a,b,n-1,n-1);
	}
}