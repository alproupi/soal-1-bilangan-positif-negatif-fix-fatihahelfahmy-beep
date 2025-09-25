#include <stdio.h>
#include <stdlib.h>

int main (){
    float pajak = 0;
    int gaji;
    char status;
    printf ("Masukkan gaji karyawan: ");
    scanf (" %d", &gaji);
    printf ("Masukkan status karyawan(tetap/kontrak/magang): ");
    scanf (" %c", &status);
    
    if (status == 't'){
        pajak = 0.10 * gaji;
    }else if (status == 'k' ){
        pajak = 0.05 * gaji; 
    } else if (status == 'm'){
        pajak = 0.00 * gaji;   
    }else {
        printf("Status tidak valid\n");
    }
        printf ("Gaji Bersih:%.2f \n",gaji - pajak); 
        return 0; 
}
          
