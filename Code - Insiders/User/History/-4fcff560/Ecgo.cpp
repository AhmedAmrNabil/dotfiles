#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> manga(5);
    for(int i = 0; i < manga.size(); i++) manga[i] = i;

    return 0;
}