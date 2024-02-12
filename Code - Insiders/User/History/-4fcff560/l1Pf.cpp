#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int>x);
int main() 
{
    vector<int> manga(5);
    for(int i = 0; i < manga.size(); i++) manga[i] = i;
    printVector(manga);
    manga.push_back(10);
    manga.push_back(30);
    for(int  *p = manga.data(),i=0; i<manga.size(); p++,i++){
        cout << p << " " << *p << endl;
    }

    return 0;
}

void printVector(vector<int>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) if(i) cout <<","<< x[i]; else cout << x[i];
    cout << "]"<<endl;
}