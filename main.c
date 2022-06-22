#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int invertnum(int);
void divdig(int);

int main()
{
   int numero;

   do{
      printf("Ingrese un n%cmero: ",163);
      scanf("%d",&numero);

      if ( numero <= 0 )
         printf("N%cmero debe ser posivo.\n",163);

   }while ( numero <= 0 );

   int valnuevo = invertnum(numero);


   printf("Los d%cgitos de %d son:\n",161,numero);
   divdig(numero);
   printf("\n%d invertido es: %d\n",numero,valnuevo);
   printf("Los d%cgitos de %d son:\n",161,valnuevo);
   divdig(valnuevo);

	return 0;
}


/*
   Función: invertnum
   Argumento: int num
   Objetivo:  obtiene el número compuesto por los dígitos
   de num eninvertnum orden inverso.
   Retorno: (int) 'num' con dígitos invertidos.
*/
int invertnum(int num)
{
   int numnuevo = 0, dig;

   while ( num != 0 )
   {
      dig = num % 10;
      num/=10;
      numnuevo = numnuevo * 10 + dig;
   }

	return numnuevo;
}

/*
   Función: divdig
   Argumento: int num
   Objetivo:  imprimir los dígitos de 'num' separdos por coma y terminando con 'y'
   Retorno: ningún valor.
*/
void divdig(int num)
{
   int cantdig, dig, pot10;

   while ( num != 0 )
   {
      cantdig = (int)log10(num);
      pot10 = (int)(pow(10.0,cantdig));
      dig = num / pot10;
      printf("%d",dig);
      if ( cantdig > 1 )
         printf(", ");
      else
         if ( cantdig == 1 )
            printf(" y ");

      num %= pot10;
   }

   return;
}
