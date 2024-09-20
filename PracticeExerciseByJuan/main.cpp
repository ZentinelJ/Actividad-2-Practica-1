#include <iostream>

void llenarMinuendo(float minuendo[]);
void llenarSustraendo(float sustraendo[]);
void llenarDiferencia(const float minuendo[7], const float sustraendo[7], float diferencia[]);
void calcularPromedio(const float diferencia[]);

int main() {
    /*TODO: Teniendo en cuenta lo estudiado hasta el momento en la Unidad 1, elabora el pseudocódigo para los siguientes casos:
    TODO: Definir dos arreglos unidimensionales que permitan almacenar 7 números ingresados por el usuario.
    TODO: Llenar un tercer arreglo con la diferencia de los dos primeros arreglos. Mostrar el promedio de todos los datos.
    TODO: Mostrar todos y cada uno de los datos del tercer arreglo.
    TODO: Implementar el pseudocódigo en un lenguaje de programación como Java o C++.*/

    float minuendo[7];
    float sustraendo[7];
    float diferencia[7];

    llenarMinuendo(minuendo);
    llenarSustraendo(sustraendo);
    llenarDiferencia(minuendo, sustraendo, diferencia);
    calcularPromedio(diferencia);
}

void llenarMinuendo(float minuendo[]) {
    std::cout << "A continuación, ingresa los 7 números que desees." << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Ingresa el valor del número " << i + 1 << ": ";
        std::cin >> minuendo[i];
    }
}

void llenarSustraendo(float sustraendo[]) {
    std::cout << "Ahora ingresa los valores que deseas sustraer a la cantidad anteriormente ingresada." << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Ingresa el valor del número " << i + 1 << ": ";
        std::cin >> sustraendo[i];
    }
}

void llenarDiferencia(const float minuendo[7], const float sustraendo[7], float diferencia[]) {
    std::cout << "El resultado de restar los valores fue:" << std::endl;
    for (int i = 0; i < 7; i++) {
        diferencia[i] = minuendo[i] - sustraendo[i];
        std::cout << "El número " << i + 1 << " con el resultado: " << diferencia[i] << std::endl;
    }
}

void calcularPromedio(const float diferencia[]) {
    float suma = 0;
    float promedio = 0;
    for(int i = 0; i < 7; i++) {
        suma += diferencia[i];
    }
    promedio = suma / 7;
    std::cout << "El promedio de los números es: " << promedio << std::endl;
}