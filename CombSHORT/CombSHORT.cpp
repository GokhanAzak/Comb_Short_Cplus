#include <iostream>
using namespace std;

// Tarak s�ralama fonksiyonu
void tarakSiralama(int dizi[], int boyut)
{
    // Aral�k fakt�r�n� 1.3 olarak belirliyoruz
    int bosluk = boyut;
    bool degisti = true;

    // Aral�k 1 olana kadar veya dizide de�i�im kalmayana kadar d�ng�y� s�rd�r�yoruz
    while (bosluk != 1 || degisti == true)
    {
        // Aral��� k���lt�yoruz
        bosluk = (bosluk * 10) / 13;

        // Aral�k 1'den k���kse 1 olarak ayarl�yoruz
        if (bosluk < 1)
            bosluk = 1;

        // De�i�im olup olmad���n� kontrol etmek i�in degisti'yi false olarak ayarl�yoruz
        degisti = false;

        // Diziyi aral�k kadar kayd�rarak kar��la�t�rma yap�yoruz
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

// Diziyi ekrana yazd�ran fonksiyon
void diziYazdir(int dizi[], int boyut)
{
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";
}

// Ana fonksiyon
int main()
{
    // �rnek bir dizi tan�ml�yoruz
    int dizi[] = { 8, 4, 1, 56, 3, -44, 23, -6, 28, 0 };
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    // Tarak s�ralama fonksiyonunu �a��r�yoruz
    tarakSiralama(dizi, boyut);

    // S�ralanm�� diziyi yazd�r�yoruz
    cout << "S�ralanm�� dizi: \n";
    diziYazdir(dizi, boyut);

    return 0;
}