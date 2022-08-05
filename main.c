#include <stdio.h>
#include <stdlib.h>

int factoreil(int x)
{
    int f,i;
     f=1;
    for (i=1;i<=x;i++){
    f= f*i;
    }
    return f;
}
int main()
{
    int n;
    do {
            printf("entrer un nombre: \n ");
            scanf(" %d",&n);

}while (n<0);
printf("la resultat de %d  est %d",n,factoreil(n));


}

