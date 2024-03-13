#include <bits/stdc++.h> //Essa é a biblioteca que importa algumas implementações importantes da STL do C++.
using namespace std;

#define lli long long int //Criando um macro para o tipo long long int.

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); //Otimizando a leitura e escrita de dados
    int n; // valor que corresponde ao número de observações de supostos picos.
    cin>>n;
    vector<lli> a(n), b(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        cin>>b[i];
    /*
    Levarei em considerações as seguintes restrições;
        - Para ser um pico seu valor precisa ser maior ou igual a 50.
    */
    //Criarei um array de par que já associa o tempo ao seu valor e que filtra os valores >= 50.
    vector<pair<lli, lli>> ab;
    for(int i = 0; i < n; i++){
        if(a[i] >= 50)
            ab.push_back({b[i],a[i]});
    }
    //Logo depois irei ordenar para pegar em orde cronologica os registros.
    sort(ab.begin(), ab.end());

    lli sum_sec = 0;
    for(int i = 1; i < ab.size(); i++)
        sum_sec += (ab[i].first-ab[i-1].first); // Somando todos os tempos que foram filtrados
    sum_sec /= (ab.size()-1); //Dividindo o tempo de todos o somatório pela quantidade de intervalos (ab.size()-1);
    lli minutes = (sum_sec/60); //divindindo por 60 para pegar a quantidade de minutos
    lli seconds = (sum_sec%60); //pegando os segundos restantes.
    //Formatando a saída para mostrar o tempo em minutos e segundos.
    cout << "TMEP: " << minutes << " minutos e " << seconds << " segundos." <<'\n';
    return 0;
}