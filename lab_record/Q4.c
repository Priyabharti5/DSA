/*
Bubble sort
*/



#include <stdio.h>
  
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
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
