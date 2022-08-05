/*
Q. Write a program to input an array of 10 integers from user and 
search for an item using linear search and print the message found or 
not found.if found,print the index.
-print total no of comparions done.
*/
#include<stdio.h>
int main(){
  int n=10,i=0,comparison=0,item;     //n is the size of array 
  int arr[n];       // array to store the input 
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);   //Taking iput from user   
  printf("Enter the number want to search\n");     
  scanf("%d",&item);      
  
  for(i=0;i<n;i++)
    {
      if(arr[i]==item){
        printf("Found at index %d\n",i);
        printf("Total number of comparison done is %d",comparison+1);
        return 0;   
      }
      else comparison++;
    }
  printf("NOT Found\n");
  return 0;
  
}
