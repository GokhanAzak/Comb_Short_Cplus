#include <iostream>
using namespace std;

// Tarak sýralama fonksiyonu
void tarakSiralama(int dizi[], int boyut)
{
    // Aralýk faktörünü 1.3 olarak belirliyoruz
    int bosluk = boyut;
    bool degisti = true;

    // Aralýk 1 olana kadar veya dizide deðiþim kalmayana kadar döngüyü sürdürüyoruz
    while (bosluk != 1 || degisti == true)
    {
        // Aralýðý küçültüyoruz
        bosluk = (bosluk * 10) / 13;

        // Aralýk 1'den küçükse 1 olarak ayarlýyoruz
        if (bosluk < 1)
            bosluk = 1;

        // Deðiþim olup olmadýðýný kontrol etmek için degisti'yi false olarak ayarlýyoruz
        degisti = false;

        // Diziyi aralýk kadar kaydýrarak karþýlaþtýrma yapýyoruz
        for (int i = 0; i < boyut - bosluk; i++)
        {
            if (dizi[i] > dizi[i + bosluk])
            {
                swap(dizi[i], dizi[i + bosluk]);
                degisti = true;
            }
        }
    }
}

// Diziyi ekrana yazdýran fonksiyon
void diziYazdir(int dizi[], int boyut)
{
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";
}

// Ana fonksiyon
int main()
{
    // Örnek bir dizi tanýmlýyoruz
    int dizi[] = { 8, 4, 1, 56, 3, -44, 23, -6, 28, 0 };
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    // Tarak sýralama fonksiyonunu çaðýrýyoruz
    tarakSiralama(dizi, boyut);

    // Sýralanmýþ diziyi yazdýrýyoruz
    cout << "Sýralanmýþ dizi: \n";
    diziYazdir(dizi, boyut);

    return 0;
}