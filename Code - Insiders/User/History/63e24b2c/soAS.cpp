#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>x);

int main(){
    vector<int>numbers(10);
    for(int i = 0; i< numbers.size();i++) numbers[i] = i+1;
    printVector(numbers);
    // cout << numbers;
    int temp;
    int size = numbers.size()-1;
    for(int i = 0; i< size/2; i ++){
        temp = numbers[i];
        numbers[i] = numbers[size- i];
        numbers[size - i] = temp;
    }
    printVector(numbers);
    return 0;
}

void printVector(vector<int>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) if(i) cout <<","<< x[i]; else cout << x[i];
    cout << "]"<< endl;
}