#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream input("input.txt");

    int n;
    string calc;
    int first;
    string opr;
    int second;
    input >> n;
    for (int i = 0; i < n; i++){
        input >> calc;
        input >> first;
        input >> opr;
        input >> second;

        if(opr == "+"){
            cout<< first + second << endl;
        }
        if(opr == "-"){
            cout << first - second << endl;
        }
        if(opr == "*"){
            cout << first * second << endl;
        }
        if(opr == "/"){
            cout << first / second << endl;
        }
    }
}

