#include<iostream>
using namespace std;
int main(){
    int age;
    int totalage=0;
    int numberofpeopleentered=0;
    cout<<"enter age or -1 to quit "<<endl;
    cin>>age;
    while(age!=-1)
    {totalage=age+totalage;
        numberofpeopleentered++;
    }
    cout<<"enter another person age or -1 to quit"<<endl;
    cin>>age;
    cout<<"total people entered"<<numberofpeopleentered;cout<<""<<endl;
    cout<<"average age"<<totalage/numberofpeopleentered<<endl;
}