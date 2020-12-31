#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int angka1; ///variabel angka1 tipe data int
    int angka2; ///variabel angka2 tipe data int

    angka1=1; ///nilai awal angka1=1
        do ///jalankan
        {
        printf("Perulangan ke-%d\n",angka1); ///output
        angka1+=1; ///update value angka1+1

            for(angka2=1;angka2<=5;angka2+=1) ///looping variabel angka2 dari 1 sampai<=5
                {///jalankan                  ///update value angka2+1
                    printf("Angka ke-%d\n",angka2); /// output
                }
        }
        while(angka1<=7); ///ketika angka1<=7
    return 0;
}
