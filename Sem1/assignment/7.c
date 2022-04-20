#include<stdio.h>
void main()
{
    int i,a[10]={5000,10000,2000,8000},b[10],m=0,n=0,max=0,min=0,q,w;
    char s[50][50]={"MP3 Player","WII","DVD PLayer","Digital Camera"};
    printf("Product\t\tPrice(Rs)\n");
    for(i=0;i<=3;i++)
    {
        if(i==1)
        {
            printf("%s\t\t%d\n",s[i],a[i]);
        }
        else
        {
            printf("%s\t%d\n",s[i],a[i]);
        }
    }
    printf("Enter number of MP3's sold:");
    scanf("%d",&b[0]);
    printf("Enter number of WII's sold:");
    scanf("%d",&b[1]);
    printf("Enter number of DVD Player's sold:");
    scanf("%d",&b[2]);
    printf("Enter number of Digital Camera's sold:");
    scanf("%d",&b[3]);
    printf("Product\t\tPrice(Rs)\tQuantity\tTotal Price\n");
    for(i=0;i<=3;i++)
    {
        if(i==1)
        {
            printf("%s\t\t%d\t\t%d\t\t%d\n",s[i],a[i],b[i],a[i]*b[i]);
        }
        else
        {
            printf("%s\t%d\t\t%d\t\t%d\n",s[i],a[i],b[i],a[i]*b[i]);
        }
        m=m+(a[i]*b[i]);
        n=n+b[i];
        if(i==0)
        {
            max=b[i];
            min=b[i];
        }
        else
        {
            if(b[i]>max)
            {
                max=b[i];
                q=i;
            }
            if(b[i]<min)
            {
                min=b[i];
                w=i;
            }
        }
    }
    printf("Total:%d\t%d\n",n,m);
    printf("Product sold most:%s(%d)\n",s[q],max);
    printf("Product sold least:%s(%d)\n",s[w],min);
}
