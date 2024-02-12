#include <iostream>
#include <string>
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

string is_nice(string x) {
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 26; i++) {

        if(x.find(a[i]))
            continue;
        
        size_t pos = x.find('?');
        if(pos == string::npos)
            return "-1";
        string f;
        f+= a[i];
        x.replace(pos,1,f);
        
    }
    return x;
}

int main() {
    string x;
    cin >> x;
    cout << is_nice(x.substr(0,26)) << endl;
    cout << x;
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