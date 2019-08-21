#include<stdio.h>

void main()
{
 int buck[20],t,max,count=0,i,j,k,m,n,a[20],d,arr[20][20];
 //taking the array ,size and array input :
 printf("enter the size of the array :");scanf("%d",&n);
 printf("enter the element of the array :");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 //now note that the base of the no. is the total no. of rows :
 //as in decimal system : only 10 no. are there from 0-9
 //now see how times the main loop executes so see that largest digit no. : like 4395 has 4 digits
 //and hence main loop run 4 times :
 max=a[0];
 for(i=0;i<n;i++)
 {

     if(a[i]>max)
     {

         max=a[i];
     }
 }

 while(max>0)
 {
     count++;
     max=max/10;
 }
//hence count contains the largest no. of digits from the total elements :
//MAIN LOOP :
for(i=0;i<count;i++)
{
    d=1;
    //make the buck array which have 10 elements for the decimal no.
    for(j=0;j<10;j++)
    {
        buck[j]=0;

    }
    //now entr the elements in the matrix last   , second last , third last :
    for(j=0;j<n;j++)
    {
        t=(a[j]/d)%10;
        arr[t][buck[t]]=a[j];
        buck[t]++;
    }
    //now updating the array which we want tom make sorted :
    m=0;
    for(j=0;j<10;j++)
    {

        for(k=0;k<buck[j];k++)
        {

            a[m]=arr[j][k];
            m++;
        }
    }
    //now we require the second last or the third last elements hence :
    d=d*10;
}
//printing the sorted array :
printf("after the sorting is done : \n");
for(i=0;i<n;i++)
{

    printf("%d\n",a[i]);
}
}
