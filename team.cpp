#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int cant_problemas;
    cin>>cant_problemas;
    int array[3];

    int valor_temporal;
    int suma_total = 0;

    for (int i = 0; i < cant_problemas; i++){
        for (int j = 0; j < 3; j++){
            cin>>array[j];            
        }
        valor_temporal = 0;
        for (int i = 0; i < 3; i++){
            if(array[i] == 1){
                valor_temporal++;
            }
        }
        if(valor_temporal >=2){
            suma_total++;
        }
    }
    cout<<suma_total<<"\n";
    return 0;
}