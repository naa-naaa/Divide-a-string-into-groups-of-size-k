#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string n = "";
        vector<string> op;
        int i = 0;
        int size = s.size();
        int t = 0;

        while (i < size) {
            t = 0;
            n = "";

            while (t < k && i < size) {
                n += s[i];
                t++;
                i++;
            }

            // Pad if string is shorter than k
            while (n.size() < k) {
                n += fill;
            }

            op.push_back(n);
        }

        return op;   
    }
};
int main() {
    Solution sol;
    string s = "abcdefghi";
    int k = 3;
    char fill = 'x';

    vector<string> result = sol.divideString(s, k, fill);

    cout << "Divided string groups:" << endl;
    for (const string& group : result) {
        cout << group << endl;
    }

    return 0;
}
