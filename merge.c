#include<stdio.h>
int* merge(int a[],int m,int b[],int n,int *t)
{
	int i,temp,j;
	static int c[10];
//now write your main code

	/**/
	//START "
	
	*t=0;
	temp=0;
	//sorting of the first array : a
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	
	temp=0;
	//sorting of the second array :
		for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
			
			temp=b[j];
			b[j]=b[j+1];
			b[j+1]=temp;
		}
		}
	}
	//now both the array are sorted correctly:
	
	
	i=0;
	j=0;
	*t=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[*t]=a[i];
			i++;
			*t=*t+1;
		}
		else
		{
			c[*t]=b[j];
			j++;
			*t=*t+1;
		}
		
		
	}
	//
	while(i<m)
	{
		c[*t]=a[i];
		i++;
		*t=*t+1;
	}
	while(j<n)
	{
		
		c[*t]=b[j];
		j++;
		*t=*t+1;;
	}
	
	//END "


	return c;
	
}
void main()
{
	int *c,m,n,i,a[10],b[10],size;
	c=(int *)malloc(40*sizeof(int));
	printf("Enter the size of the both Array : \n");scanf("%d%d",&m,&n);
	printf("Enter the elements of the first array : \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of the second array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	c=merge(a,m,b,n,&size);
	printf("after the merging is done : \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",*(c+i));
	}
}
