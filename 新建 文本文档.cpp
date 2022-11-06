#include <stdio.h>
int main(){
	int x,i,n;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==a[i]) {
			printf("%d",i);
			return 0;
		}
	}
	printf("Not found");
	return 0;
}