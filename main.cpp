#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
using namespace std;


int bin (int *numero){
    int j=0;
    int cl1[8],cl2[8],cl3[8],cl4[8],cl5[8];
    int *clave[]={&cl1[8],&cl2[8],&cl3[8],&cl4[8],&cl5[8]};

    for (int i=4;i>0;i--){

        int alfa= *numero;
        alfa%=100;
        *numero/=100;
        int k=7;
        for(j=0;j<8;j++){
            int x=pow(2,k);


            if (alfa>=x){
                clave[i][j]=1;
                alfa-=x;
                k--;
            }
            else{
                clave[i][j]=0;
                k--;
            }


        }

    }

    return 0;
}

int main(){


    cout<<"BIenvenido a su banco";
    int a=0,b=0,c=0, cedula,clave;
    char bandera1='F',bandera2='F',bandera3='F';
    while(bandera1=='F'){
      // archivos de texto
         cout<<"Que identificacion tiene \n"
         <<"1.administrador"
         <<"2.usuario"
         <<"3.salir: ";
         cin>>a;
         if(a==1){
         while(bandera2=='F'){

             cout
             <<"1.ingresar\n"
             <<"2.registrarsen\n"
             <<"3.regresar\n"
             <<"4.salir: "  ;
             cin>>b;
             if(b==1){

                cout<<"ingrese su cedula por favor";
                cin>>cedula;
                cout<<"ingrese su contraseña";
                cin>>clave;
                //funcion bool para comprobar
                //if comprobacion
                while(bandera3=='F'){

                    cout<<"que desea hacer recuerde que cada vez se le retirara 1000 por operacion \n"
                    <<"1.retirar "
                    <<"2.ingresar dinero"
                    <<"3.consultar saldo: "
                    <<"4.regresar"
                    <<"5.salir: "  ;
                    cin>>c;
                    if(c==1){

                    }
                }   if(c==2){

                    }
                    if(c==3){

                    }
                    if(c==4){
                        bandera3='v';
                    }
                    if(c==5){

                    }
                    else{
                        cout<<"el numero ingresado no es valido";
                    }
             }
             if(b==2){
                 while(bandera3=='F'){
                     cout<<"ingrese su cedula por favor";
                     cin>>cedula;
                     cout<<"ingrese su contraseña";
                     cin>>clave;
             }
        }
    }
   }

    int clave[4];
    int valor,i=3;
    cout<<"ingrese su clave por favor, recuerde solo son 4 digitos: \n";
    cin>>valor;
    for (int x=valor;x>0;x/=10){
        valor=x%10;
        valor+=48;
        cout<<valor<<endl;

        clave[i]= valor;
        i--;
    }
    string texto;
    ofstream usuario;
    usuario.open("usuario.txt");
    for (i=0;i<4;i++){
    usuario<<clave[i];
    }

    usuario.close();
    int x=1;
    ifstream leer;

    leer.open("usuario.txt",ios::in);
    if (leer.fail()){
        cout<<"fallo";

    }
    getline(leer,texto);

    leer.close();
    int numero=stoi(texto,nullptr);
    int *ptrpuntero;
    ptrpuntero=&numero;
    bin(ptrpuntero);


}

}


