/* File         : seqsearch.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : menentukan posisi di mana elemen tabel bernilai X */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int X = 8; /* indeks di mnaa Tab [max] bernilai maksimum */
    
    /* Algoritma sequential search paling sederhana */
    /* program berhenti pada indeks i di mana nilai diketemukan */
    i = 0;
    
    while ((Tab[i]!=X) && (i<9))
    {
        i++;
    } /* Tab [i] == X atau i == 9 */
    
    if (Tab[i] == X)
        {
            printf ("indeks bernilai X = %d", i);
        }
        else 
        {
            printf ("Nilai tidak diketemukan");    
        }
    
    return 0;
}
