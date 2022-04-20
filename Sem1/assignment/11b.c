#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p;
    p=fopen("mark.txt","r");
    int a[100],q[100],l[100],e[100],i,t[100],m;
    char s[100][50],ch;
    fseek(p,37,0);
    for(i=0;i>=0;i++)
    {
            ch=fgetc(p);
            if(ch==EOF)
            {
                m=i;
                break;
            }
            else
            {
            fseek(p,-1,1);
            fscanf(p,"%d",&a[i]);
            fscanf(p,"%s",s[i]);
            fscanf(p,"%d",&q[i]);
            fscanf(p,"%d",&l[i]);
            fscanf(p,"%d",&e[i]);
            }
    }
    fclose(p);
    p=fopen("total.txt","w");
    for(i=0;i<m-1;i++)
    {
        t[i]=q[i]+l[i]+e[i];
    }
    fprintf(p,"Student ID\tStudent Name\tTotal\n");
    for(i=0;i<m-1;i++)
    {
        fprintf(p,"%d\t\t",a[i]);
        fprintf(p,"%s\t\t",s[i]);
        fprintf(p,"%d\t\t",t[i]);
        fprintf(p,"\n");
    }
}

