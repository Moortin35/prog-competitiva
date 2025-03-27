#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int cantidad;
    //ingreso la cantidad de palabras
    cin>>cantidad;
    string string_array[cantidad];

    //ingreso las palabras
    for (int i = 0; i < cantidad; i++){
        cin>>string_array[i];
    }
    //valores de la reestructuracion de las palabras largas
    char first_char;
    char last_char;
    string palabra;
    int length_2;
    //recorro el arreglo fijandome que palabras son mayores a 10, aquellas las cambio;
    for (int i = 0; i < cantidad; i++)
    {
        if(string_array[i].length() > 10){
            palabra = string_array[i];
            first_char = palabra[0];
            last_char =  palabra[palabra.length()-1];
            length_2 = string_array[i].length()-2;
            string_array[i] = first_char + to_string(length_2) + last_char;
        }
        cout<<string_array[i];
        cout<<"\n";
    }
    return 0;
}