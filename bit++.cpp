#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int cant_operaciones;
    cin>>cant_operaciones;
    char array[3];
    string operation = "";
    int suma_total = 0;

    for (int i = 0; i < cant_operaciones; i++){
        operation = "";
        for (int i = 0; i < 3; i++){
            cin>>array[i];
            operation = operation + array[i];
        }
        if((operation == "X++") || (operation == "++X")){
            suma_total++;
        }
        if((operation == "--X") || (operation == "X--")){
            suma_total--;
        }
    }
    cout<<suma_total<<"\n";
    return 0;
}