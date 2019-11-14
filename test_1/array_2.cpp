#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void array_2(int array_2[60], double array_start[60], double array_end[60], char(&dd2)[110])
{
	int sum_series[5];
	int sum = 0;
	std::fill(std::begin(sum_series), std::end(sum_series), 0);
	int count = 0;
	for (int i = 0; i < (sizeof(sum_series)/sizeof(sum_series[0])); i++) {
		for (int j = 0; j < 12; j++) {
			sum_series[i] += array_2[count];
			count++;
		}
		sum += sum_series[i];
	}

	double array_average[60];
	for (int i = 0; i < 60; i++) array_average[i] = (array_end[i] - array_start[i]);

	double m = 0.000;
	for (int i = 0; i < 60; i++) m += array_average[i] ;
	double average = m / 60;

	double average_time_series[5];
	std::fill(std::begin(average_time_series), std::end(average_time_series), 0.000);
	count = 0;
	for (int i = 0; i < (sizeof(average_time_series) / sizeof(average_time_series[0])); i++) {
		for (int j = 0; j < 12; j++) {
			average_time_series[i] += array_average[count];
			count++;
		}
		if (i == 0) { average_time_series[i] = m / 12; }
		else average_time_series[i] = average_time_series[i] / 12;
	}

	ofstream out(dd2, ios_base::app);

	out << "№ задания" << "     Серия A     " << "     Серия B     " << "     Серия C     " << "     Серия D     " << "     Серия E     " << endl;
		
	for (int i = 0; i < 12; i++) {
		out << "    " << i+1 << "            " << array_2[i] << "                " << array_2[i+12] << "                " << array_2[i+24] << "                " << array_2[i+36] << "                " << array_2[i+48] << endl;
		}
	out << "Сумма:           " << sum_series[0] << "                " << sum_series[1] << "                " << sum_series[2] << "                " << sum_series[3] << "                " << sum_series[4] << endl
	<< "Общая сумма:     " << sum << endl
	<< "Ср.время:" << "           " << average_time_series[0] << "                " << average_time_series[1] << "                " << average_time_series[2] << "                " << average_time_series[3] << "                " << average_time_series[4] << endl
	<< "Общее ср.время: " << average << endl;
}