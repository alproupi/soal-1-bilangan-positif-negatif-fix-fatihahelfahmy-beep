#include <stdio.h>
#include <stdlib.h>

int main (){
    int bil;
    printf ("Masukkan bilangan: ");
    scanf ("%d", &bil);
    
    if (bil < 0){
        printf ("Bilangan Negatif\n");
    } else {
        printf ("Bilangan Positif\n");   
    }
    return 0;       
}