#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool isSub = true;
    int i = 0;
    for (int j = 0; j < t.size() && isSub; j++) {
        if (s[i] == t[j]) {
            i++;
            if (i == s.size()) {
                isSub = true;
                break;
            }
        }
    }
    if (i != s.size()) {
        isSub = false;
    }
    cout << (isSub ? "true" : "false") << endl;

    return 0;
}
