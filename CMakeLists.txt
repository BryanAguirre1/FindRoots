
# Version minima de CMake que queremos soportar
cmake_minimum_required(VERSION 3.18.2)  

# El nombre del "proyecto" CMake, que será el nombre de la "solución" de Visual Studio
project(findroots)

# Usaremos como mínimo la versión C++11 del lenguaje C++
set(CMAKE_CXX_STANDARD 11)

IF(CMAKE_COMPILER_IS_GNUCXX)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
ENDIF()

# Definir programa ejecutable: 
add_executable(
	# Nombre del ejecutable
	findroots
	# Lista de ficheros de código fuente a compilar en este "target":
	findroots.cpp
)
