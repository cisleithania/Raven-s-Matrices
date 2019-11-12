#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void array_2(int array_2[60], double array_start[60], double array_end[60], char(&dd2)[110])
{
	int sum_a = 0; for (int i = 0; i<12; i++) sum_a += array_2[i];
	int sum_b = 0; for (int i = 12; i<24; i++) sum_b += array_2[i];
	int sum_c = 0; for (int i = 24; i<36; i++) sum_c += array_2[i];
	int sum_d = 0; for (int i = 36; i<48; i++) sum_d += array_2[i];
	int sum_e = 0; for (int i = 48; i<60; i++) sum_e += array_2[i];
	int sum = sum_a + sum_b + sum_c + sum_d + sum_e;


	double array_average[60];
	for (int i = 0; i < 60; i++) array_average[i] = (array_start[i] - array_end[i]) * (-1);

	double m = 0.000;
	for (int i = 0; i < 60; i++) m += array_average[i] ;
	double average = m / 60;

	double a = 0.000;
	for (int i = 0; i < 12; i++) a += array_average[i];
	double average_a = m / 12;

	double b = 0.000;
	for (int i = 12; i < 24; i++) b += array_average[i];
	double average_b = b / 12;

	double c = 0.000;
	for (int i = 24; i < 36; i++) c += array_average[i];
	double average_c = c / 12;

	double d = 0.000;
	for (int i = 36; i < 48; i++) d += array_average[i];
	double average_d = d / 12;

	double e = 0.000;
	for (int i = 48; i < 60; i++) e += array_average[i];
	double average_e = e / 12;

	ofstream out(dd2, ios_base::app);
	/*for (int i = 0; i < 60; i++) {
		out << array_2[i] << endl;
	}*/
	out << "№ задания" << "     Серия A     " << "     Серия B     " << "     Серия C     " << "     Серия D     " << "     Серия E     " << endl
		<< "    1" << "            " << array_2[0] << "                " << array_2[12] << "                " << array_2[24] << "                " << array_2[36] << "                " << array_2[48] << endl
		<< "    2" << "            " << array_2[1] << "                " << array_2[13] << "                " << array_2[25] << "                " << array_2[37] << "                " << array_2[49] << endl
		<< "    3" << "            " << array_2[2] << "                " << array_2[14] << "                " << array_2[26] << "                " << array_2[38] << "                " << array_2[50] << endl
		<< "    4" << "            " << array_2[3] << "                " << array_2[15] << "                " << array_2[27] << "                " << array_2[39] << "                " << array_2[51] << endl
		<< "    5" << "            " << array_2[4] << "                " << array_2[16] << "                " << array_2[28] << "                " << array_2[40] << "                " << array_2[52] << endl
		<< "    6" << "            " << array_2[5] << "                " << array_2[17] << "                " << array_2[29] << "                " << array_2[41] << "                " << array_2[53] << endl
		<< "    7" << "            " << array_2[6] << "                " << array_2[18] << "                " << array_2[30] << "                " << array_2[42] << "                " << array_2[54] << endl
		<< "    8" << "            " << array_2[7] << "                " << array_2[19] << "                " << array_2[31] << "                " << array_2[43] << "                " << array_2[55] << endl
		<< "    9" << "            " << array_2[8] << "                " << array_2[20] << "                " << array_2[32] << "                " << array_2[44] << "                " << array_2[56] << endl
		<< "    10" << "           " << array_2[9] << "                " << array_2[21] << "                " << array_2[33] << "                " << array_2[45] << "                " << array_2[57] << endl
		<< "    11" << "           " << array_2[10] << "                " << array_2[22] << "                " << array_2[34] << "                " << array_2[46] << "                " << array_2[58] << endl
		<< "    12" << "           " << array_2[11] << "                " << array_2[23] << "                " << array_2[35] << "                " << array_2[47] << "                " << array_2[59] << endl
		<< "Сумма:           " << sum_a << "                " << sum_b << "                " << sum_c << "                " << sum_d << "                " << sum_e << endl
		<< "Общая сумма:     " << sum << endl
		<< "Ср.время:" << "           " << average_a << "                " << average_b << "                " << average_c << "                " << average_d << "                " << average_e << endl
		<< "Общее ср.время: " << average << endl;
}