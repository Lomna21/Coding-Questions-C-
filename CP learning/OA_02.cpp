    #include<bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int x;cin>>x;
    int temp=x;
    int Y;cin>>Y;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int total_cost = 0;
    int iter = 0;

    for (int i = 0; i < x; i++) {
        total_cost += A[iter];
        iter += Y;
    }

    int min_cost = total_cost;

    while (iter < N) {
        total_cost = total_cost - A[iter - x] + A[iter];
        cout<<total_cost;
        min_cost = std::min(min_cost, total_cost);
        iter += Y;
    }

    cout<<min_cost;
}
