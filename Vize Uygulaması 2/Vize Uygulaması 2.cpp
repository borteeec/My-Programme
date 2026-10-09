#include <stdio.h>
#include <locale>
int main() {
	setlocale(LC_ALL, "Turkish"); //dil entegrasonu

	int vize = 0;
	int final = 0;

	//Not Alma Bölümü
	printf("Lütfen Vize Giriniz:"); //Vize Notu
	scanf("%d", &vize);

	printf("Lütfen Final Giriniz:"); //Final Notu
	scanf("%d", &final);

	//Finalden kalma sorgulama

	if (final < 50) {
		printf("Finalden kaldınız\n");
	}

	//Ortalama Hesaplama ve Sorgulama
	float ortalama = vize * 0.4 + final * 0.6;
	printf("Ortalamanız= %.f\n", ortalama);

	if (ortalama >= 50 && final >= 50) {
		printf("Dersi geçtiniz");
		return 0;
	}
	else {
		printf("Büt sınavına kaldınız\n");
	}

	//Büt Sınavı
	int büt = 0;
	printf("Lütfen Büt Notunuzu Giriniz:");
	scanf("%d", &büt);
	if (büt >= 50) {
		printf("Dersi geçtiniz");
	}
	else {
		printf("Dersi geçemediniz");
	}

}