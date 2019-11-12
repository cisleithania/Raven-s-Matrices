#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void raven_time (double array_start[60], double array_end[60], char(&dd3)[110])
{
	ofstream out(dd3, ios_base::app);

	out << "№ таблицы" << "             Время    " << endl;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 12; ++j) {
			int array_index = i * 12 + j;
			double delta = array_end[array_index] - array_start[array_index];

			out << "Серия " << i + 1 << " Таблица " << j + 1 << ":    " << delta << endl;
		}
	}

}