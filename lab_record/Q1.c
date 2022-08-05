/*
Q. Write a program to input an array of 10 integers from user and display all the elements
in reverse order of input.

*/
#include<stdio.h>
int main(){
  int n=10,i=0;     //n is the size of array 
  int arr[n];       // array to store the input 
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);   //Taking iput from user   
  
  for(i=n-1;i>=0;i--)
    printf("%d ", arr[i]);   // Display in reverse order
  return 0;
  
}
