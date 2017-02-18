#include <iostream>

using namespace std;

int main(){
    int i,a,c;
    int op;
    cout<<"Ingrese una opcion"<<endl;
    cout<<"Opcion 1 imprimir pantalla del 1 al 10"<<endl;
    cout<<"Opcion 2 sumar los numeros del 1 al 100"<<endl;
    cout<<"Opcion 3 sumar los numeros pares del 1 al 50"<<endl;
    cout<<"Opcion 4 sumar los numeros impares del 1 al 50"<<endl;
    cin>>op;
    switch(op){
        //Imprimir los numeros del 1 al 10
        case 1:
            i=0;
            while (i<10){
                i=i+1;
                cout<<"No "<<i<<endl;
            }
        break;
        //Sumar los sumeros del 1 al 100
        case 2:
            a=0;
            c=0;
            while(c<100){
                a=a+c;
                c=c+1;
                cout<<a<<"+"<<c<<"="<<a+c<<endl;

            }
        break;
        //Sumar los numeros del 1 al 50
        case 3:
            a=0;
            c=0;
            while(c<50){
                if(c%2==0){
                    a=a+c;
                    c=c+2;
                    cout<<a<<"+"<<c<<"="<<a+c<<endl;
                }else{
                    cout<<"Impar"<<endl;
                }
            }
        break;
        //Sumar los numeros impares del 1 al 50
        case 4:
            a=0;
            c=1;
            while(c<50){
                if(c%2!=0){
                    a=a+c;
                    c=c+2;
                    cout<<a<<"+"<<c<<"="<<a+c<<endl;
                }
            }
        break;
    }
return 0;
}

