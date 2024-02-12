#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> names;
    string x;
    int count;
    for (int i = 0; i < n; i++) {
        cin >> x;
        try {
            names.at(x)++;
            cout << x.append(to_string(names.at(x))) << endl;
        } catch (std::out_of_range) {
            names[x] = 0;
            cout << "OK\n";
        }
    }
 
    return 0;
}