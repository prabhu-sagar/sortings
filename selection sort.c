//selection sort
//taking the min index
//best and worst case time comp is o(n2)
#include<stdio.h>
void selectionsort(int* arr,int n){
	for(int i=0;i<n-1;i++){
		int minindex=i;//chose min index as 1 st element
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;//taking that index 
			}
		}
		int temp=arr[minindex];//swapping the min element you found with the arr[i]
		arr[minindex]=arr[i];
		arr[i]=temp;
	}
}
int main(){
int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
   	scanf("%d",&arr[i]);
   }
   selectionsort(arr,n);
   for(int i=0;i<n;i++){
   	printf("%d",arr[i]);
   }
      }
