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
    for(int i = 0; i< numbers.size(); i ++){
        temp = numbers[i];
        numbers[i] = numbers[numbers.size() - 1 - i];
        numbers[numbers.size() - 1 - i] = temp;
    }

}

void printVector(vector<int>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) cout << x[i]<<",";
    cout << "]";
}