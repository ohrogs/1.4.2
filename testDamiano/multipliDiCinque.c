#include <stdio.h>

int main(){
    /*
    L'utente introduce da tastiera due numeri interi: inizio e lung. 
    Il programma deve stampare una serie di multipli di 5. 
    La serie inizia al primo multiplo di 5 >= a INIZIO ed è lunga LUN elementi.
    */
    int inizio, inizioOutput, num, lung, i;

    printf("Inserisci il numero che rappresenta il punto di inizio: ");
    scanf("%d", &inizio);
    do{
        printf("Inserisci la lunghezza della serie: ");
        scanf("%d", &lung);
    }while(lung<=0);

    //Memorizzo per output finale
    inizioOutput=inizio;

    while(inizio%5!=0){
        inizio++;
    }
    // Gestisco i numeri negativi di partenza per non mostrare 0 come multiplo di 5
    if(inizio==0){
        inizio+=5;
    }

    printf("I primi %d numeri multipli di 5 a partire da %d sono: \n", lung, inizioOutput);
    for(num=inizio, i=0;i<lung;i++){
        printf("%d   ", num);
        num+=5;
    }

    return 0;
}