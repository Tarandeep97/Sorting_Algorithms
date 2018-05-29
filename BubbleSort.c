#include<stdio.h>
#define n 10
main(){
	int i,a[n],j;
	printf("enter elements to be sorted:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;		
			}
			
		}
	}
	printf("\nelements after sorting:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
