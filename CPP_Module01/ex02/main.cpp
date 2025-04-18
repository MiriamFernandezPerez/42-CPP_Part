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
// ✔ When you want greater readability and security than with pointers.

// 1. Passing parameters to functions without copying
// When you pass a large variable (such as a std::string or an
// object), copying it costs memory and time. With a reference,
//you can avoid that copy and modify the original if you want.
// void toUpperCase(std::string& text) {
//     for (char& c : text)
//         c = toupper(c);
// }

// int main() {
//     std::string message = "hello";
//     toUpperCase(message);
//     std::cout << message; // HELLO
// }
// If we had used std::string text, the function would work with a copy.

// With std::string& text, we work directly on the original.

// 2. Passing variables as read-only without copying (const references)
// If you don't want the value to be modified, but still want to avoid copying it, use const std::string&.

// Real-life case: function that only reads a string

// void printGreeting(const std::string& name) {
//     std::cout << "Hello, " << name << "!" << std::endl;
// }

// It's more efficient than passing std::string name because it's not copied.
// It's safer than passing std::string& because it can't be modified.

// 3. Returning references from functions
// When you want a function to return a reference to an existing variable, not a copy.

// Real-life scenario: accessing and modifying an element

// std::string& getElement(std::vector<std::string>& list, int index) {
//     return list[index]; // Devuelve una referencia al string dentro del vector
// }

// int main() {
//     std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
//     getElement(names, 1) = "Bobby"; // Modifica directamente el vector
//     std::cout << names[1]; // Bobby
// }


// 4. Avoid pointers in general
// References allow you to avoid many pointer errors: null, *ptr, &var, etc.

// void updateValue(int& x) {
//     x += 10;
// }

// int main() {
//     int a = 5;
//     updateValue(a); // Now is 15
// }

// don't care about: nullptr, ni de * y &.
// Safer and eadable