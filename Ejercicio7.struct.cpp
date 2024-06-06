/*Define un tipo de datos que represente a una persona siendo sus campos: Número
de cédula, el nombre, apellido y la edad. Llamar persona a este tipo de datos. Escribir
el programa que lea los datos de N personas y muestre la cantidad de personas mayores
a 40 años, promedio de edades y finalmente imprima en pantalla los datos de las
personas ingresadas.
Autor: Jeyni Orozco y Priscila Selva
Fecha: 04-06-2024
Versión: Inicial*/
//Incluimos las librerias y añadimos using namespace std para no tener que poner std:: antes de cada función
#include <iostream>
#include <locale.h>
using namespace std;

// Definición de la estructura "Persona"
struct Persona {
    int numeroCedula; //Entero que representa el número de cédula de la persona.
    string nombre; //Cadena de caracteres que almacena el nombre de la persona.
    string apellido; //Cadena de caracteres que almacena el apellido de la persona
    int edad; //Entero que representa la edad de la persona.
};

int main() { //Punto de entrada del programa
    int N; // Número de personas a ingresar
    setlocale(LC_ALL,"");
    cout << "Ingrese la cantidad de personas: ";
    cin >> N; //Leer la cantidad de personas

    // Crear un arreglo de personas
    Persona personas[N];

    // Leer los datos de las personas
    for (int i = 0; i < N; ++i) { //Inicializamos la variable i con el valor 0; 
    //verifica si i es menor que N. Si es cierto, el bucle continúa. Después de cada iteración, incrementamos i en 1.
        cout << "Persona " << i + 1 << ":" << endl; /*Se muestra en pantalla un mensaje que indica el número de la persona que se está ingresando. 
        Si i es 0, mostrará “Persona 1:”, si i es 1, mostrará “Persona 2:”, y así sucesivamente.
        
        Luego comenzamos a pedir los datos, lo leemos y luego los almacenamos en el campo de la estructura que corresponde*/
        cout << "Número de cédula: ";
        cin >> personas[i].numeroCedula;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Apellido: ";
        cin >> personas[i].apellido;
        cout << "Edad: ";
        cin >> personas[i].edad;
    }

    // Calcular la cantidad de personas mayores a 40 años y el promedio de edades
    int mayores40 = 0; //Se declara una variable llamada mayores40 e inicializa su valor en 0.
    int sumaEdades = 0; //Se declara otra variable llamada sumaEdades e inicializa su valor en 0.
    for (int i = 0; i < N; ++i) {
        /*La variable i se inicializa en 0. La condición i < N verifica si i es menor que el número total de personas (N). Si es cierto, el 
    bucle continúa; si no, se detiene.*/
        sumaEdades += personas[i].edad; //En cada iteración del bucle, se suma la edad de la persona actual al valor acumulado en sumaEdades.
        if (personas[i].edad > 40) {
            mayores40++;
            //se verifica si la edad de la persona actual es mayor a 40 años. Si es cierto, se incrementa el contador mayores40.
        }
    }
    double promedioEdades = static_cast<double>(sumaEdades) / N;
    /*Convertimos la suma total de edades (sumaEdades) a un valor de tipo double. 
    El resultado se almacena en la variable promedioEdades.*/

    // Imprimir los datos de las personas ingresadas
    cout << "\nDatos de las personas ingresadas:" << endl;
    
    for (int i = 0; i < N; ++i) { /*Comienza un bucle for que recorre el arreglo de personas. La variable i se inicializa en 0.
    Se verifica si i es menor que el número total de personas (N). Si es cierto, el bucle continúa; si no, se detiene.*/
        cout << "Persona " << i + 1 << ":" << endl; //Muestra en pantalla el número de persona actual basado en el valor de i. 
        cout << "Número de cédula: " << personas[i].numeroCedula << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Apellido: " << personas[i].apellido << endl;
        cout << "Edad: " << personas[i].edad << endl;
    }

    // Mostrar resultados
    cout << "\nCantidad de personas mayores a 40 años: " << mayores40 << endl;
    cout << "Promedio de edades: " << promedioEdades << endl;

    return 0;
}
