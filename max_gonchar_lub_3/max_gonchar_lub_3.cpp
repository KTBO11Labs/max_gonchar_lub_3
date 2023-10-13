#include<stdio.h>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float in, m, mi;
	printf("Введите дюимы: ");
	scanf_s("%f", &in);
	printf("\n");
	m = in * 0.025;
	mi = m * 1.41;
	printf("Аршины: %2f\n", mi);
	printf("\n");
	printf("Повторить? Если нет введите n: ");
}