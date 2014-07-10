#include <stdio.h>
int b[10000],c[10000];
int main(){
	int flag0 = 1 , flag1=1;
	int a,i,j,k,l=0;
	scanf("%d",&a);

	while(flag0){
		i=0;
		flag1 = 1;l++;
		while(flag1){
			b[i] = a;
			scanf("%d",&a);
			i++;
			if(a==-1)
				flag1 = 0;
		}
		
		for(j=0;j<i;j++){
			c[j]=1;
			for(k=0;k<j;k++){
				if(b[k]>b[j]&&c[j]<c[k]+1){
					c[j] = c[k]+1;
				}
			}
		}
		printf("Test #%d:maximum possible interceptions: %d\n",l,c[i-1]);
		scanf("%d",&a);
		if(a==-1){
			flag0 = 0;
		}
	}
}