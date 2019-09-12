//tower of hanoi problem : : : :
//through recursion : : : : 
#include<stdio.h>
void toh(int n,char A,char 	B,char C)
{
	if(n==1)
	{
		printf("\n 1 th plate move from %c to %c \n",A,C);
		
		return ;
	}
	toh(n-1,A,C,B);
	printf("\n %d th plate move from %c to %c \n",n,A,C);
	toh(n-1,B,A,C);
}
void main()
{
	int n;
	char A,B,C;
	printf("Entr the no. of plates :");scanf("%d",&n);
	printf("Entr the character of each rods in tower of hanoi problem :");
	
	toh(n,'A','B','C');
}
