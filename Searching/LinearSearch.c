/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Linear Search 
#include <stdio.h>

int main()
{
    int LA[10]={10,4,3,2,8,9,4,5,7,1};
    int item,i,flag;
    printf("Enter the item");
    scanf("%d",&item);
    for(i=0;i<10;i++)
    {
        if(LA[i] == item)
        {
            flag=1;
            break;
        }
        else{
            flag=0;
        }
        
    }
    if(flag==1)
    {
        printf("Element found in %d position",i+1);
    }
    else{
        printf("Element not found");
    }
    

    return 0;
}
