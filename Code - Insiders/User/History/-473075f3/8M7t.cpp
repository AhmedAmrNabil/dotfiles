#include <algorithm>
#include <iostream>
#include <string>
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

string is_nice(string x) {
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 26; i++) {
        if (x.find(a[i]) != string::npos)
            continue;
        size_t pos = x.find('?');
        if (pos == string::npos)
            return "-1";
        string f;
        f += a[i];
        x.replace(pos, 1, f);
    }
    return x;
}

int main() {
    string x;
    cin >> x;
    if (x.size() < 26) {
        cout << -1;
        return 0;
    }
    int n = x.size() - 26;
    loop(n + 1) {
        string z = is_nice(x.substr(i, 26));
        if (z != "-1") {
            std::replace(x.begin(), x.end(), '?', 'A');
            // cout << z;
            cout << x.substr(0, n) << z << x.substr(n + 26, x.size() - n - 26);
            return 0;
        }
    }
    cout << "-1";
    return 0;
}