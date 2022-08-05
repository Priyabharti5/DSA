/*
insertion sort
*/



#include <stdio.h>

  
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j,key;
    for (i = 1; i < n; i++)
    {   key=arr[i];
        j=i-1;     
        while(j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
            j--;   
        }
        arr[j+1]=key;
    }
}
int main(){
     int n;    
     printf("Number of Element\n");
     scanf("%d",&n);       
     int arr[n];   
     int i=0;   
     for(i=0;i<n;i++){
        scanf("%d",arr+i);  
     }
     bubbleSort(arr,n);     
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);   
     }
     return 0;
}
