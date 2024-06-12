#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s==t);
    }
};

int main()
{
    Solution solution;
    string s = "silent";
    string t = "listen";

    if (solution.isAnagram(s, t)) {
        cout << "The string is an anagram." << endl;
    } else {
        cout << "The string is not an anagram." << endl;
    }
    return 0;
}