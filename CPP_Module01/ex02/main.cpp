#include <iostream>
#include <string>

int main()
{
    //The string variable
    std::string str = "HI THIS IS BRAIN";
    //The pointer variable
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    //Print memory address
    std::cout << "Str memory address is : " << &str << std::endl;
    std::cout << "StringPTR memory address is : " << stringPTR << std::endl;
    std::cout << "StringREF memory address is : " << &stringREF << std::endl;

    //Printf values
    std::cout << "Str value is : " << str << std::endl;
    std::cout << "StringPTR value is : " << *stringPTR << std::endl;
    std::cout << "StringREF value is : " << stringREF << std::endl;

    return (0);
}


// References
// ¿When I should use string& (by reference)?
// ✔ If I want to modify an original variable in a function.
// ✔ If I don't want to copy a big variable.
// ✔ To get better Cuando quieres mayor legibilidad y seguridad que con punteros.

// 1. Pasar parámetros a funciones sin copiar
// Cuando pasas una variable grande (como un std::string o un objeto), copiarla cuesta memoria y tiempo. Con una referencia, puedes evitar esa copia y modificar el original si quieres.
// void toUpperCase(std::string& text) {
//     for (char& c : text)
//         c = toupper(c);
// }

// int main() {
//     std::string message = "hello";
//     toUpperCase(message);
//     std::cout << message; // HELLO
// }
// Si hubiéramos usado std::string text, la función trabajaría con una copia.

// Con std::string& text, trabajamos directamente sobre la original.


// 2. Pasar variables como solo lectura sin copiar (const references)
// Si no quieres que se modifique el valor, pero igual quieres evitar copiarlo, usas const std::string&.

// Caso real: función que solo lee un string

// void printGreeting(const std::string& name) {
//     std::cout << "Hello, " << name << "!" << std::endl;
// }

// Es más eficiente que pasar std::string name, porque no se copia.
// Es más seguro que pasar std::string&, porque no se puede modificar.


// 3. Devolver referencias desde funciones
// Cuando quieres que una función devuelva una referencia a una variable ya existente, no una copia.

// Caso real: acceder a un elemento y modificarlo

// std::string& getElement(std::vector<std::string>& list, int index) {
//     return list[index]; // Devuelve una referencia al string dentro del vector
// }

// int main() {
//     std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
//     getElement(names, 1) = "Bobby"; // Modifica directamente el vector
//     std::cout << names[1]; // Bobby
// }


// 4. Evitar punteros en general
// Las referencias te permiten evitar muchos errores de punteros: null, *ptr, &var, etc.

// void updateValue(int& x) {
//     x += 10;
// }

// int main() {
//     int a = 5;
//     updateValue(a); // a es ahora 15
// }

// No necesitas preocuparte de nullptr, ni de * y &.
// Es más seguro y más legible.