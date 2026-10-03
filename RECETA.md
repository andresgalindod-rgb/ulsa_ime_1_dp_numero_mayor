# Receta: El mayor de tres números

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

``` text
1. MOSTRAR "Bienvenido a mi programa"
2. numero1 ← leerDecimal("Escribe el primer numero: ")
3. numero2 ← leerDecimal("Escribe el segundo numero: ")
4. numero3 ← leerDecimal("Escribe el tercer numero: ")
5. SI numero1 >= numero2 Y numero1 >= numero3 ENTONCES
       MOSTRAR "El número mayor es: ", numero1
   SINO SI numero2 >= numero1 Y numero2 >= numero3 ENTONCES
       MOSTRAR "El número mayor es: ", numero2
   SINO
       MOSTRAR "El número mayor es: ", numero3
   FIN SI
6. FIN