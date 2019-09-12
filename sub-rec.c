#include<stdio.h>
#include<string.h>
void subset(char in[],char out[])
{
	int i,j;
	char s;
	//char sty[20]="the input is as :";
	//char std[20]="the output is as :";
	char input[20];
	if(strlen(in)==0)
	{
		puts(out);
		
		return;
	}
	s=in[0];
	j=0;
	for(i=1;i<strlen(in);i++)
	{
		input[j]=in[i];
		j++;
	}
	/*
	printf("the input goes to be this %s",input);
	printf("the output goes to be this %s",out);
*/
    
    puts(input);
    puts(out);
    //printf(" \n ");
	subset(input,out);
	subset(input,strcat(out,s));
}
void main()
{
	char input[20],output[20];
	printf("Enter the string sir : \n");
	gets(input);
	subset(input,"");
	
}
