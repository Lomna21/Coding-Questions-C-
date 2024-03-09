#include<bits/stdc++.h>
using namespace std;
bool is_balance(string str){
    stack<int> s;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true){
                return false;
            }
            else if((s.top()=='(' && str[i]==')') || (s.top()=='[' && str[i]==']') || (s.top()=='{'&&str[i]=='}')){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return(s.empty()==true);
}
int main(){
    string str;
    cin>>str;
    cout<<is_balance(str);

}