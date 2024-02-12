#include <iostream>
using namespace std;

void sorting(int* a[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - 1 - i; ++j)
            if (a[0][j] > a[0][j + 1]) {
                swap(a[0][j], a[0][j + 1]);
                swap(a[1][j], a[1][j + 1]);
            }
}

int main() {
    int s, n;
    int tmp;
    cin >> s >> n;
    int* dragons[] = {new int[n], new int[n]};
    for (int i = 0; i < n; ++i) {
        cin >> dragons[0][i] >> dragons[1][i];
    }
    sorting(dragons, n);
    for (int i = 0; i < n; ++i)
        if (s > dragons[0][i])
            s += dragons[1][i];
        else {
            cout << "NO";
            return 0;
        }

    cout << "YES";
    return 0;
}