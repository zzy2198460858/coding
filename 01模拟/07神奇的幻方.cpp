//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, a[50][50] = { 0 };
//	cin >> n;
//	int h = 0, l = n / 2;
//	a[h][l] = 1;
//	for (int k = 2; k <= n * n; ++k) {
//		if (h == 0 && l != n - 1) {
//			h = n - 1;
//			l++;
//		}
//		else if (h != 0 && l == n - 1) {
//			h--;
//			l = 0;
//		}
//		else if (h == 0 && l == n - 1) {
//			h++;
//		}
//		else if (h != 0 && l != n - 1) {
//			if (a[h - 1][l + 1] == 0) {
//				h--;
//				l++;
//			}
//			else {
//				h++;
//			}
//		}
//		a[h][l] = k;
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			cout << a[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}