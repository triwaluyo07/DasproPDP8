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
        while(angka1<=7) ///ketika angka1<=7
        {///jalankan
            printf("Perulangan ke-%d\n",angka1); ///output
                angka2=1; ///nilai awal angka2 =1
                while(angka2<=5)///ketika angka2 kurang dari=5
                {///jalankan
                 printf("Angka ke-%d\n",angka2);///output
                angka2+=1; ///update value+1
                }
        angka1++; ///update value +1
        }
    return 0;
}
