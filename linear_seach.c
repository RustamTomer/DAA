#include <stdio.h>
int search(int A[], int v, int n){
    int i=0;
    int found=0;
    for(i=0;i<n;i++){
        if(A[i]==v){
            printf("Element is found at %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Not found");
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int val;
    scanf("%d",&val);
    search(A,val,n);

    return 0;
}
