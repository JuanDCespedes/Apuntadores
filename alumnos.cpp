#include <iostream>
#include <string>
using namespace std;
    int promedio;
struct Alumno {
    std::string nombre;
    string code;
    int nota[3];
};

int main() {
    for (int x=0; x<3;++x) {
    Alumno estudiante[3];
    cout << "nombre: "; 
    cin >> estudiante[x].nombre;
    cout<< "Codigo: ";
    cin >>estudiante[x].code;
    cout << "Nota 1: ";
    cin >> estudiante[x].nota[0];
    cout<<"nota 2: ";
    cin>>estudiante[x].nota[1]; 
    cout<<"nota 3: ";
    cin >> estudiante[x].nota[2];
    
    Alumno* ptrEstudiante = &estudiante[x]; // Apuntador a la estructura

    std::cout << "Datos del estudiante " << x+1 << std::endl;
    std::cout << "Nombre: " << ptrEstudiante->nombre << std::endl;
    cout << "Codigo: "<< ptrEstudiante-> code << endl;
    std::cout << "Notas: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << ptrEstudiante->nota[i] << " ";
    }
    promedio=(estudiante[x].nota[0]+estudiante[x].nota[1]+estudiante[x].nota[2])/3;
    cout <<"\npromedio: " << promedio;
    std::cout << std::endl;
    
}
    return 0;
}