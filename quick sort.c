//#include<stdio.h>
//int  partition(int arr[],int key,int start,int end){
//	while(start<end){
//		while(key>arr[start]){
//			start++;
//		}
//		while(key<arr[end]){
//			end--;
//		}
//		if(start<end){
//			int temp=arr[start];
//			arr[start]=arr[end];
//			arr[end]=temp;
//		}
//	
//	}
//	int temp=arr[end];
//	arr[end]=key;
//	key=temp;
//	return  end;
//}
//void quicksort(int arr[],int n,int start,int end){
//	if(start<end){
//		int p = arr[start];
//	  p=partition(arr,p,start,end);
//		 quicksort(arr,n,start,p-1);
//		 quicksort(arr,n,p+1,end);
//	}
//}
//int main(){
//       int n;
//       scanf("%d",&n);
//       int arr[n];
//       for(int i=0;i<n;i++){
//       	scanf("%d",&arr[i]);
//	   }
//	   quicksort(arr,n,0,n-1);
//	   for(int i=0;i<n;i++){
//	   	printf("%d ",arr[i]);
//	   }
//      }
#include<stdio.h>
int partition(int arr[],int key,int start,int end){
	while(start<end){
	
	while(key>arr[start]){
		start++;
	}
	while(key<arr[end]){
		end--;
	}
	if(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
	}
}
    int temp = key;
    key=arr[end];
    arr[end]=temp;
    return end;
}
void quicksort(int arr[],int n,int start,int end){
	if(start>=end){
		return;
	}
	int p = arr[end];
  p=partition(arr,p,start,end);
	quicksort(arr,n,start,p-1);
	quicksort(arr,n,p+1,end);
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  	scanf("%d",&arr[i]);
  }
  quicksort(arr,n,0,n-1);
  for(int i=0;i<n;i++){
  	printf("%d",arr[i]);
  }
      }
