//#include<iostream>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//struct zhiyuanzhe{
//	int id;
//	int score;
//}people[5005];
//
//bool cmp(zhiyuanzhe a, zhiyuanzhe b) {
//	if (a.score > b.score) {
//		return true;
//	}
//	else if (a.score == b.score && a.id < b.id) {
//		return true;
//	}
//	return false;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	m = floor(m * 1.5);
//	for (int i = 0; i < n; ++i) {
//		cin >> people[i].id >> people[i].score;
//	}
//	sort(people, people + n, cmp);
//	int line = people[m - 1].score;
//	for (int i = m; i < n; ++i) {
//		if (people[i].score == line) m++;
//		if (people[i].score < line)break;
//	}
//	cout << line << " " << m << endl;
//	for (int i = 0; i < m; ++i) {
//		cout << people[i].id << " " << people[i].score << endl;
//	}
//
//	return 0;
//}