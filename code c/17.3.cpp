/*#include <stdio.h>
int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("max=%d",max);
}*/
/*#include <stdio.h>
int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(i=0;i<10;i++){
		if(a[i]<min){
			min=a[1];
		}
	}
	printf("min=%d", min);
return 0;
}*/
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
