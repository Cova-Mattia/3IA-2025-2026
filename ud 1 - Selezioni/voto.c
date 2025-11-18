#include <stdio.h>
int main (void) {
    int voto;
    printf("Inserisci il voto:\n");
    scanf("%d",&voto);
    if (voto>= 1 && voto<= 3){
       printf ("gravemente insufficente\n");
       
    } else if (voto>= 4 && voto<= 5){
        printf ("insufficente\n");
        
    } else if (voto == 6){
        printf ("sufficente\n");
        
    } else if (voto>= 7 && voto <=8){
        printf("buono\n");

    }
 else if (voto>= 9 && voto <=10){
        printf("eccellente\n");

}
        return (0);
}