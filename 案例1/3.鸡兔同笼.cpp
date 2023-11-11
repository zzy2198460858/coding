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
//		cout << "输入脚数：" << endl;
//		cin >> Feet;
//		cout << "输入头数：" << endl;
//		cin >> Head;
//		if (Feet <= 0 || Head <= 0) {
//			cout << " 输入错误" << endl;
//			break;
//		}
//		if (Feet > Head) {
//			RabbitNum = Feet / 2 - Head;
//			ChickNum = Head - RabbitNum;
//			if (ChickNum < 0 || RabbitNum < 0) {
//				cout << "数据错误" << endl;
//			}
//			else {
//				cout << ChickNum << endl << RabbitNum << endl;
//				cout << "是否还要继续？（y/n）" << endl;
//				string opt;
//				cin >> opt;
//				if (opt == "n" || opt == "N") {
//					return 0; //必须有返回值
//				}
//			}
//		}
//		else {
//			cout << "脚数要大于头数" << endl;
//		}
//	}
//	return 0;
//}