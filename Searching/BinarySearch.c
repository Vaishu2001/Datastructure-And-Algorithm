/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Binary search

#include  <stdio.h>

int BinarySearch(int[],int,int,int);
int main()
{
    int arr[]={9, 26, 33, 47, 53, 60, 75, 80, 86, 99};
    int item,location;
    printf("Enter the element to be searched\n");
           scanf("%d",&item);
           location = BinarySearch(arr,0,9,item);
           if((location>=0) &&(location<=10))
           {
               printf("element found at position %d\n",location);
           }
           else{
               printf("element not found");
           }
           return 0;
 }
 int BinarySearch(int a[],int start,int end,int item)
           {
               int mid;
               if(start<=end)
               {
                 mid=(start+end)/2;
                   if(item == a[mid])
                   {
                       return mid+1;
                   }
                   else if(item<a[mid])
                   {
                       return BinarySearch(a,start,mid-1,item);
                   }
                   else{
                       return BinarySearch(a,mid+1,end,item);
                   }
               }
               return -1;
           }
           
           
