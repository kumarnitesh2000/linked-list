/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,a[10],temp,count;
	printf("entr the size of array :");
	scanf("%d",&n);
	printf("\nentr the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-1-i;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	            
	        }
	            
	    }
	    
	}
	printf("agter the sorting :");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	i=0;
	j=0;
	while(i<n)
	{
	    count=0;
	    while(a[i]==a[j])
	    {
	     count++;
	     j++;
	    }
	    		 printf(" %d is %d pairs of socks : \n",a[i],count/2);      

	    i=i+count;
	}

    return 0;
}

