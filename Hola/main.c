#include <stdio.h>
#include <stdlib.h>

int suma (int , int );

int main ()
{ int n1, n2, result;
	printf("Numero 1: ");
	scanf("%d",&n1);
	printf("Numero 2: ");
	scanf("%d",&n2);
	result = suma(n1,n2);
	printf("La suma es: %d", result);
	return 0;

}

int suma (int op1, int op2)
{
    int res;
    res = op1 + op2;
    return res;
}
