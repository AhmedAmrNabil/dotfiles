#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>x);
void printMatrix(vector<vector<int>>x);

int main(){

    vector<vector<int>>chessboard(8,vector<int>(8));
    for(int i = 0; i < chessboard.size(); i++)
    for(int j = 0; j < chessboard[i].size(); j++)chessboard[i][j]=i*10+j;
    printMatrix(chessboard);

    // vector<int>numbers(11);
    // for(int i = 0; i< numbers.size();i++) numbers[i] = i+1;
    // printVector(numbers);
    // // cout << numbers;
    // int temp;
    // int maxIndex = numbers.size()-1;
    // for(int i = 0; i< maxIndex/2; i ++){
    //     temp = numbers[i];
    //     numbers[i] = numbers[maxIndex- i];
    //     numbers[maxIndex - i] = temp;
    // }
    // printVector(numbers);
    return 0;
}

void printVector(vector<int>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) if(i) cout <<","<< x[i]; else cout << x[i];
    cout << "]";
}

void printMatrix(vector<vector<int>>x){
    cout << "[";
    for(int i = 0; i< x.size();i++) {
        if(i) cout <<",";
        printVector(x[i]);
    } 
    cout << "]"<< endl;  
}