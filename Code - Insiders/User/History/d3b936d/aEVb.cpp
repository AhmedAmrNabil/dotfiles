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
    int ending = (start_time + ta) > 19 * 60 ? 19 * 60 : (start_time + ta);
    ending = floor(ending / float(b));
    int starting = (start_time - tb) > 0 ? (start_time - tb) : 0;
    starting = ceil(starting / float(b));
    for (int i = 0; i < ending; i++) {
        cout << i << "\t";
        tmp = (ta * tb + i * b * ta + start_time * tb) / double(ta + tb);
        cout << int(tmp / 60) + 5 << " " << int(tmp) % 60 << endl;
        if (tmp < (start_time + ta) && tmp > (start_time)) {
            counter++;
        }
    }
    // counter = ending - starting;
    // tmp = (ta * tb + starting * b * ta + start_time * tb) / double(ta + tb);
    // cout << tmp << endl;
    // if (tmp == start_time) counter--;
    // tmp = (ta * tb + ending * b * ta + start_time * tb) / double(ta + tb);
    // cout << tmp << endl;
    // if (tmp == start_time + ta) counter--;

    // int maxt = floor(start_time + ta) / float(b);
    // int mint = ceil(start_time - tb) / float(b);
    // cout << maxt<<endl;
    // cout << mint<<endl;
    // counter = ((ta + tb) / b);
    // // if(maxt >= (start_time + ta))counter--;
    // // if(mint >= (start_time))counter--;
    // // if (((start_time + ta) / float(b)) == floor(((start_time + ta) / float(b)))) counter--;
    // // if (((start_time - tb) / float(b)) == floor(((start_time - tb) / float(b)))) counter--;
    cout << counter;
    return 0;
}