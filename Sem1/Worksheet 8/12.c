#include <stdio.h>
#include <string.h>
void main(){
    char a[100],b[100],c[100],temp[100];
    printf("\nEnter the first String.\n");
    scanf("%s",a);
    printf("\nEnter the second String.\n");
    scanf("%s",b);
    printf("\nAlso enter the shuffled String.\n");
    scanf("%s",c);
    strcpy(temp,c);
    int alen,blen,clen,i,j,flg=0,flag=0;
    alen=strlen(a);
    blen=strlen(b);
    clen=strlen(c);
    strcpy(temp,a);
    strcat(temp,b);
    printf("temp : %s\n",temp);
    if(alen+blen==clen){
        flag=1;
    }
    if(flag){
        for(i=0;i<clen;i++){
            for(j=0;j<clen;j++){
                if(c[i]==temp[j]){
                    temp[j]='\0';
                    c[i]='\0';
                    flg=1;
                    break;
                }
            }
            if(!flg){
                printf("Invalid Shuffling.\n");
                break;
            }
        }
        if(i==clen){
            printf("Valid Shuffling.\n");
        }
    }
    else{
        printf("Invalid Shuffling.\n");
    }
}
