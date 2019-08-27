/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//insertion sort
#include <stdio.h>

int main()
{
    int n,a[10],i,j,value;
    printf("entr the size of the array : ");scanf("%d",&n);
    printf("entr the elemnts of the array  :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        value=a[i];
        while(j>0 && a[j-1]>value)
        {
            if(a[j-1]>a[j])
            {
                value=a[j];
                a[j]=a[j-1];
                a[j-1]=value;
            }
            j--;
        }
    }
    printf("after the sorting is done : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    

    return 0;
}


