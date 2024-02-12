#include<iostream>
#include<string>
#include<map>
#define loop(n) for(int i = 0; i < n; i++)

using namespace std;
int main(){
    string home,away;
    int n;
    cin >> home >> away;
    cin >> n;
    char team,card;
    int time, player;
    map<int,int> players;
    loop(n){
        cin >> time >> team >> player >> card;
        if(players[player]){
            players[player]+= (card == 'y' ? 1 : 2);
        }else{
            players[player] = (card == 'y' ? 1 : 2);
        }
        if(players[player] >= 2){
            cout << (team == 'h' ? home : away) << player << time << '\n';
        }
    }
    return 0;
}