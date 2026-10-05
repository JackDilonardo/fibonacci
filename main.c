#include <stdio.h>

// serie di fibonacci
// stampare i primi n numeri della serie di fibonacci
// f_k = f_k (k-1) + f_(k-2)
// esempio
// 1 1 2 3 5 8 13 21 34 55 89 144 ...

int main () {
    int n; // quanti numeri ci sono nella serie
    int k1; // variabile che contiene l'ultimo numero della serie
    int k2; // variabile che contiene il penultimo numero della serie
    int somma; // somma fra l'ultimo numero e il precedente

    n = 20; // numero di iterazioni arbitrario
    k1 = 1; // il primo numero della serie e' 1
    k2 = 0; // il primo "penultimo" numero della serie non esiste perche' si trova prima del primo, per cui metto 0 per non alterare la prima somma
    somma = 1; // la somma della prima cella con la "prima" penultima cella sara' 1, e' fissa

    for (int i = 0 ; i < n ; i++) {
        printf(" %i ", somma);
        somma = k1 + k2;
        k2 = k1;
        k1 = somma;  
    }
    
    return 0;
}
