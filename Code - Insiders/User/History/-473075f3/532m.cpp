#include <iostream>
#include <string>
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

string is_nice(string x, int starting_index) {
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    loop(26) {
        if (!(x.find(a[i], starting_index))) {
            size_t pos = x.find("?", starting_index);
            if (pos == string::npos) {
                return "-1";
            } else {
                x.replace(pos, 1, to_string(a[i]));
            }
        }
    }
    return x;
}

int main() {
    string x;
    cin >> x;
    cout << is_nice(x,0);
    // if (x.size() < 26) {
    //     cout << -1;
    //     return 0;
    // }
    // int n = x.size() - 26;
    // loop(n) {
    //     string z = is_nice(x, i);
    //     if (z != "-1") {
    //         cout << x;
    //         return 0;
    //     }
    // }
    // cout << "-1";
    return 0;
}