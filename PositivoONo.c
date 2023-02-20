#include <stdio.h>

/* programma che legge un intero e stampa un 
 * messaggio che indica se l'intero è positivo o no */
int main() {
	    int numero;                      // per memorizzare l'intero 
		printf("Caro utente introduci un intero!\n");
		scanf("%d", &numero);
		
		/* controlla se il numero è positvo */
		if(numero>0)
			    printf("Il numero %c positivo!", 138);
		else 
			    printf("Il numero non %c positivo!", 138);
}
