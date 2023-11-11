//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, a, b, x = 0, y = 0;
//	cin >> n >> a >> b;
//	vector<int> v1;
//	vector<int> v2;
//	int t;
//	for (int i = 0; i < a; ++i) {
//		cin >> t;
//		v1.push_back(t);
//	}
//	for (int i = 0; i < b; ++i) {
//		cin >> t;
//		v2.push_back(t);
//	}
//	for (int i = 0; i < n; ++i) {
//		if (v1[i % a] == 0 && v2[i % b] == 2 ||
//			v1[i % a] == 0 && v2[i % b] == 3 ||
//			v1[i % a] == 1 && v2[i % b] == 0 ||
//			v1[i % a] == 1 && v2[i % b] == 3 ||
//			v1[i % a] == 2 && v2[i % b] == 1 ||
//			v1[i % a] == 2 && v2[i % b] == 4 ||
//			v1[i % a] == 3 && v2[i % b] == 2 ||
//			v1[i % a] == 3 && v2[i % b] == 4 ||
//			v1[i % a] == 4 && v2[i % b] == 0 ||
//			v1[i % a] == 4 && v2[i % b] == 1
//			) {
//			x++;
//		}
//		else if (v1[i % a] == v2[i % b]) {
//			continue;
//		}
//		else {
//			y++;
//		}
//	}
//	cout << x << " " << y;
//
//
//
//	return 0;
//}