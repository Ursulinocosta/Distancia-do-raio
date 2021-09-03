# Distancia-do-raio
Com o tempo gasto ele vai responder qual foi a distancia que o raio percorreu

#include "iostream" // cin cout
#include "math.h" // bibliotecas matematicas
#include "cstdlib" // system
#include "iomanip" // precisão decimal
using namespace std;
#define som 340
double distancia, tempo; // variáveis
int main ()
{
setlocale(LC_ALL, "Portuguese");
system("cls");
cout << "\n Digite o tempo: ";
cin >> tempo;
distancia = tempo * som;
cout<<"\n A distancia que o raio percorreu foi: " <<distancia
 << endl;
system("pause");
return 0;
}
