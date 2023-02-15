// pole02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
static bool RovnajiSe(char pole[],int delkaPole)
{
	bool RovnajiSe = false;
	for (int i = 0; i < delkaPole/2&&!RovnajiSe; i++)
	{
		for (int j = i+1; j< delkaPole; j++)
		{
			if (pole[i] == pole[j])
			{
				RovnajiSe = true;
				break;
			}
		}
	}
	return RovnajiSe;
}
int main()
{
	char pole[10];
	int n;
	cout << "Zadejte pocet cisel n prvkove posloupnosti: ";
	cin >> n; char x;
	cout << "\nZadavejte znaky posloupnosti: ";
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		pole[i] = x;
	}
	if (RovnajiSe(pole, n))cout << "\nNejake dva znaky se v poli rovnaji";
	else cout << "\nZadne 2 znaky se v poli nerovnaji";
	return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
