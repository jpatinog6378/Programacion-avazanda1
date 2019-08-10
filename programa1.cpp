#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ifstream rfile;
    char linea[50] = "";

    rfile.open("C:/Programas en c/datos.txt.txt");
    while (rfile.getline(linea,50)) {
        cout<<linea<<endl;
    }
    rfile.close();
    return 0;
}