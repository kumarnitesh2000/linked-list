int sockMerchant(int n, int ar_count, int* ar) {
    
    int count,g,i,j,temp;
/*scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }*/
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                
            }
                
        }
        
    }
    i=0;
    j=0;
    while(i<n)
    {
        count=0;
        while(ar[i]==ar[j])
        {
         count++;
         j++;
        }
                g=g+count/2;
        i=i+count;
}
return g;
}
