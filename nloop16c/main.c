#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int angka1; ///variabel angka1 tipe data int
    int angka2; ///variabel angka2 tipe data int

    for(angka1=0;angka1<=7;angka1+=1) ///looping variabel angka1 sampai <=7
    {///jalankan                      ///update value angka1 +1
        for(angka2=7;angka2>=angka1;angka2--) ///looping variabel angka2 sampai >=angka1
        {///jalankan                      ///update value angka2 -1
        printf("  "); ///output spasi spasi
        }
        for(angka2=1;angka2<angka1;angka2++) ///looping variabel angka2 sampai <angka1
        {///jalankan                      ///update value angka2 +1
        printf(" *"); ///output spasi bintang
        }

        printf(" \n");
    }
    return 0;
}
