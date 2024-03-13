int numberOfAlerts(int pM, int aT, vector<int>& numCalls)
{
    int ans(0);
    int n = numCalls.size();
    vector<int>pf = numCalls;
    for(int i=1;i<n;i++) pf[i] += pf[i-1];
    
    for(int i=pM-1;i<n;i++){
        int left_end = i-pM+1;
        int val = pf[i] - ((left_end>0)?pf[left_end-1]:0);
        int avg = val/pM;
        if(avg > aT) ans++;
    }
    return ans;
}