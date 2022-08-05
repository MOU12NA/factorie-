#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,f,x;
    printf("entre un nombre : \n");
    scanf(" %d",&x);
    if (x<0)
        printf("entre un nobmbre n'est pas positive");
    else
       if (f=0)
       printf("la factoriel es 1 ");
       else {
            f=1;
    for (i=1;i<=x;i++){
    f= f*i;
    }
}
      printf("la factorielle est %d",f);
    return 0;
}
