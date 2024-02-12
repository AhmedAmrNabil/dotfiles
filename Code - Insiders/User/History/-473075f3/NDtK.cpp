#include<iostream>
#include<string>
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;


bool is_nice(string x,int starting_index){
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    loop(26){
        if(!(x.find(a[i],starting_index))){
            size_t pos = x.find('?',starting_index);
            if(pos == string::npos){
                return false;
            }else{
                x.replace(pos,1,to_string(a[i]));
            }
        }
    }
    return true;
}

int main(){
    string x;
    cin >> x;
    int n = x.size() - 26;
    if(n < 26){
        cout << -1;
        return false;
    }
    return 0;
}