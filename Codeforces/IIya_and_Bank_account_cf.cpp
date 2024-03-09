#include<bits/stdc++.h>
using namespace std;
/*int main(){
    long int n;cin>>n;
    if(n>0){
        cout<<n<<endl;
    }
    else{
            list<int> l;   
            int r1,r2;
            n=abs(n);
            int temp=n;
            int real_no=n;
            int i=0;
            r1=n%10;
            n=n/10;
            r2=n%10;
            if(r1>=r2){
                cout<<-n;
            }
            else{
                while(temp>0){
                    int r=temp%10;
                    l.insert(l.begin(),r);
                    temp=temp/10;
                    i++;
                }
                auto it=l.begin();
                while(true){
                    it=find(it,l.end(),r2);
                    it++;it++;
                    if(it==l.end()){
                        it--;it--;
                        l.erase(it);
                        break;
                    }
                    else{
                        it--;it--;
                    }
                }
                if(real_no!=10){
                    cout<<"-";
                }
                for(int ite : l){
                    cout<<ite;
                }
            }
        
    }
}*/
int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << endl;
    }
    return 0;
}