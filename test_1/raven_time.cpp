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
	/*for (int i = 0; i < 60; i++) {
	out << array_2[i] << endl;
	}*/
	out << "� �������" << "                  �����     " << endl
		<< "����� 1 ������� 1:    " << array_end[0] - array_start[0] << endl
		<< "����� 1 ������� 2:    " << (array_start[1] - array_end[1])* (-1) << endl
		<< "����� 1 ������� 3:    " << (array_start[2] - array_end[2]) * (-1) << endl
		<< "����� 1 ������� 4:    " << (array_start[3] - array_end[3]) * (-1) << endl
		<< "����� 1 ������� 5:    " << (array_start[4] - array_end[4]) * (-1) << endl
		<< "����� 1 ������� 6:    " << (array_start[5] - array_end[5]) * (-1) << endl
		<< "����� 1 ������� 7:    " << (array_start[6] - array_end[6]) * (-1) << endl
		<< "����� 1 ������� 8:    " << (array_start[7] - array_end[7]) * (-1) << endl
		<< "����� 1 ������� 9:    " << (array_start[8] - array_end[8]) * (-1) << endl
		<< "����� 1 ������� 10:    " << (array_start[9] - array_end[9]) * (-1) << endl
		<< "����� 1 ������� 11:    " << (array_start[10] - array_end[10]) * (-1) << endl
		<< "����� 1 ������� 12:    " << (array_start[11] - array_end[11]) * (-1) << endl
		<< "����� 2 ������� 1:    " << (array_start[12] - array_end[12]) * (-1) << endl
		<< "����� 2 ������� 2:    " << (array_start[13] - array_end[13]) * (-1) << endl
		<< "����� 2 ������� 3:    " << (array_start[14] - array_end[14]) * (-1) << endl
		<< "����� 2 ������� 4:    " << (array_start[15] - array_end[15]) * (-1) << endl
		<< "����� 2 ������� 5:    " << (array_start[16] - array_end[16]) * (-1) << endl
		<< "����� 2 ������� 6:    " << (array_start[17] - array_end[17]) * (-1) << endl
		<< "����� 2 ������� 7:    " << (array_start[18] - array_end[18]) * (-1) << endl
		<< "����� 2 ������� 8:    " << (array_start[19] - array_end[19]) * (-1) << endl
		<< "����� 2 ������� 9:    " << (array_start[20] - array_end[20]) * (-1) << endl
		<< "����� 2 ������� 10:    " << (array_start[21] - array_end[21]) * (-1) << endl
		<< "����� 2 ������� 11:    " << (array_start[22] - array_end[22]) * (-1) << endl
		<< "����� 2 ������� 12:    " << (array_start[23] - array_end[23]) * (-1) << endl
		<< "����� 3 ������� 1:    " << (array_start[24] - array_end[24]) * (-1) << endl
		<< "����� 3 ������� 2:    " << (array_start[25] - array_end[25]) * (-1) << endl
		<< "����� 3 ������� 3:    " << (array_start[26] - array_end[26]) * (-1) << endl
		<< "����� 3 ������� 4:    " << (array_start[27] - array_end[27]) * (-1) << endl
		<< "����� 3 ������� 5:    " << (array_start[28] - array_end[28]) * (-1) << endl
		<< "����� 3 ������� 6:    " << (array_start[29] - array_end[29]) * (-1) << endl
		<< "����� 3 ������� 7:    " << (array_start[30] - array_end[30]) * (-1) << endl
		<< "����� 3 ������� 8:    " << (array_start[31] - array_end[31]) * (-1) << endl
		<< "����� 3 ������� 9:    " << (array_start[32] - array_end[32]) * (-1) << endl
		<< "����� 3 ������� 10:    " << (array_start[33] - array_end[33]) * (-1) << endl
		<< "����� 3 ������� 11:    " << (array_start[34] - array_end[34]) * (-1) << endl
		<< "����� 3 ������� 12:    " << (array_start[35] - array_end[35]) * (-1) << endl
		<< "����� 4 ������� 1:    " << (array_start[36] - array_end[36]) * (-1) << endl
		<< "����� 4 ������� 2:    " << (array_start[37] - array_end[37]) * (-1) << endl
		<< "����� 4 ������� 3:    " << (array_start[38] - array_end[38]) * (-1) << endl
		<< "����� 4 ������� 4:    " << (array_start[39] - array_end[39]) * (-1) << endl
		<< "����� 4 ������� 5:    " << (array_start[40] - array_end[40]) * (-1) << endl
		<< "����� 4 ������� 6:    " << (array_start[41] - array_end[41]) * (-1) << endl
		<< "����� 4 ������� 7:    " << (array_start[42] - array_end[42]) * (-1) << endl
		<< "����� 4 ������� 8:    " << (array_start[43] - array_end[43]) * (-1) << endl
		<< "����� 4 ������� 9:    " << (array_start[44] - array_end[44]) * (-1) << endl
		<< "����� 4 ������� 10:    " << (array_start[45] - array_end[45]) * (-1) << endl
		<< "����� 4 ������� 11:    " << (array_start[46] - array_end[46]) * (-1) << endl
		<< "����� 4 ������� 12:    " << (array_start[47] - array_end[47]) * (-1) << endl
		<< "����� 5 ������� 1:    " << (array_start[48] - array_end[48]) * (-1) << endl
		<< "����� 5 ������� 2:    " << (array_start[49] - array_end[49]) * (-1) << endl
		<< "����� 5 ������� 3:    " << (array_start[50] - array_end[50]) * (-1) << endl
		<< "����� 5 ������� 4:    " << (array_start[51] - array_end[51]) * (-1) << endl
		<< "����� 5 ������� 5:    " << (array_start[52] - array_end[52]) * (-1) << endl
		<< "����� 5 ������� 6:    " << (array_start[53] - array_end[53]) * (-1) << endl
		<< "����� 5 ������� 7:    " << (array_start[54] - array_end[54]) * (-1) << endl
		<< "����� 5 ������� 8:    " << (array_start[55] - array_end[55]) * (-1) << endl
		<< "����� 5 ������� 9:    " << (array_start[56] - array_end[56]) * (-1) << endl
		<< "����� 5 ������� 10:    " << (array_start[57] - array_end[57]) * (-1) << endl
		<< "����� 5 ������� 11:    " << (array_start[58] - array_end[58]) * (-1) << endl
		<< "����� 5 ������� 12:    " << (array_start[59] - array_end[59]) * (-1) << endl
		;

}