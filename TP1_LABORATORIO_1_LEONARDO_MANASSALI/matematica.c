#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/** \brief Solicita un numero al usuario y lo devuelve si y solo si es validado.
 *
 * \param number: direccion de memoria donde se guardara el numero validado
 * \param minimum: valor minimo que puede tener el numero que elige el usuario
 * \param maximum: valor maximo que puede tener el numero que elige el usuario
 * \param message: mensaje mostrado al solicitar el numero al usuario
 * \param errorMessage: mensaje mostrado si el usuario escribio un numero fuera de rango
 *
 */
void rangedGetInt(int* number,int minimum,int maximum,char message[],char errorMessage[] )
{
    int num;
    printf("%s",message);
    scanf("%d",&num);
    setbuf(stdin, NULL);
    while(num < minimum || num > maximum)
    {
        printf("%s",errorMessage);
        scanf("%d", &num);
        setbuf(stdin, NULL);
    }
    *number = num;
}

/** \brief Genera un menu con la cantidad de opciones y texto que el usuario quiera.
 *
 * \param totalOptions: se coloca un entero que indica la cantidad de opciones a generar
 * \param Se agregan parametros con string para las opciones, segun la cantidad elegida.
 *
 */
void indexGenerator(int totalOptions,...)
{
    int i;
    va_list arguments;
    va_start(arguments,totalOptions);
    printf("###########____________________________________________________________________#\n"    );
    printf("   MENU:\n\n"                                                                          );
    printf("###########____________________________________________________________________#\n"  );
    for(i = 0; i < totalOptions; i++)
    {
        printf("  %s\n",va_arg(arguments,int));
    }
    printf("\n############___________________________________________________________________#\n");
    va_end(arguments);
}

/** \brief Realiza una suma de dos flotantes.
*
* \param A es el primer numero (flotante) que ingresa en la funci�n.
* \param B es el segundo numero (flotante) que ingresa en la funci�n.
* \return Devuelve el resultado de la suma entre A y B en tipo de dato flotante.
*
*/
float add(float A, float B)
{
    float result;
    result =  A + B;
    return result;
}

/** \brief Realiza una resta de dos flotantes.
*
* \param A es el primer numero (flotante) que ingresa en la funci�n.
* \param B es el segundo numero (flotante) que ingresa en la funci�n.
* \return Devuelve el resultado de la resta entre A y B respectivamente en tipo de dato flotante.
*
*/
float subtract(float A, float B)
{
    float result;
    result = A - B;
    return result;
}

/** \brief Realiza una divisi�n entre dos flotantes.
*
* \param A es el dividendo (flotante).
* \param B es el divisor (flotante).
* \return Devuelve el cociente de la division entre A y B respectivamente en tipo de dato flotante.
*
*/
float divide(float A, float B)
{
    float result;
    result = A / B;
    return result;

}

/** \brief Realiza una multiplicacion entre dos flotantes.
*
* \param A es el primer numero (flotante) que ingresa en la funci�n.
* \param B es el segundo numero (flotante) que ingresa en la funci�n.
* \return Devuelve el resultado de la multiplicaci�n entre A y B en tipo de dato flotante.
*
*/
float multiply(float A, float B)
{
    float result;
    result = A * B;
    return result;
}

/** \brief Calcula el factorial de un numero entero.
*
* \param A: es el numero entero que ingresa en la funcion.
* \return Devuelve el factorial de A en tipo de dato long long int.
*
*/
int factorial(int A)
{
    int accumulator = 1;
    int i;

    for(i = 1; i <= A;i++)
    {
        accumulator *= i;
    }

    return accumulator;
}
