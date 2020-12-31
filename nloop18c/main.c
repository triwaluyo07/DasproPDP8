#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int angka1; /// variabel angka1 tipe data int
    int angka2; /// variabel angka2 tipe data int


    for(angka1=1;angka1<=7;angka1+=1) ///looping variabel angka1 dari 1 sampai batas kurang dari sama dengan 7
    {///jalankan                      ///dengan kenaikan 1

        for(angka2=1;angka2<=angka1;angka2++) ///looping variabel angka2 dari 1 sampai batas kurang dari=angka1
        {///jalankan                          ///dngan kenaikan angka2 bertambah 1
        printf("  "); ///output spasi spasi
        }

        for(angka2=7;angka2>=angka1;angka2--) ///looping variabel angka2 dari 7 sampai batas lebih dari =angka1
        {///jalankan                          ///dengan penurunan angka 2 berkurang1
        printf(" *"); ///output spasi bintang
        }
        printf(" \n"); ///ganti baris
    }
    return 0;
}

