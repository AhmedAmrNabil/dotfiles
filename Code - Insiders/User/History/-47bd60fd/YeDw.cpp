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
        if (players[player + team]) {
            if(players[player + team] != -1)
                players[player + team] += (card == 'y' ? 1 : 2);
        } else {
            players[player + team] = (card == 'y' ? 1 : 2);
        }
        if (players[player + team] >= 2 ) {
            players[player + team] = -1;
            cout << (team == 'h' ? home : away) << " " << player << " " << time << '\n';
        }
    }
    return 0;
}