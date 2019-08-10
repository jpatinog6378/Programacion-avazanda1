#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(){
    /*
    objetivo: captura del usuario un numero entero y mostrar 
    descendentemente cada numero hasta 0 (inclusive).
        1. Declarar una variable entera: num
        2. Capturar num
        3. En un for desde num hasta 0:
        4. Mostrar la variable iteradora i.
     */
    ofstream archivo;//metodo para la creacion del archivo
    archivo.open("notastexto.txt",ios::out);//abriendo archivo, la primer instancia es para la posicion del archivo 
    if(archivo.fail()){ //prueba para ver si se creo el archivo
        cout<<"no se puede abrir el archivo"<<endl;//si falla se cierra sino sigue
        exit(1);//metodo para salir
    }
    int num = 0;
    cout<<"ingrese un numero: ";
    cin>>num;
    for (int i = num; i >= 0 ; i--)/*int i= es la variable iteradora */
    {
        cout<<i<<endl;
    archivo<<i<<endl;
    archivo.close();//Aca cerramos el archivo
    }
    return 0;
}