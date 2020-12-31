#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int cek; ///deklarasi variable
    int prima; ///deklarasi variable
    int i; ///deklarasi variable
    int batas;///deklarasi variable

       printf("====Menampilkan bilangan prima=====\n");
       puts(" \n");

       printf("Masukkan angka yg akan di cek= "); ///masukkan angka
       scanf("%d", &batas);

       for (prima=2; prima<batas;prima++)///untuk looping variable prima dari 1 sampai <batas
       {                                   ///dengan kenaikan satu
           cek = 0;///melakukan pengecekkan pada modulos bilangan
           for (i = 2; i < prima; i++) ///looping variable i
            {
                if (prima % i == 0) ///modulos dari variable prima terhadap i
                {
                    cek = 1;///pengecekkan modulos bilangan
                }
            }
                if (cek == 0) ///kondisi jika ceknya 0 maka bilangan dicetak
                {
                printf("Bilangan primanya adalah %d\n", prima);
                }
       }



    return 0;
}
