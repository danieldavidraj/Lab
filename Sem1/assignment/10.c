#include<stdio.h>
void main()
{
    int a1,b1,c1,d1;
    FILE *p,*m,*n;
    p=fopen("file1.dat","r");
    m=fopen("file2.dat","r");
    n=fopen("file3.dat","r");
    int a[100],b[100],c[100],d[100],i,j,k=0;
    char ch;
    for(i=0;i>=0;i++)
    {
        fscanf(p,"%d",&a[i]);
        fseek(p,-1,1);
        ch=fgetc(p);
        if(ch=='\n')
        {
            a1=i;
            break;
        }
    }
    for(i=0;i<a1;i++)
    {
        fscanf(m,"%d",&b[i]);
        fseek(m,-1,1);
        ch=fgetc(m);
        if(ch=='\n')
        {
            break;
        }
    }
    for(i=0;i<a1;i++)
    {
        fscanf(n,"%d",&c[i]);
    }
    for(i=0;i<a1;i++)
    {
        for(j=0;j<a1;j++)
        {
            if(a[i]==b[j] || a[i]==c[j])
            {
                d[k]=a[i];
                k++;
            }
            else if(b[i]==c[j])
            {
                d[k]=b[i];
                k++;
            }
            else
            {

            }
        }
    }
    fclose(p);
    fclose(m);
    fclose(n);
    for(i=0;i<a1;i++)
    {
        for(j=0;j<a1;j++)
        {
            if(d[j]==d[j+1])
            {
                d[j+1]=d[j+2];
            }
        }
    }
    p=fopen("file4.dat","w");
    for(i=0;i<a1;i++)
    {
        fprintf(p,"%d\t",d[i]);
    }
}

