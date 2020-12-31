#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int angka1; /// variabel angka1 tipe data int
    int angka2; /// variabel angka2 tipe data int

        angka1=1; ///nilai awal angka1=1
        while(angka1<=7)///ketika angka <=7
        {///jalankan
            printf("Perulangan ke-%d\n",angka1); ///output


            for(angka2=1;angka2<=5;angka2+=1) ///looping variabel angka dari 1 sampai kurang dari=5
            {///jalankan                   /// dengan update value +1
             printf("Angka ke-%d\n",angka2); ///output
            }
            angka1++; ///dengan update balue +1
        }
    return 0;
}
