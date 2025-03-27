#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long cantidad_baldosas_largo;
    long cantidad_baldosas_ancho;
    long total_baldosas;

    long n, m, a; cin >> n >> m >> a;

        if(fmod(n,a) == 0.0){
            cantidad_baldosas_ancho = n / a;
        }
        else{
            cantidad_baldosas_ancho = n / a + 1;
        }
    
        if((fmod(m,a)) == 0.0){
            cantidad_baldosas_largo = m / a;
        }
        else{
            cantidad_baldosas_largo = (m / a) + 1;
        }

    if(!(cantidad_baldosas_largo == 0)){
        total_baldosas = (long)cantidad_baldosas_ancho * cantidad_baldosas_largo;
    }
    else{
        total_baldosas = cantidad_baldosas_ancho;
    }

    cout<<total_baldosas;
    
    return 0;
}