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
////例如，2,11,14,17,21
////当main函数里面的while循环进行到第二次的时候，mid=6(即第一步mid = 13,然后right = mid-1 = 12了，再mid = 6了)
////2-0<6,移走i=1的石头，now还在原地;i++,i=2,此时11-0>6,不移走，可以跳，now更新为i=2;i++,i=3,此时14-11<6,移走i=3的石头，now还在11的那里.....
//
//int check(int x) {
//	int cnt = 0;
//	int now = 0;
//	int i = 0;
//	while (i < N + 1) {
//		i++;
//		if (a[i] - a[now] < x) {  //
//			cnt++;//移走i所在的石头，没跳跃，now还在原地
//		}
//		else {
//			now = i;   //因为a[i]-a[now]>x,不用移走，所以跳到i石头上了，更新now为i;
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
//	a[N + 1] = L;//终点的石头
//	int left = 1;
//	int right = L;
//	int ans = 0;
//	while (left <= right) {
//		int mid = left + (right - left) / 2;//使用二分找答案
//		//cout << "mid=" << mid << endl;
//		if (check(mid)) {
//			ans = mid;
//			left = mid + 1;//mid太小了
//		}
//		else {
//			right = mid - 1; //mid太大了
//		}
//	}
//	cout << ans;//最长的最短跳跃距离
//	return 0;
//}