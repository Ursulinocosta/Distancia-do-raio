#include "iostream" // cin cout
#include "math.h" // bibliotecas matematicas
#include "cstdlib" // system
#include "iomanip" // precis�o decimal
using namespace std;
#define som 340
double distancia, tempo; // vari�veis
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