//#include<iostream>
//#include <vector>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//#include <math.h>
//#include <iomanip> 
//using namespace std;
//
//int L, N, M;
//int a[50005];
//
////���磬2,11,14,17,21
////��main���������whileѭ�����е��ڶ��ε�ʱ��mid=6(����һ��mid = 13,Ȼ��right = mid-1 = 12�ˣ���mid = 6��)
////2-0<6,����i=1��ʯͷ��now����ԭ��;i++,i=2,��ʱ11-0>6,�����ߣ���������now����Ϊi=2;i++,i=3,��ʱ14-11<6,����i=3��ʯͷ��now����11������.....
//
//int check(int x) {
//	int cnt = 0;
//	int now = 0;
//	int i = 0;
//	while (i < N + 1) {
//		i++;
//		if (a[i] - a[now] < x) {  //
//			cnt++;//����i���ڵ�ʯͷ��û��Ծ��now����ԭ��
//		}
//		else {
//			now = i;   //��Ϊa[i]-a[now]>x,�������ߣ���������iʯͷ���ˣ�����nowΪi;
//		}
//	}
//	if (cnt > M) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//int main() {
//	cin >> L >> N >> M;
//	for (int i = 1; i <= N; ++i) {
//		cin >> a[i];
//	}
//	a[N + 1] = L;//�յ��ʯͷ
//	int left = 1;
//	int right = L;
//	int ans = 0;
//	while (left <= right) {
//		int mid = left + (right - left) / 2;//ʹ�ö����Ҵ�
//		//cout << "mid=" << mid << endl;
//		if (check(mid)) {
//			ans = mid;
//			left = mid + 1;//mid̫С��
//		}
//		else {
//			right = mid - 1; //mid̫����
//		}
//	}
//	cout << ans;//��������Ծ����
//	return 0;
//}