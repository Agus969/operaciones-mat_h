#include <iostream>
#include <stdio.h>
#include "operaciones.h"

using namespace std;

int main()
{
int op;
int a;
int b;

cout << "¿Que operacion quieres hacer?" << endl;
cout << "1.- Suma" << endl;
cout << "2.- Resta" << endl;
cout << "3.- Multiplicacion" << endl;
cout << "4.- Division" << endl;
cin >> op;

cout <<"Introduce primer numero: "<< endl;
cin >> a;
cout <<"Introduce segundo numero: "<< endl;
cin >> b;

if(op==1){
    cout<<"El resultado de"<< a << "+" << b << "es"<< suma(a ,b);
}
if(op==2){
    cout<<"El resultado de"<< a << "-" << b << "es"<< resta(a ,b);
}
if(op==3){
    cout<<"El resultado de"<< a << "*" << b << "es"<< multiplicacion(a ,b);
}
if(op==4){
    cout<<"El resultado de"<< a << "/" << b << "es"<< division(a ,b);
}

cout << endl;
getchar();


}