#include <stdio.h>
#include <string.h>
void swap(int *a,int *b){	
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a=5;
	int fact=1;
	int arr[]={21,13,2,4,56,90,87};
	int i,j;
	for(i=1;i<=a;i++){
		fact*=i;
	}
	printf("%d\n",fact);
	for(i=0;i<7;i++){
		for(j=i+1;j<7;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=arr[i];
			}
		}
	}
	for(i=0;i<5;i++){
				printf("%d ",arr[i]);
	}
}
