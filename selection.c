#include<stdio.h>

void swap(int *a,int * b){
	int temp =*a;
	*a=*b;
	*b= temp;
}

void selection_sort(int arr[],int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min = i;
		for (j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min = j;
			}
		swap(&arr[i],&arr[min]);
	}
	
}

int main(){
	int arr[5],n=5,i;
	printf("Enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("Sorted Array \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
