Gabriel Chaurio 17-10126
Miguel Perez 15-11126

OpenGL

Desarrollado en Windows 11

Este proyecto está desarrollado en C++ y utiliza Visual Studio como entorno de desarrollo. El código fuente principal está ubicado en el archivo `Main.cpp`.

## Requisitos previos

1. **Visual Studio**: Este proyecto está configurado para ejecutarse en Visual Studio, la version usada es la 17 de 2022.

2. **Dependencias adicionales**:
   - El proyecto utiliza bibliotecas externas que están incluidas en la carpeta `Libraries`, siendo estas glfw y glad.
   - Se incluye también el archivo `glad.c`, el cual una implementación de OpenGL.
   - Se deben agregar los directorios lib e include mpara que no haya errores al buildear, esto se puede hacer en Visual Studio, accediendo a Project -> Gl_FCC Properties -> VC++ Directories. Aqui, dentro de Include directories y library directories, agregar los path a las carpetas correspondientes dentro del proyecto.

3. **Compilador**: El proyecto está diseñado para ser compilado con el compilador C++ proporcionado por Visual Studio.

## Cómo ejecutar el proyecto

1. **Clonar o descargar**: Clona o descarga el repositorio.

2. **Abrir en Visual Studio**: Abre el archivo de solución `GL_FCC.sln` en Visual Studio.

3. **Compilar y Ejecutar**: Una vez que el proyecto esté abierto, selecciona el modo de compilación y la arquitectura. Luego, compila el proyecto y ejecutalo.
