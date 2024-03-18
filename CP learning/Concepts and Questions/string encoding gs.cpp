#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int len=s.size();
    vector<char> v;
    string rev_string[len];
    //reverse the string
    for(int i=0;i<len;i++){
        rev_string[i]=s[len-1-i];
        cout<<rev_string[i];
        // int ch=rev_string[i] - '0';
        // v.push_back(rev_string[i]);


    }cout<<endl;
    // for(int i=0;i<len;){
        
    //     char ch1 = rev_string[i];  
        
    //     string ch2=rev_string[i];  
    //     int intdata2 = stoi (ch2);
    //     //int num = intdata1*10 + intdata2;
    //     if(num==32 || (num >=65 && num<=99)){
    //         cout<<char(num);
    //         i=i+2;
    //         continue;
    //     }
    //     string ch3=rev_string[i];  
    //     int intdata3 = stoi (ch3);
    //     int new_num = intdata1*100 + intdata2*10 + intdata3;
    //     if(num>=100 && num<=122){
    //         cout<<char(num);
    //         i=i+3;
    //         continue;
    //     }
          
    // }
    string decodedString;
    for (size_t i = 0; i < len;) {
        // Extract two digits at a time and convert them to an integer
        int num = std::stoi(s.substr(i, 2));

        // Convert the integer to its corresponding ASCII character
        char character = static_cast<char>(num);

        // Append the character to the decoded string
        if(character == ' ' || (character >= 'a' && character <='z') || (character >='A' && character <='Z')){
            decodedString += character;
            i+=2;
            continue;
        }
        // Extract three digits at a time and convert them to an integer
        int num = std::stoi(s.substr(i, 3));

        // Convert the integer to its corresponding ASCII character
        char character = static_cast<char>(num);

        // Append the character to the decoded string
        if(character == ' ' || (character >= 'a' && character <='z') || (character >='A' && character <='Z')){
            decodedString += character;
            i+=3;
            continue;
        }

        

    }

    std::cout << "Decoded String: " << decodedString << std::endl;
}