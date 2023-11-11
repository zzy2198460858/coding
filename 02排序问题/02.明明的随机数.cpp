//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	set<int> s;
//	for (int i = 0; i < n; ++i) {
//		int t;
//		cin >> t;
//		s.insert(t);
//	}
//	int length = s.size();
//	cout << length << endl;
//	for (auto a : s) {
//		cout << a << " ";
//	}
//
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main() {
//    int n, t;
//    cin >> n;
//    int sum = 0, a[1005] = { 0 };
//    for (int i = 1; i <= n; i++) {
//        cin >> t;
//        if (a[t])
//            continue;
//        a[t]++;
//        sum++;
//    }
//    cout << sum << endl;
//    for (int i = 1; i <= 1000; i++)
//        if (a[i])
//            cout << i << ' ';
//    cout << endl;
//    return 0;
//}