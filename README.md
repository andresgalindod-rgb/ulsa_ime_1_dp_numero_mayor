# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
Este programa te pide 3 numeros y te muestra cual de los 3 es el mas grande.

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. Primer número (double): primer valor que escribe el usuario para comparar.
2. Segundo número (double): segundo valor que escribe el usuario para comparar.
3. Tercer número (double): tercer valor que escribe el usuario para comparar.

**Salida:**
1. Número mayor (double): el numero más grande de los tres.

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
Muestro el valor del mayor, porque en un caso como 7, 7, 3 el primero y el segundo son el mayor, y no tendría que escoger entre los dos ya que el valor siempre es uno solo (7).

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
utilizaria leerDecimal porque si utilizara un numero como el 2.5 con leerEntero no lo acaptaria.

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- deben ser numeros no letras
- el programa siempre debe mostrar un solo resultado

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
No, porque son numeros reales

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Muestra el valor del mayor una sola vez por ejemplo con 7, 7, 3 muestra 7 y con 5, 5, 5 muestra 5".

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
leerDecimal detecta si escriben letras y vuelve a pedir el dato.

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
Que siemore se mostrara el numero mas grande

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 7 | 4 | 2 | 7 |
| 2 (el mayor en segunda posición) | 5 | 9 | 3 | 9 |
| 3 (el mayor en tercera posición) | 6 | 4 | 8 | 8 |
| 4 (con un empate) | 7 | 7 | 3 | 7 |
| 5 (con negativos) | -1 | -3 | -5 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí 
**¿Tuve que corregirla? ¿Qué cambié?** No
**¿Cuántas versiones de mi receta escribí hasta la final?** una
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
No

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
Bienvenido a mi programa
Escribe el primer numero: 9
Escribe el segundo numero: 4
Escribe el tercer numero: 2
El numero mayor es: 9

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | `std::cout << "Bienvenido a mi programa\n";` |
| 2. Leer el primer número | `numero1 = leerDecimal("Escribe el primer numero: ");` |
| 3. Leer el segundo número | `numero2 = leerDecimal("Escribe el segundo numero: ");` |
| 4. Leer el tercer número | `numero3 = leerDecimal("Escribe el tercer numero: ");` |
| 5. Comparar y mostrar el mayor | `if (numero1 >= numero2 && numero1 >= numero3) {...} else if (numero2 >= numero1 && numero2 >= numero3) {...} else {...}` con un `std::cout` en cada camino |
| 6. Fin | `return 0;` |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
No

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
El compilador advirtió que comparaciones como `X<=Y<=Z` no tienen su significado matemático.
Con 3, 2 y 1 el programa mostró 1 en lugar de 3, porque C++ primero calcula 3 > 2, que da verdadero (1), y luego compara 1 > 1, que es falso. Por eso terminó en el else. La forma correcta es `numero1 > numero2 && numero1 > numero3`.
**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
Al cambiar `>=` por `>`, con 7, 7, 3 el programa mostró 3, que está mal. Como 7 > 7 es falso, fallan el if y el else if, y entra al else, que muestra el tercer número. Con 5, 5, 5 mostró 5, pero solo por suerte: también fallaron todas las condiciones y entró al else, y el tercer número casualmente era 5. Por eso dejé `>=`, para que los empates funcionen.

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
no lo hice

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 | Sí |
| Mayor en medio | 4, 9, 2 | 9 | 9 | Sí |
| Mayor al final | 2, 4, 9 | 9 | 9 | Sí |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | 7 | Sí |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | 7 | Sí |
| Empate abajo | 8, 3, 3 | 8 | 8 | Sí |
| Los tres iguales | 5, 5, 5 | 5 | 5 | Sí |
| Todos negativos | -4, -1, -9 | -1 | -1 | Sí |
| Con cero | -2, 0, -5 | 0 | 0 | Sí |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | Sí |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | vuelve a pedir el dato; 3 | Sí |
| Caso propio 1 | 2.5, 2.5, 1 | 2.5 | 2.5 | Sí |
| Caso propio 2 | -1.5, -1.2, -3 | -1.2 | -1.2 | Sí |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
A usar if, else if y else con &&, y que `>=` es necesario para los empates.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Revisar llaves y punto y coma antes de compilar.

**¿Qué fue lo más difícil y cómo lo resolví?**
Escribir las condiciones; lo resolví guiándome con mi receta.

**¿Qué pregunta me quedó sin responder?**
Cómo encontrar el mayor de muchos números.

**¿Qué fue más fácil para mí: la Práctica 3, la 4 o esta? ¿Por qué?**
esta porque se me hizo un poco mas fasil realizar todo

**¿Pensé en los empates antes de programar o los descubrí al probar?**
Los pensé antes, en la Fase 1.

## 14. Lista de verificación antes de entregar (Fase 5)

- [ si ] Llené las secciones 1 a 13 (no quedan `_____`)
- [ si ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ no ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [ si ] Mi programa compila sin advertencias
- [ si ] Probé todos los casos de la tabla, incluidos los empates
- [ si ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ no lo modifique ] No modifiqué `utilerias.h`
- [ si ] Hice al menos 3 commits con mensajes claros
- [ si ] Hice `git push` y verifiqué mi fork en GitHub
- [ si ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [ si ] Entregué el enlace de mi fork en Classroom