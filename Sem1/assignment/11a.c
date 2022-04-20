#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p;
    int a[100],q[100],l[100],e[100],n,i;
    char s[100][100];
    p=fopen("mark.txt","w");
    if(p==NULL)
    {
        printf("Failure");
        exit(0);
    }
    printf("Enter number of entries...");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Student ID:");
        scanf("%d",&a[i]);
        printf("Enter the Student Name:");
        scanf("%*c%[^\n]s",s[i]);
        printf("Enter the Quiz Score:");
        scanf("%d",&q[i]);
        printf("Enter the Lab Score:");
        scanf("%d",&l[i]);
        printf("Enter the Exam Score:");
        scanf("%d",&e[i]);
    }
    fprintf(p,"Student ID\tStudent Name\tQuiz\tLab\tExam\n");
    for(i=0;i<n;i++)
    {
        fprintf(p,"%d\t\t",a[i]);
        fprintf(p,"%s\t\t",s[i]);
        fprintf(p,"%d\t",q[i]);
        fprintf(p,"%d\t",l[i]);
        fprintf(p,"%d\t",e[i]);
        fprintf(p,"\n");
    }
    fclose(p);
}
