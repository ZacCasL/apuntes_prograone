# Ejercicio 01 - Calculadora modular

A partir de la calculadora trabajada inicialmente en un único archivo `main.c`,
se debe reorganizar el programa utilizando una estructura modular.

## Estructura

```text
01-calculadora/
├── inc/
│   └── calculadora.h
└── src/
    ├── main.c
    └── calculadora.c
```
## Objetivo
Implementar correctamente las siguientes operaciones:

* suma;
* resta;
* multiplicación;
* división.

Las funciones deben implementarse en calculadora.c y declararse en calculadora.h.

El archivo main.c se utilizará para interactuar con el usuario y llamar a las
funciones correspondientes.

## Compilación

Desde la carpeta 01-calculadora:

```bash
gcc .\src\*.c -I .\inc\ -o calculadora
```

## Entrega
Una vez terminado el ejercicio:
```bash
git add .
git commit -m "Completa calculadora modular"
git push
```
Luego revisar el resultado de la corrección automática en GitHub.