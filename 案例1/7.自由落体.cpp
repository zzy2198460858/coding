//#include <iostream>
//using namespace std;
//
//float distance(float height) {
//	return height * 0.5;
//}
//
//int main() {
//	double height, sum,high;
//	int times;
//	cout << "输入高度值：" << endl;
//	cin >> height;
//	cout << "输入反弹次数：" << endl;
//	cin >> times;
//
//	sum = height;
//	high = height;
//	for (int i = 1; i <= times; i++) {
//		high = distance(high);
//		sum += 2 * high;
//		if (i == times) {
//			cout << high << endl;
//		}
//	}
//	cout << sum << endl;
//
//	return 0;
//}