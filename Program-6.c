//INPUT -3 1 2 3
//OUTPUT- Total number of even numbers and odd numbers in the array are 1 and 2
#include<stdio.h>
int main()
{
 int arr[10];
 int i, num, evennum, oddnum;
 // Reads size and elements in array
 scanf("%d",&num);
 //printf("Enter %d elements in array: ", num);
 //printf("Enter the elements");
 for(i=0;i<num;i++)
 {
 scanf("%d",&arr[i]);
 }
 evennum = 0; // Assuming 0 even numbers
 oddnum = 0; // Assuming 0 odd numbers
 for(i=0; i<num; i++)
 {
 /* If the current element of array is evennumber then increment evennumber count */
 if(arr[i]%2 == 0)
 {
 evennum++;
 }
 else
 {
 oddnum++; // increment oddnumber count
 }
}
printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum );
return(0);
}