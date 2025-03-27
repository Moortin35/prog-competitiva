#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int weight;
    cin>>weight;
    string output_valor;

    if(weight%2 == 0){

        output_valor = "YES";
    }
    else{
        output_valor = "NO";
    }
    cout<<output_valor;
    return 0;
}