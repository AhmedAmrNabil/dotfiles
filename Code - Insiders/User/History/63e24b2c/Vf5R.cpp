#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>numbers(5);
    for(int i = 0; i< numbers.size();i++) numbers[i] = i+1;
    int temp;
    for(int i = 0; i< numbers.size(); i ++){
        temp = numbers[i];
        numbers[i] = numbers[numbers.size() - 1 - i];
        numbers[numbers.size() - 1 - i] = temp;
    }

}