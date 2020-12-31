#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka1; ///variabel angka1 tipe data int
    int angka2; ///variabel angka2 tipe data int


    for(angka1=1;angka1<=6;angka1++) ///looping variabel angka1 sampai <=6
    {///jalankan                     /// update value angka1+1
        for(angka2=1;angka2<=6;angka2++) ///looping variabel angka2 sampai <=6
        {///jalankan                     ///update value angka2 +1
         printf("%d%d ",angka1,angka2); ///ouput angka1 angka2
        }
      printf(" \n");
    }
    return 0;
}
