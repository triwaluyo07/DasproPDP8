#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int angka; /// variabel angka tipe data int
    int angka2; /// variabel angka2 tipe data int

    for(angka=1;angka<=7;angka+=1) ///looping variabel angka dari 1 sampai kurang dari=7
    {///jalankan                   /// dengan update value +1
        printf("Perulangan ke-%d\n",angka); ///output

        for(angka2=1;angka2<=5;angka2+=1) ///looping variabel angka2 dari 1 sampai kurang dari=5
        {///jalankan                      ///dengan update value +1
            printf("angka ke-%d\n",angka2); ///output
        }
    }
    return 0;
}
