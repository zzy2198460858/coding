//#include<iostream>
//#include <vector>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//#include <math.h>
//#include <iomanip>
//
//using namespace std;
////r-l>=1e-3,��˼����С�����䳤��С�ڵ���0.001ʱ
//
//double a, b, c, d;
//double f(double x) {
//	return a * x * x * x + b * x * x + c * x + d;
//}
//
//int main() {
//	double x1, x2, l, r, m;
//	cin >> a >> b >> c >> d;
//	for (int i = -100; i <= 100; ++i) {
//		x1 = i, x2 = i + 1;
//		if (f(i) == 0) {
//			//��ȷ��С�������λ
//			cout << fixed << setprecision(2) << x1 << ' ';
//		}
//		else if (f(x1) * f(x2) < 0) {
//			l = x1, r = x2;
//			while (r - l >= 1e-3) {
//				m = (l + r) / 2;
//				if (f(m) * f(l) > 0) {
//					l = m;
//				}
//				else if (f(m) * f(l) < 0) {
//					r = m;
//				}
//				else {
//					break;
//				}
//			}
//			cout << fixed << setprecision(2) << m << ' ';
//		}
//	}
//
//	return 0;
//}