EJERCICIOS ALSE #3
NOMBRES:
Juan David Garavito Grande
Juan Felipe Cubillos Marín 
 
### ENLACE REPOSITORIO:
https://github.com/JuandaGrande/C2-EP2-G2

### Ejercicio Triangulo de Pascal:

Este programa genera y muestra el Triángulo de Pascal con el número de filas que el usuario indique. El triángulo de Pascal es una disposición de números en forma de pirámide, donde cada elemento se calcula como la suma de los dos números superiores de la fila anterior.
El programa pide al usuario un número de filas (entre 1 y 30), construye el triángulo y lo imprime por pantalla.
El código usa una clase llamada Solution para organizar la lógica en partes bien definidas:
Atributos privados:
numRows: almacena el número de filas que tendrá el triángulo.
triangulo: es un vector<vector<int>>, que guarda todas las filas del triángulo.
Métodos públicos:
Solution(int n): constructor que recibe el número de filas e invoca el método GenerarTriangulo().
printTriangulo() const: muestra el triángulo generado en la consola.
Método privado:
GenerarTriangulo(): crea el triángulo asignando 1 a los extremos de cada fila y calculando los valores interiores como la suma de los dos números de la fila anterior:

### Ejercicio Mejor tiempo para comprar y vender:

Este programa en calcula la máxima ganancia posible al comprar y vender una acción en distintos días, según los precios ingresados por el usuario. Primero solicita el número de días (manteniéndolo entre 1 y 10⁵) y luego pide el precio de la acción para cada día, validando que esté entre 0 y 10⁴. A medida que analiza los precios, el programa registra el valor mínimo encontrado y calcula la diferencia con los siguientes precios para identificar la ganancia máxima potencial.
Si los precios bajan cada día, la ganancia máxima resultará 0; en caso contrario, mostrará la diferencia más alta entre el precio mínimo de compra y el mayor precio posterior de venta.

### Ejercicio 3 Número de columna de Excel:

Este programa implementa una clase llamada ExcelColumConverter, cuyo propósito es convertir el nombre de una columna de Excel (por ejemplo “AB”, “AG”, “ZY”) en el número que representa su posición. Dentro de la clase hay una función llamada titleToNumber que toma una cadena de texto (el nombre de la columna) y la transforma en un número usando el sistema de numeración en base 26, ya que Excel usa 26 letras (de la A a la Z) como "dígitos".Primero el programa recorre cada carácter del texto, calcula su valor numérico restando 'A' (para obtener un rango de 1 a 26) y actualiza el resultado aplicando la fórmula result = result * 26 + value, que equivale a ir acumulando los valores según su posición (como si fuera el sistema decimal, pero con base 26).
En el main(), el programa crea un objeto de esta clase, pide al usuario que escriba el nombre de una columna y muestra el número correspondiente.
