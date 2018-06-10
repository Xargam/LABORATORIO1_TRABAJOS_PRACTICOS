#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "matematica.h"
int main()
{
    char answer = '0';
    float A = 0,B = 0; // Guardan los operandos del usuario
    int selection;
    printf("Encender calculadora?\n\n");
    system("pause");
    system("color 03");
    while(answer != '9')
    {
        system("cls");
        printf("*--------------------*CALCULADORA LEONARDO MANASSALI V2.0*---------------------*\n");
        indexGenerator(9,"1- Ingresar operando A.","2- Ingresar operando B.","3- Calcular la suma. (A+B)","4- Calcular la resta.(A-B)","5- Calcular la division.(A/B)","6- Calcular la multiplicacion.(A*B)","7- Calcular el factorial.(A!)","8- Calcular todas las operaciones.","9- Salir.");
        printf("OPERANDOS: A=%.2f B=%.2f\n",A,B);
        rangedGetInt(&selection,1,9,"\nSELECCIONAR OPCION: ","ERROR, REINGRESAR OPCION: ");
        switch(selection)
        {
        case 1:
            printf("\nOPERANDO A: ");
            scanf("%f",&A);
            setbuf(stdin, NULL);
            break;
        case 2:
            printf("\nOPERANDO B: ");
            scanf("%f",&B);
            setbuf(stdin, NULL);
            break;
        case 3:
            printf("\nSUMA: %.2f + %.2f = %.2f\n\n",A,B,add(A,B));
            system("pause");
            B = 0.0, A = 0.0;
            break;
        case 4:

            printf("\nRESTA: %.2f - %.2f = %.2f\n\n",A,B,subtract(A,B));
            system("pause");
            B = 0.0, A = 0.0;
            break;
        case 5:
            if(B == 0)
            {
                printf("\nDIVISION: %.2f / %.2f = ERROR: division por 0\n\n\a",A,B);
            }
            else
            {
                printf("\nDIVISION: %.2f / %.2f = %.2f\n\n",A,B,divide(A,B));
            }
            B = 0.0, A = 0.0;
            system("pause");
            break;
        case 6:
            printf("\nMULTIPLICACION: %.2f * %.2f = %.2f\n\n",A,B,multiply(A,B));
            system("pause");
            B = 0.0, A = 0.0;
            break;
        case 7:
            if(A < 0)
            {
                printf("\nFACTORIAL: %.f! = ERROR: operando negativo\n\n\a",A);
            }
            else if(A > 8)
            {
                printf("\nFACTORIAL: %.f! = ERROR: operando demasiado grande\n\n\a",A);
            }
            else
            {
                printf("\nFACTORIAL: %.f! = %d\n\n",A,factorial(A));

            }
            system("pause");
            A = 0.0;
            break;
        case 8:
            printf("\n  %.2f + %.2f = %.2f\n",A,B,add(A,B));
            printf("  %.2f - %.2f = %.2f\n",A,B,subtract(A,B));
            if(B == 0)
            {
                printf("  %.2f / %.2f = ERROR: division por 0\n\a",A,B);
            }
            else
            {
                printf("  %.2f / %.2f = %.2f\n",A,B,divide(A,B));
            }
            printf("  %.2f * %.2f = %.2f\n",A,B,multiply(A,B));
            if(A < 0)
            {
                printf("  %.f! = ERROR: operando negativo\n\n\a",A);
            }
            else if(A > 8)
            {
                printf("  %.f! = ERROR: operando demasiado grande\n\n\a",A);
            }
            else
            {
                printf("  %.f! = %d\n\n",A,factorial(A));
            }
            system("pause");
            B = 0.0, A = 0.0;
            break;
        case 9:
            printf("\nSeguro? Confirmar con 9. Para volver presione otra tecla.\n");
            answer = getch();
            break;
        }


    }
    system("cls");
    system("color 07");
    printf("Calculadora apagada\n\n");
    system("pause");
    return 0;
}

