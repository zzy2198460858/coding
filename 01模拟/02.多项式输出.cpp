//#include<iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> a;
//	vector<int> b;
//	int t;
//	for (int i = 0; i <= n; i++)
//	{
//		cin >>t;
//		a.push_back(t);
//		b.push_back(n-i);
//	}
//	if (n == 0) {
//		if (a[0] == 0) {
//			return 0;
//		}
//		if (a[0] > 0 ) {
//			cout << a[0];
//			return 0;
//		}
//		if (a[0] < 0) {
//			cout << a[0];
//			return 0;
//		}
//	}
//	for (int i = 0; i <= n - 2; i++)
//	{
//		if (a[i] > 0 && i >= 1)
//		{
//			cout << "+";
//		}
//		if (a[i] != 0 && a[i] != 1 && a[i] != -1)//ÌØÅÐÏµÊýÎª1ºÍ-1 
//		{
//			cout << a[i] << "x^" << b[i];
//		}
//		if (a[i] == 1)
//		{
//			cout << "x^" << b[i];
//		}
//		if (a[i] == -1)
//		{
//			cout << "-x^" << b[i];
//		}
//	}
//	if (a[n - 1] != 0)
//	{
//		if (a[n - 1] > 0)
//		{
//			if (a[n - 1] != 1)
//			{
//				cout << "+" << a[n - 1] << "x";
//			}
//			if (a[n - 1] == 1)
//			{
//				cout << "+" << "x";
//			}
//		}
//		if (a[n - 1] < 0)
//		{
//			if (a[n - 1] != -1)
//			{
//				cout << a[n - 1] << "x";
//			}
//			if (a[n - 1] == -1)
//			{
//				cout << "-x";
//			}
//		}
//	}
//	if (a[n] != 0)
//	{
//		if (a[n] > 0)
//		{
//			cout << "+" << a[n];
//		}
//		if (a[n] < 0)
//		{
//			cout << a[n];
//		}
//	}
//	return 0;
//
//}