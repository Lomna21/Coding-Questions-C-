 #include<stdio.h>
 
 int main(){
     int n,i,j;
     scanf("%d",&n);
     int temp=n;
     int size=2*n-1;
     int end = (2*n-1)-1;
     int start=0;
     int pattern[size][size];
     while(n!=0){
         for(i=start;i<=end;i++){
         for(j=start;j<=end;j++){
             if(i==start || j==end || i==end || j== start){
                pattern[i][j]=n;
             }
            

         }

     }
     start++;
     end--;
     n--;

     }

     for(i=0;i<2*temp-1;i++){
         for(j=0;j<2*temp-1;j++){
             printf("%d ",pattern[i][j]);
         }
         printf("\n");
     }
     
 }