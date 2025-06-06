# 📚 Proyecto 42 
## *CPP Modules*

Este repositorio contiene una colección de módulos educativos en C++ diseñados para enseñar programación orientada a objetos de forma progresiva. Todos los módulos siguen el estándar **C++98** y ofrecen ejemplos prácticos para entender conceptos clave como herencia, polimorfismo y punteros a funciones.

---

## 🎯 Propósito y Alcance

Este proyecto demuestra conceptos fundamentales de C++ orientado a objetos a través de módulos progresivos. 
Cada módulo se enfoca en temas avanzados:

- 🔧 Características avanzadas de C++.
- 🧬 Jerarquías de herencia y sobreescritura de métodos.
- 🧠 Polimorfismo y funciones virtuales.

---

## 🗂️ Estructura del Repositorio

Cada módulo se construye sobre el anterior, introduciendo gradualmente nuevas técnicas:

| Área de enfoque               | Conceptos Clave                              |
|-------------------------------|----------------------------------------------|
| Características avanzadas     | Punteros a funciones, despacho dinámico      | 
| Jerarquías de herencia        | Herencia base/derivada, sobreescritura       |
| Polimorfismo                  | Funciones virtuales, enlace en tiempo de ejecución |

---

## 🧠 Arquitectura de Aprendizaje

🧱 Fundamentos del Repositorio:

- **Despacho Avanzado**: `Harl` usa punteros a funciones miembro.
- **Fundamentos de Herencia**: `ClapTrap`, `ScavTrap`, `FragTrap`.
- **Patrones de Polimorfismo**: `Animal`, `Dog`, `WrongCat`.

---

## 🏗️ Sistema de Compilación

Todos los módulos cumplen con los mismos estándares:

- **Compilador**: `c++` con estándar `C++98`
- **Flags**: `-Wall -Wextra -Werror`
- **Seguridad en Memoria**: `-fsanitize=address -fsanitize=leak`
- **Depuración**: `-g`

---

## 🧩 Patrones Educativos Clave

### 🔁 Despacho con Punteros a Función
El módulo `Harl` implementa un sistema de despacho dinámico:

```cpp
void (Harl::*complaints[4])();
```
Mapea cadenas ("DEBUG", "INFO", etc.) a métodos miembro (debug(), info(), etc.).

---
## 🧬 Herencia y Overriding

`ClapTrap` es la clase base, y `ScavTrap` la hereda, sobreescribiendo métodos como `attack()` para personalizar su comportamiento.

---

## 🧠 Polimorfismo

El **Módulo 04** demuestra la diferencia entre:

- ✅ El uso correcto de **funciones virtuales** en la jerarquía `Animal`
- ❌ Un diseño sin funciones virtuales con `WrongAnimal`

Esto permite comparar el **enlace en tiempo de ejecución** (polimorfismo real) frente al **enlace en tiempo de compilación** (comportamiento incorrecto).

---

## 📌 Conclusión

Este repositorio es una excelente introducción práctica a la **programación orientada a objetos en C++**. A lo largo de los módulos, aprenderás:

✅ Diseño modular en C++  
✅ Despacho dinámico con punteros a función  
✅ Herencia y sobreescritura de métodos  
✅ Uso de funciones virtuales y polimorfismo  
✅ Buenas prácticas de compilación y seguridad de memoria

---

- 💻 **Proyecto:** Minishell – Escuela 42  
- ✍️ **Autor original:** Miriam Fernández Pérez  

---

