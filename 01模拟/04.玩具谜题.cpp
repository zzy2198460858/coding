//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<int> v1;
//	vector<string> v2;
//	int t;
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> t >> s;
//		v1.push_back(t);
//		v2.push_back(s);
//	}
//	int index = 0;
//	for (int i = 0; i < m; i++) {
//		int x, y;
//		cin >> x >> y;
//		if (v1[index] == 0 && x == 0) {
//			index = (index - y + n) % n;
//		}
//		else if(v1[index] == 0 && x == 1) {
//			index = (index + y + n) % n;
//		}
//		else if (v1[index] == 1 && x == 0){
//			index = (index + y + n) % n;
//		}
//		else{
//			index = (index - y + n) % n;
//		}
//	}
//	cout << v2[index];
//
//
//
//	return 0;
//}