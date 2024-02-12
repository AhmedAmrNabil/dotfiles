#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>x);
void printMatrix(vector<vector<int>>x);

int main(){

    vector<vector<int>>chessboard(0,vector<int>(0));
    for(int i = 0; i < 8; i++){
        chessboard.push_back({});
    for(int j = 0; j < 8; j++)chessboard[i].push_back(i*10+j);
    }
    printMatrix(chessboard);
    // vector<int>vect;
    // for(int i = 0; i < 6; i++)vect.push_back(i);
    // printVector(vect);

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
    cout << "]"<<endl;
}

void printMatrix(vector<vector<int>>x){
    cout << "["<<endl;
    for(int i = 0; i< x.size();i++) {
        cout << "\t";
        if(i) cout <<","; else cout << " ";
        printVector(x[i]);
    } 
    cout << "]"<< endl;  
}