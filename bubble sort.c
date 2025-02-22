//bubble sort
//check adjacent elemets
//best time com=0(n) if sorted and worst case if o(n2)
#include<stdio.h>
void bubblesort(int* arr,int n){
	//sorted=0
	for(int i=0;i<n-1;i++){//if there are 5 elemenrs it takes 4 steps to sort 
		for(int j=0;j<n-i-1;j++){//-i because for every step element is sorted  to reduce time complexity
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
			
		}
		//if(sorted==0) return; time con=o(n)
	}
}
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
   	scanf("%d",&arr[i]);
   }
   bubblesort(arr,n);
   for(int i=0;i<n;i++){
   	printf("%d",arr[i]);
   }
      }
