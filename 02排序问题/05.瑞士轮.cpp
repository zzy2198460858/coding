//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//#define MAX 200001
//int n, r, q;
//typedef struct p {
//	int id;
//	int ability;
//	int score;
//}peo;
//peo a[MAX], winner[100001], loser[100001];
//
//bool cmp(peo a, peo b) {
//	if (a.score != b.score) {
//		return a.score > b.score;
//	}
//	else {
//		return a.id < b.id;
//	}
//}
//
//void race(int m) {
//	int t = 1;
//	for (int i = 1; i <= m; i+=2) {
//		if (a[i].ability > a[i + 1].ability) {
//			a[i].score++;
//			winner[t] = a[i];
//			loser[t] = a[i + 1];
//			t++;
//		}
//		else {
//			a[i + 1].score++;
//			winner[t] = a[i + 1];
//			loser[t] = a[i];
//			t++;
//		}
//	}
//}
//
//void merge() {
//	int i = 1, j = 1, k = 1;
//	while (i <= n && j <= n) {
//		if (cmp(winner[i], loser[j])) {
//			a[k++] = winner[i++];
//		}
//		else {
//			a[k++] = loser[j++];
//		}
//	}
//	while (i <= n) {
//		a[k++] = winner[i++];
//	}
//	while (j <= n) {
//		a[k++] = loser[j++];
//	}
//}
//
//int main() {
//	cin >> n >> r >> q;
//	int m = 2 * n;
//	for (int i = 1; i <= m; ++i) {
//		cin >> a[i].score;
//		a[i].id = i;
//	}
//	for (int i = 1; i <= m; ++i) {
//		cin >> a[i].ability;
//	}
//	sort(a + 1, a + m + 1, cmp);
//	while (r--) {
//		race(m);
//		merge();
//	}
//	cout << a[q].id;
//	return 0;
//}