//#include <iostream>
//#include <cstdio>
//using namespace std;
//int point[10005][4];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cin >> point[i][0] >> point[i][1] >> point[i][2] >> point[i][3];
//		point[i][2] += point[i][0];
//		point[i][3] += point[i][1];
//	}
//	int x, y;
//	cin >> x >> y;
//	bool flag = false;
//	for (int i = n; i >= 1; --i) {
//		if (x >= point[i][0] && x <= point[i][2] && y >= point[i][1] && y <= point[i][3]) {
//			flag = true;
//			cout << i;
//			break;
//		}
//	}
//	if(flag == false) {
//		cout << -1;
//	}
//
//	return 0;
//}