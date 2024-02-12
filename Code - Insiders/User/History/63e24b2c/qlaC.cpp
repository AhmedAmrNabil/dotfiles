#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>x);

int main(){
    vector<int>numbers(5);
    for(int i = 0; i< numbers.size();i++) numbers[i] = i+1;
    printVector(numbers);
    // cout << numbers;
    int temp;
    for(int i = 0; i< (numbers.size()-1)/2; i ++){
        temp = numbers[i];
        numbers[i] = numbers[4- i];
        numbers[4 - i] = temp;
    }
    printVector(numbers);
    return 0;
}

void printVector(vector<int>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) if(i) cout <<","<< x[i]; else cout << x[i];
    cout << "]"<< endl;
}