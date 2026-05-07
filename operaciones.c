#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* ── multiplicar — es una funcion que multiplica 2 numeros cualquiera ─────────────────────── */
int multiplicar(int a, int b) {
    /* calcula el producto de dos numeros enteros y la funcion retorna el resultado que es un numero entero tambien.*/
    return a * b;
}
/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
