#include<iostream>
#include<conio.h>

using namespace std;

void mostrarDatos(int* vector, int n){
    cout<<"Mostrando Vector: ";
    for(int i=0;i<n;i++){
        cout<<vector[i]<<" ";
    }
}
void recibirDatos(int* vector, int n){
    cout<<"Ingrese datos"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Dato ["<<i+1<<"]: ";cin>>vector[i];
    }
}
int main(){

    int n;
    do{
        cout<<"Ingrese tamanio de vector: ";cin>>n;
    }while(n<1 || n>15);

    int* vector;
    vector = new int[n];

    recibirDatos(vector, n);
    mostrarDatos(vector, n);

    delete[] vector;

    getch();
    return 0;
}