//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//	//char str[100000];
//	char* str = new char[100000];
//	int Wcnt = 0;
//	int Lcnt = 0;
//	int i = 0;
//	while (cin >> str[i]) {
//		if (str[i] == 'E') {
//			break;
//		}
//		//if ((str[i] == '\n') ||(str[i] =='\r')) {
//		//	continue;
//		//}
//		i++;
//	}
//	for (int j = 0; j < strlen(str); ++j) {
//		if (str[j] == 'W') {
//			Wcnt++;
//		}
//		if (str[j] == 'L'){
//			Lcnt++;
//		}
//		if ((Lcnt >= 11 && abs(Lcnt - Wcnt) >= 2) || (Wcnt >= 11 && abs(Lcnt - Wcnt) >= 2)) {
//			cout << Wcnt << ":" << Lcnt << endl;
//			Wcnt = 0;
//			Lcnt = 0;
//		}
//		if (str[j] == 'E') {
//			cout << Wcnt << ":" << Lcnt << endl;
//			break;
//		}
//	}
//	cout << endl;
//	Wcnt = 0;
//	Lcnt = 0;
//	for (int j = 0; j < strlen(str); ++j) {
//		if (str[j] == 'W') {
//			Wcnt++;
//		}
//		if (str[j] == 'L') {
//			Lcnt++;
//		}
//		if ((Wcnt >= 21 && abs(Lcnt - Wcnt) >= 2) || (Lcnt >= 21 && abs(Lcnt - Wcnt) >= 2)) {
//			cout << Wcnt << ":" << Lcnt << endl;
//			Wcnt = 0;
//			Lcnt = 0;
//		}
//		if (str[j] == 'E') {
//			cout << Wcnt << ":" << Lcnt;
//			break;
//		}
//	}
//	//delete[] str;
//
//	return 0;
//}