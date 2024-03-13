#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'countPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY projectCosts
 *  2. INTEGER target
 */

int countPairs(vector<int> nums, int k) {
        int result = 0;
        std::unordered_map<int, int> dic;
        bool ans = false;
        
        for (int i : nums) {
            int rem1 = i - k;
            int rem2 = i + k;
            
            if (dic.find(rem1) != dic.end())
                result += dict[rem1];
                ans=true;
            if (dic.find(rem2) != dic.end())
                result += dict[rem2];
            
            if (dic.find(i) != dic.end())
                dic[i]++;
            else
                dic[i] = 1;
        }
        
        return result;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string projectCosts_count_temp;
    getline(cin, projectCosts_count_temp);

    int projectCosts_count = stoi(ltrim(rtrim(projectCosts_count_temp)));

    vector<int> projectCosts(projectCosts_count);

    for (int i = 0; i < projectCosts_count; i++) {
        string projectCosts_item_temp;
        getline(cin, projectCosts_item_temp);

        int projectCosts_item = stoi(ltrim(rtrim(projectCosts_item_temp)));

        projectCosts[i] = projectCosts_item;
    }

    string target_temp;
    getline(cin, target_temp);

    int target = stoi(ltrim(rtrim(target_temp)));

    int result = countPairs(projectCosts, target);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}