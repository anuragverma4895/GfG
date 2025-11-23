class Solution {
public:
    string stringSort(string s) {
        int n = s.size();
        sort(s.begin(), s.end());

        vector<string> s1;
        vector<string> s2;
        vector<string> arr(n, ""); // arr ko fixed size de diya

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i]<='Z') {
                string t = "";
                t += s[i];
                s1.push_back(t);
            } else {
                string t = "";
                t += s[i];
                s2.push_back(t);
            }
        }

        int a = s1.size();
        int b = s2.size();

        if (a < b) {
            int p = 0;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0 && p < a) {
                    arr[i] = s1[p++];
                }
            }
            int q = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == "" && q < b) {
                    arr[i] = s2[q++];
                }
            }
        } else {
            int p = 0;
            for (int i = 0; i < n; i++) {
                if (i % 2 != 0 && p < b) {
                    arr[i] = s2[p++];
                }
            }
            int q = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == "" && q < a) {
                    arr[i] = s1[q++];
                }
            }
        }

        string finalAns = "";
        for (auto ans : arr) finalAns += ans;
        return finalAns;
    }
};
