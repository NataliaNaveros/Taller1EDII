#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
void menu();
int main (){
    menu();
return 0;
}
void menu (){
    int op;
    int num;
    int a;
    a=0;
    cout<<"switch"<<endl;
    cout << endl;
    cout<<"0.salir"<<endl;
    cout<<"1.imprimir el mes"<<endl;
    cout<<"2.codigo ascii vocales"<<endl;
    cout<<"3.codigo ascii numerico"<<endl;


    cin>>op;
    switch (op){
        case 0: system("EXIT");
        break;
        case 1:
                cout<<"ingrese el numero de este mes"<<endl;
                cin>>num;
                 switch(num)
                   {
                      case 1:cout<<"enero"<<endl; break;
                      case 2:cout<<"febrero"<<endl;     break;
                      case 3:cout<<"marzo"<<endl;     break;
                      case 4:cout<<"abril"<<endl;      break;
                      case 5:cout<<"mayo"<<endl;      break;
                      case 6:cout<<"junio"<<endl;      break;
                      case 7:cout<<"julio"<<endl;    break;
                      case 8:cout<<"agosto"<<endl;      break;
                      case 9:cout<<"septiembre"<<endl; break;
                      case 10:cout<<"octubre"<<endl;     break;
                      case 11:cout<<"noviembre"<<endl;  break;
                      case 12:cout<<"diciembre"<<endl;  break;
                   }
        break;
        case 2:
             while(a!=6){
            cout<<"ingrese un vocal para saber el codigo ascii"<<endl;
            cout<<"1. a"<<endl;
            cout<<"2. e"<<endl;
            cout<<"3. i"<<endl;
            cout<<"4. o"<<endl;
            cout<<"5. u"<<endl;
            cin>>a;
                switch(a){
                case 1:
                    cout<<"el codigo ascii de a es alt 96"<<endl;
                    break;
                case 2:
                    cout<<"el codigo ascii de e es alt 101"<<endl;
                    break;
                case 3:
                    cout<<"el codigo ascii de i es alt 105"<<endl;
                    break;
                case 4:
                    cout<<"el codigo ascii de o es alt 111"<<endl;
                    break;
                case 5:
                    cout<<"el codigo ascii de u es alt 117"<<endl;
                    break;
                default:
                    cout<<"no corresponde a lo pedido"<<endl;
                }
                }
                cout << endl;
        break;
        case 3:
            while(a!=11){
    cout<<"ingrese un numero para saber el codigo ascii"<<endl;
    cout<<"0."<<endl;
    cout<<"1. "<<endl;
    cout<<"2. "<<endl;
    cout<<"3. "<<endl;
    cout<<"4."<<endl;
    cout<<"5."<<endl;
    cout<<"6. "<<endl;
    cout<<"7. "<<endl;
    cout<<"8. "<<endl;
    cout<<"9."<<endl;
    cout<<"10."<<endl;
    cin>>a;
        switch(a){
        case 0:
            cout<<"el codigo ascii de 0 es alt 48"<<endl;

        case 1:
            cout<<"el codigo ascii de 1 es alt 49"<<endl;
            break;
        case 2:
            cout<<"el codigo ascii de 2 es alt 50"<<endl;
            break;
        case 3:
            cout<<"el codigo ascii de 3 es alt 51"<<endl;
            break;
        case 4:
            cout<<"el codigo ascii de 4 es alt 52"<<endl;
            break;
        case 5:
            cout<<"el codigo ascii de 5 es alt 53"<<endl;
            break;
        case 6:
            cout<<"el codigo ascii de 6 es alt 54"<<endl;
            break;
        case 7:
            cout<<"el codigo ascii de 7 es alt 55"<<endl;
            break;
        case 8:
            cout<<"el codigo ascii de 8 es alt 56"<<endl;
            break;
        case 9:
            cout<<"el codigo ascii de 9 es alt 57"<<endl;
            break;

        default:
            cout<<"no corresponde a lo pedido"<<endl;
        }
        }
        break;

        menu();

}
menu();
}
