void solve(){
    int n,m;cin>>n>>m;
    int arr [n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int count=0;
            bool flag = false;
                int sub = INT_MIN;
                if(i-1>=0 && j > -1){
                    // flag = false;
                    if(arr[i][j]>arr[i-1][j]){
                        count++;
                        flag = true;
                        sub = arr[i-1][j];
                    }else{
                        break;
                    }
                }
                if(i+1 <= n-1 && j > -1){
                    // flag = false;
                    if(arr[i][j]>arr[i+1][j]){
                        count++;
                        flag = true;
                        sub = max(sub,arr[i+1][j]);
                    }else{
                        break;
                    }
                }
                if(i > -1 && j - 1 > -1){
                    // flag = false;
                    if(arr[i][j]>arr[i][j-1]){
                        count++;
                        flag = true;
                        sub = max(sub,arr[i][j-1]);
                    }
                    else{
                        break;
                    }
                }
                if(i > -1 && j+1 <= m-1){
                    // flag = false;
                    if(arr[i][j]>arr[i][j+1]){
                        count++;
                        flag = true;
                        sub = max(sub,arr[i][j+1]);
                    }
                    else{
                        break;
                    }
                }
                if(flag){
                    arr[i][j]=sub;
                }       
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}