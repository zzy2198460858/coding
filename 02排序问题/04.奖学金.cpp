//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <math.h>
//using namespace std;
////姓名，成绩，评议，学生干部，西部，论文
//
//struct scholararship {
//	string name;
//	int score;
//	int pyscore; 
//	char ganbu;
//	char xibu;
//	int lunwen;
//	int money;
//}student[105];
//
//int main() {
//	int n;
//	cin >> n;
//	int sum = 0;//所有学生总的奖学金
//	int index = 0;//奖学金最多的学生的下标
//	for (int i = 0; i < n; i++) {
//		int count = 0;
//		cin >> student[i].name >> student[i].score >> student[i].pyscore 
//			>> student[i].ganbu >> student[i].xibu >> student[i].lunwen;
//		if (student[i].score > 80 && student[i].lunwen >= 1) {
//			count += 8000;
//		}
//		if (student[i].score > 85 && student[i].pyscore > 80) {
//			count += 4000;
//		}
//		if (student[i].score > 90) {
//			count += 2000;
//		}
//		if (student[i].score > 85 && student[i].xibu == 'Y') {
//			count += 1000;
//		}
//		if (student[i].pyscore > 80 && student[i].ganbu == 'Y') {
//			count += 850;
//		}
//		student[i].money = count;
//		if (i > 0) {
//			if (student[i].money > student[index].money) {
//				index = i;
//			}
//		}
//		sum += count;
//	}
//	cout << student[index].name << endl;
//	cout << student[index].money << endl;
//	cout << sum;
//
//
//
//	return 0;
//}