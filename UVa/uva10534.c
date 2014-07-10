#include <stdio.h>
int main(){
	int n,i,j;
	int a[10000],b[10000],c[10000];
	while(scanf("%d",&n)!=EOF){
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i] = 1;
		for(j=0;j<i;j++){
			if(a[i]>a[j] && ( b[i] < b[j] +1 )){
				b[i]=b[j]+1;
			}

		}
	}
	for(i=n-1;i>=0;i--){
		c[i] = 1;
		for(j=n-1;j>i;j--){
			if(a[i]>a[j] && ( c[i] < c[j] +1 )){
				c[i]=c[j]+1;
			}

		}
	}
	int d,max=1;
	for(i=0;i<n;i++){
		if( b[i]==1 || c[i] == 1)
			d = 1;
		else
			d = b[i] + c[i] -1;

		if(max< d)
			max = d;
	}
	printf("%d\n",max);
}
}