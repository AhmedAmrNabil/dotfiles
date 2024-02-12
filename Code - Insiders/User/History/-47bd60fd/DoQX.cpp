#include <iostream>
#include <map>
#include <string>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;
int main() {
    string home, away;
    int n;
    cin >> home >> away;
    cin >> n;
    char team, card;
    int time, player;
    map<int, int> players;
    loop(n) {
        cin >> time >> team >> player >> card;
        int index = player + (team == 'a') * 100;
        if (players[index]) {
            if (players[index] != -1)
                players[index] += (card == 'y' ? 1 : 2);
        } else {
            players[index] = (card == 'y' ? 1 : 2);
        }
        if (players[index] >= 2) {
            players[index] = -1;
            cout << (team == 'h' ? home : away) << " " << player << " " << time << '\n';
        }
    }
    return 0;
}