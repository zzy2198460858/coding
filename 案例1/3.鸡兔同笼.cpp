//#include<iostream>
//#include <vector>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//#include <math.h>
//#include <iomanip> 
//using namespace std;
//
//int main() {
//	int Feet, Head, ChickNum, RabbitNum;
//	while (true) {
//		cout << "���������" << endl;
//		cin >> Feet;
//		cout << "����ͷ����" << endl;
//		cin >> Head;
//		if (Feet <= 0 || Head <= 0) {
//			cout << " �������" << endl;
//			break;
//		}
//		if (Feet > Head) {
//			RabbitNum = Feet / 2 - Head;
//			ChickNum = Head - RabbitNum;
//			if (ChickNum < 0 || RabbitNum < 0) {
//				cout << "���ݴ���" << endl;
//			}
//			else {
//				cout << ChickNum << endl << RabbitNum << endl;
//				cout << "�Ƿ�Ҫ��������y/n��" << endl;
//				string opt;
//				cin >> opt;
//				if (opt == "n" || opt == "N") {
//					return 0; //�����з���ֵ
//				}
//			}
//		}
//		else {
//			cout << "����Ҫ����ͷ��" << endl;
//		}
//	}
//	return 0;
//}