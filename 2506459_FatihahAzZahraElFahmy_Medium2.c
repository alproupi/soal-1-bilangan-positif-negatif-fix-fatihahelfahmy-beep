#include <stdio.h>
#include <stdlib.h>

int main (){
    int taun;
    printf ("Masukkan tahun: ");
    scanf ("%d", &taun);
    
    if (taun %4 == 0 && (taun %100 != 0 || taun %400 == 0)){
        printf (" Tahun Kabisat\n");
    } else {
        printf ("Bukan Tahun Kabisat\n");   
    }
    return 0;       
}