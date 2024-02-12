#include <cmath>
#include <iostream>
#include <string>
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i <= n; i++)
using namespace std;

int main() {
    int a, ta;
    int b, tb;
    string time;
    int counter = 0;
    double tmp;
    cin >> a >> ta;
    cin >> b >> tb;
    cin >> time;
    int start_time = (stoi(time.substr(0, 2)) - 5) * 60 + stoi(time.substr(3, 2));
    int ending = (start_time + ta) > 19*60 ? 19*60 : (start_time + ta);
    ending = floor(ending/float(b));
    for (int i = ceil((start_time - tb) / float(b)); i < ending; i++) {
        tmp = (ta * tb + i * b * ta + start_time * tb) / double(ta + tb);
        if (tmp < (start_time + ta) && tmp > (start_time)) {
            cout << int(tmp / 60) + 5 << " " << int(tmp) % 60 << endl;
            counter++;
        }
    }
    cout << counter;
    return 0;
}