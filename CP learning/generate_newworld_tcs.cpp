#include<bits/stdc++.h>
using namespace std;

int main() {
    std::string languageSequence;
    std::getline(std::cin, languageSequence);
    std::string inputString;
    std::getline(std::cin, inputString);

    std::unordered_map<int,int> charPosition;
    for (int i = 0; i < languageSequence.length(); ++i) {
        charPosition[languageSequence[i]] = i;
    }

    std::string result;
    for (char c : inputString) {
        if (std::isspace(c)) {
            result += c;
        } else {
            char charLower = std::tolower(c);
            if (charPosition.find(charLower) != charPosition.end()) {
                int charPos = charPosition[charLower];
                result += languageSequence[charPos];
            }
        }
    }

    bool hasDuplicates = std::unordered_set<int>(result.begin(), result.end()).size() != result.length();
    if (!hasDuplicates) {
        std::cout << result << std::endl;
    } else {
        std::cout << "New Language Error" << std::endl;
    }

    return 0;
}