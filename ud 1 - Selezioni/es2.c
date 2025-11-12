/* 
    semplice programma che chiede in input un valore in input comunica se è positivo, negativo, negativo oppure nulla
*/

#include <stdio.h>
int main (void){
    int v;
    char junk;
    printf("Inserisci un valore intero:\n");
    scanf("%d", &v);
    junk = getchar ();

    if(v>0){
        printf("Il valore è positivo\n");
    }
    if (v==0)
    {
        printf("Il valore è nullo\n");
    }
    if (v<0){
        printf("il valore è negativo\n");
    }    

    return (0);

}
    
