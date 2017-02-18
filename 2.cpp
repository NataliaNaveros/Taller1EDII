#include<iostream>
#define L 5
using namespace std;

int main() {
    int i,n,t,op,r,z,x;
    float f;
    int n1,n2,n3,n4,n5;
    cout<<"Ingrese una opcion"<<endl;
    cout<<"Opcion 1 imprimir los numeros del 1 al 100"<<endl;
    cout<<"Opcion 2 imprimir las tablas de multiplicar del 1 al 20"<<endl;
    cout<<"Opcion 3 factorial de un numero"<<endl;
    cout<<"Opcion 4 Solucionar numeros de fibonacci"<<endl;
    cout<<"Opcion 5 ingresar 5 numeros para un array e imprimirlos en pantalla"<<endl;
    cin>>op;
    switch(op){
        case 1:
            for(i=1;i<=100;i++){
            cout<<"No "<<i<<endl;
            }
        break;
        case 2:
            for(n=1;n<=20;n++) {
                for(i=1;i<=10;i++) {
                t=n*i;
                cout<<n<<"*"<<i<<"="<<t<<endl;
                }
            cout<<endl;
            }
        break;
        case 3:
            cout<<"Digite un numero"<<endl;
            cin >> n;
            f=1;
            if(n>=0){
                for(i=1;i<=n;i++){
                    f=f*i;
                }
            cout<<"El factorial es"<<f<< endl;
            }else{
                cout<<"No es factorial"<<endl;
            }
        break;
        case 4:
            x = 0;
            z = 1;
            cout<<"Ingrese un numero"<<endl;
            cin>>n;
            for(i=0;i<=n;i++){
                r=x+z;
                z=x;
                x=r;
                cout<<r<<endl;
            }
        break;
        case 5:
        int arreglo[L];
        for(int i=0;i<L;i++){
            cout<<"Ingrese un numero para la posicion"<<i<<endl;
            cin>>arreglo[i];
        }
        for(int i=0;i<L;i++){
            cout<<"los valores ingresado en la posicion " << i << "es" << arreglo[i] <<endl;
        }
        break;
	}
	return 0;
}

