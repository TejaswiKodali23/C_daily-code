#include<stdio.h>
#define size 5
int main()
{
    int myarr[size];
    int i;
    int hasgoodneighbors=0;
    for(i=0;i<size;i++){
        printf("enter the value for element %d: ", i + 1);
        scanf("%d",&myarr[i]);
    }
    for(i=1;i<size-1;i++){
        if(myarr[i]==myarr[i-1]*myarr[i+1]){
            printf("this has good neighbors\n");
            hasgoodneighbors=1;
            break;

        }
    }
        if(hasgoodneighbors==0){
            printf("this does not have good neighbors\n");
        }
        return 0;
    
}        