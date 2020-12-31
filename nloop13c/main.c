#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int input; ///variabel input tipe data int
    int angka; ///variabel angka tipe data int
    int hasil; ///variabel hasil tipe data int

    printf("Masukkan angka : \n"); ///nilai diinput user
    scanf("%d",&input);

    for(angka=1;angka<=10;angka+=1) ///looping variabel angka sampai <=10
    {/// jalankan                   ///update value angka +1
        hasil=angka*input; /// angka * nilai input = hasil
        printf("%d x %d = %d\n",angka,input,hasil); ///output angka yg dilooping, angka input dan hasil
    }
    return 0;
}
