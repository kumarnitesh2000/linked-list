#include<stdio.h>
int a[10][10]={{0,8,0,0,0,4,1},{7,6,0,0,0},{0,6,8,0,0,9,7}};
void main()
{
    int i,j,b[20][20],m,val;
    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
           printf("%d",a[i][j]);

        }
        printf("\n");
    }
    m=0;
for(i=0;i<10;i++)
{

    for(j=0;j<10;j++)
    {
        if(a[i][j]!=0)
        {
            val=a[i][j];
            b[m][0]=i;
            b[m][1]=j;
            b[m][2]=val;
            m++;


        }
    }
}
for(i=0;i<m;i++)
{
    printf("[");
    for(j=0;j<3;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("]");
    printf("\n");
}
}
