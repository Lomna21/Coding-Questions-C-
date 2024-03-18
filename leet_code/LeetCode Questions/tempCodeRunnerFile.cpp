
                vector<int> v(2);
                v[0]=intervals[i][0];
                v[1]=intervals[i+1][1];
                ans.push_back(v);
                // cout<<v[0]<<" "<<v[1]<<" ";
                count++;
                // ans[i][1]=intervals[i+1][1];
            }
            else{
                if(ans[count-1][1]!=intervals[i][1] ){
                    vector<int> v(2);
                    v[0]=intervals[i][0];
                    v[1]=intervals[i][1];
                    ans.push_back(v);
                    // cout<<v[0]<<" "<<v[1]<<" ";
                    count++;