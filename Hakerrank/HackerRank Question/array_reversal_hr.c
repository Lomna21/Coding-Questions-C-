#include<stdio.h>
int main(){
    int n,i;
    int l=n;
    scanf("%d",&n);
    int ar[n];
    int ar_rev[l];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        ar_rev[l-1]=ar[i];
        l--;
    }
    for(i=0;i<n;i++){
        printf("%d ",ar_rev[l]);
    }

    
}