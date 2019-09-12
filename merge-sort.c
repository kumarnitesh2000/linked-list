#include<stdio.h>
void mergesort(int a[],int i,int j)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,j);	//merging of two sorted sub-arrays
	}
}
//merging the sortedd subarrays :
void merge(int a[],int i1,int j1,int j2)
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=j1+1;	//beginning of the second list
	k=0;
	
	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		if(a[i]<a[j])
		{
		
			temp[k]=a[i];
			k++;i++;
		}
		else
		{
		
			temp[k]=a[j];
			k++;j++;
		}
	}
	
	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=a[i++];
		
	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=a[j++];
		
	//Transfer elements from temp[] back to a[]
	/*for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];*/
		j=0;
		for(i=i1;i<=j2;i++)
		{
		
		a[i]=temp[j];
		j++;
	    }
}
//the main function :
int main()
{
	int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	mergesort(a,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
}
