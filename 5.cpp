#include <iostream>
#include <stdlib.h>//la fucion rand
#define L 100

using namespace std;

int main(){
    int matriz[L][L];
    int orden;
    cout<<"Ingrese la longitud de la matriz"<<endl;
    cin>>orden;
    //llenar matriz
    for(int i=0;i<orden;i++){
        for(int j=0;j<orden;j++){
            //llena la matriz con numero aleatorios
            matriz[i][j]=rand()%100;
            //muestra la matriz con numeros aleatorios
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
return 0;
}

