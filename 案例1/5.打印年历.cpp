//#include<iostream>
//#include <vector>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//#include <math.h>
//#include <iomanip> 
//using namespace std;
//
////�Ƿ�����
//int IsLeapYear(int year) {
//	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
////ÿ���·ݵ�����
//int DaysOfMonth(int month, int year) {
//	switch (month) {
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:return 31;
//	case 4:
//	case 6:
//	case 9:
//	case 11:return 30;
//	case 2:
//		if (IsLeapYear(year)) {
//			return 29;
//		}
//		else {
//			return 28;
//		}
//	}
//}
//
////ÿ��ĵ�һ�������ڼ�
//long FirstDayOfYear(int year) {
//	long n;
//	n = year * 365;
//	for (int i = 1; i <= year;i++) {
//		if (IsLeapYear(year)) {
//			n++;
//		}
//	}
//	return n % 7;
//}
//
//int ShowMonth(int month, int year, int SpaceDay) {
//	int days;
//	cout << endl << endl << endl;
//	cout << setw(4) << month << "��" << endl << endl;
//	cout << setw(4) << "��" << setw(4) << "һ" << setw(4) << "��" << setw(4) << "��"
//		<< setw(4) << "��" << setw(4) << "��" << setw(4) << "��" << endl << endl;
//	for (int i = 0; i < SpaceDay; i++) {
//		cout << setw(4) << " ";
//	}
//	days = DaysOfMonth(month, year);
//	for (int i = 1; i <= days; i++) {
//		cout << setw(4) << i;
//		SpaceDay = (SpaceDay + 1) % 7;
//		if (SpaceDay == 0) {
//			cout << endl << endl;
//		}
//	}
//	return SpaceDay;
//}
//
//int main() {
//	int year, d;
//	do {
//		cout << "������ţ�";
//		cin >> year;
//		if (year < 1) {
//			cout << "����" << endl;
//		}
//	} while (year < 1);
//	d = FirstDayOfYear(year);
//	cout << endl << year << "������";
//	for (int i = 1; i <= 12; i++) {
//		d = ShowMonth(i, year, d);
//	}
//	cout << endl;
//}