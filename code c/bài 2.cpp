#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i,n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%c",&a[i]);
		a[i]=a[i]-32;
	}
	printf("%s",a);
	return 0;
}
