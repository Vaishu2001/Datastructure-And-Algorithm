/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include  <stdio.h>
void display(int arr[],int size)
    {
     int i;
    for(i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }
}
int main()
{
    int a[]={8,9,5,6,3,2,4,10,7,1};
    int size=sizeof(a)/sizeof(a[0]);
    printf("array elements before sorting\n");
    display(a,size);
    int i,j,temp;
    for(i=0;i<(size-1);i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\narray elements after sorting\n");
    display(a,size);
    return 0;
}
