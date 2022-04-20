#include<stdio.h>
#include<string.h>
#include<time.h>
void main()
{
    int i,j,a[6],t[6],n,p[6]={10,15,20,30,5,25},sum=0;
    char s[6][10],s1[6][10]={"Apple","Orange","Mango","Pineapple","Lemon","Goa"};
    printf("\t\t\tBILL OPERATING SYSTEM\n\n");
    printf("1)Apple - Rs 10/-\n2)Orange - Rs 15/-\n3)Mango - Rs20/-\n4)Pineapple - Rs30/-\n5)Lemon - Rs5/-\n6)Goa - Rs25\-\n");
    printf("Enter the name of  the entity and quantity(press q will done)......\n");
    for(i=0;i>=0;i++)
    {
        printf("%d)",i+1);
        scanf("%s",s[i]);
        if((strcmp(s[i],"q"))==0)
        {
                break;
        }
        else
        {
            for(j=0;j<6;j++)
            {
                if((strcmp(s[i],s1[j]))==0)
                {
                        scanf("%d",&a[i]);
                        t[i]=p[j]*a[i];
                        sum=sum+t[i];
                        break;
                }
            }
            if(j==6)
            {
                printf("Invalid Entry,type again\n");
                i--;
            }
        }
    }
    n=i;
    printf("Entity\t\t\tQuantity\tPrice\n");
    for(i=0;i<n;i++)
    {
        printf("%d)%s\t\t",i+1,s[i]);
        if((strcmp(s[i],s1[3]))!=0)
        {
                printf("\t");
        }
        printf("%d\t\t%d\n",a[i],t[i]);
    }
    printf("\n\t\t\t\tTotal:%d",sum);
    time_t sec;
    time(&sec);
    printf("\n\t\t\t\tTime:%s",ctime(&sec));

}
