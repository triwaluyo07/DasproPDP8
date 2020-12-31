#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int angka; /// variabel angka tipe data integer

    angka=1; /// angka awal=1
    do /// jalankan
    {
        printf("Perulangan ke-%d \n",angka); ///output
        angka +=1; ///updat value angka bertambah 1
    }
    while (angka<=7); /// ketika angka kurang dari sama dengan 7
    return 0;
}
