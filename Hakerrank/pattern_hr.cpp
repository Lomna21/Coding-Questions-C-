 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int n,i,j;
     cin >> n;
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
     for(i=start;i<=end;i++){
         for(j=start;j<=end;j++){
             cout<<pattern[i][j];
         }
     }
     
 }