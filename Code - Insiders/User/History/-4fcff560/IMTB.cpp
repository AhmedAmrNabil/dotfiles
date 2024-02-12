#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int>x);
int main() 
{
    vector<int> manga(5);
    for(int i = 0; i < manga.size(); i++) manga[i] = i;
    manga.push_back(10);
    manga.push_back(30);
    printVector(manga);
    // for(int *p = manga.data(),i=0; i<manga.size(); p++,i++){
    //     cout << p << " " << *p << endl;
    // }
    int *p1 = manga.data();
    int *p2 = manga.data() + manga.size();
    cout << p2-p1<<endl;

    return 0;
}

void printVector(vector<int>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) if(i) cout <<","<< x[i]; else cout << x[i];
    cout << "]"<<endl;
}