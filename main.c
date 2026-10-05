#include <stdio.h>

// serie di fibonacci
// stampare i primi n numeri della serie di fibonacci
// f_k = f_k (k-1) + f_(k-2)
// esempio
// 1 1 2 3 5 8 13 21 34 55 89 144 ...

int main () {
    int n; // quanti numeri ci sono nella serie
    int somma=1; // variabile che contiene l'ultima somma effettuata
    int k=1; // variabile che contiene il penultimo numero della serie

    for (int i=0;i<n;i++) {
        somma = somma + k;
        k = somma;
        printf(" %f ", somma);   
    }
    return 0;
}
