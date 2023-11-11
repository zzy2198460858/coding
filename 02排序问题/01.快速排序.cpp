//#include <iostream>
//#include <vector>
//using namespace std;
//
//void quicksort(vector<int>& num, int left, int right) {
//	if (left >= right) {
//		return;
//	}
//	int i = left, j = right;
//	int index = num[(left + right) / 2];
//	while (i <= j) {
//		while (num[i] < index) {
//			i++;
//		}
//		while (num[j] > index) {
//			j--;
//		}
//		if (i <= j ) {
//			int t = num[i];
//			num[i] = num[j];
//			num[j] = t;
//			i++;
//			j--;
//		}
//	}
//	quicksort(num, left, j);
//	quicksort(num, i,right );
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> num;
//	for (int i = 0; i < n; ++i) {
//		int t;
//		cin >> t;
//		num.push_back(t);
//	}
//	quicksort(num, 0, n - 1);
//	for (auto a : num) {
//		cout << a << " ";
//	}
//	
//	return 0;
//}
//
//
//
////#include <iostream>
////#include <cstdio>
////#include <stdlib.h>
////using namespace std;
////int L[100005];
////
////void QSort(int L[], int left, int right)
////{
////	if (left > right)	return;
////	int temp = L[(left + right) / 2];
////	int i = left, j = right;
////	while (i <= j)
////	{
////		while (L[j] > temp)  j--;
////		while (L[i] < temp)	i++;
////		if (i <= j) {
////			int t = L[i];
////			L[i] = L[j];
////			L[j] = t;
////			i++;
////			j--;
////		}
////	}
////	QSort(L, left, j);
////	QSort(L, i, right);
////}
////
////int main()
////{
////	int n;
////	cin >> n;
////	for (int i = 0; i < n; i++)
////		scanf("%d", &L[i]);
////	QSort(L, 0, n - 1);
////	for (int i = 0; i < n; i++)
////		printf("%d ", L[i]);
////	return 0;
////}