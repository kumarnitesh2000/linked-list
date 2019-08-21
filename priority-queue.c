/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int col,row,f[10],r[10],a[10][10];
void insert(int value,int prior)
{
   if((r[prior]+1)%col==f[prior])
   {
       printf("sorry there is no space to insert :");
   }
   else
   {
       if(f[prior]==-1)
       {
           f[prior]=0;
           r[prior]=0;
       }
       else
       {
           r[prior]=(r[prior]+1)%col;
       }
   }
   a[prior][r[prior]]=value;
}
//display with the highest priority
void display(int prior)
{
    int i;
    for(i=f[prior];i!=r[prior];i=(i+1)%col)
    {
       printf("%d\n",a[prior][i]);
    }
    printf("%d\n",a[prior][i]);
}

void delete()
{
    if(f[0]==-1)
    {
        printf("under flow error");
    }
    else
    {
        if(f[0]==r[0])
        {
            f[0]=-1;r[0]=-1;
        }
        else
        {
            f[0]=(f[0]+1)%col;    
        }
        
    }
}
int main()
{
 int val,prior,i;
 printf("entr the no. of rows :");
 scanf("%d",&row);
  printf("entr the no. of rows :");
 scanf("%d",&col);
 for(i=0;i<row;i++)
 {
     f[i]=-1;r[i]=-1;
 }
 printf("enter the value and priority :");scanf("%d%d",&val,&prior);
 insert(val,prior);
 insert(22,prior);
 insert(25,prior);
 insert(24,prior);
 display(prior);
 delete();
 printf("\n\n\n\n");
 display(prior);
    return 0;
}



