#include "task.h"
#include "queue.h"
#include "cluster.h"
#include "statistic.h"
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");

	int tact,
		cpu;

	srand(time(0));
	cout << "������� ���������� ������: \t";
	cin >> tact;
	cout << "������� ���������� �����������: \t";
	cin >> cpu;

}