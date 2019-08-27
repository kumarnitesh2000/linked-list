#include<stdio.h>
/*varibles used are : 
  pindex,pivot,start,end :
 */
void qsort(int a[],int start,int end)
{
	int pindex;
	if(start>=end)
	{
		
		return ;
	}
	pindex=partition(a,start,end);
	qsort(a,start,pindex-1);
	qsort(a,pindex+1,end);
	
}
void swap(int *a,int *b)
{
	
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int partition(int a[],int start,int end)
{
	int i,pivot,pindex;
	pivot=a[end];	
	pindex=start;
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			swap(&a[i],&a[pindex]);
			pindex=pindex+1;
			
		}
		
	}
	swap(&a[pindex],&a[end]);//swap pivot with element at partition index
return pindex;	
}


//the main function :
int main()
{
	int a[30],n,i;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	qsort(a,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
}
