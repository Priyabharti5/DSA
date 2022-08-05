/*
Q. Write a program to input an array of 10 integers from user and 
remove last element and display all the element. 

*/
#include<stdio.h>
int main(){
  int n=10,i=0;     //n is the size of array 
  int arr[n];       // array to store the input 
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);   //Taking iput from user   
  
  //Deleting last element
  arr[n-1]=0;    
  n--;
  
  for(i=0;i<n;i++)
    printf("%d ", arr[i]);   
  return 0;
  
}
