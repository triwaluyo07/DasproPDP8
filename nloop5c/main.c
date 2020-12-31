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

        angka2=1;/// nilai awal angka2 =1
        while(angka2<=5) ///ketika angka2<=5
        {///jalankan
            printf("Angka ke-%d\n",angka2); ///output
            angka2++; ///dengan update value+1
        }
    }
    return 0;
}
