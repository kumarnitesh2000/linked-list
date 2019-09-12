#include<stdio.h>
void delete()
{
	
}
void insert()
{
	
}
void main()
{
	char y;
	int c;
	int i,n,a[10];
	printf("Enter the size of the array :");scanf("%d",&n);
	printf("Enter the elements of the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 1(for insertng) and 2(for deleting) : ");
	
	scanf("%d",&c);
	
	do
{
	
	switch(c)
	{
		case 1:
			printf("inserting the element : ");
			break;
		case 2:
			printf("dekleting the elements sir : ");
			break;
		default:
			printf("invalid case :");
			break;
			
	}
	printf("entrt c for continue :");
	fflush(stdin);
	scanf("%c",&y);
}while(y=='c' || y=='C');
}
