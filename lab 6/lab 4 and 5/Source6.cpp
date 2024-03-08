//#include<iostream>
//using namespace std;
//int isarmstrong(int x)
//{
//	int y = 0,z=1,a=0,b,l=x;
//	b = x;
//	while (x != 0)
//	{
//		
//		x /= 10;
//		y++;
//	}
//	cout << y;
//	while (b != 0)
//	{
//		int o = 1;
//		z = b % 10;
//		
//		for (int i = 0; i < y; i++)
//			o *= z;
//		a += o;
//		b /= 10;
//	}
//	if (a == l)
//		return 1;
//}
//int main()
//{
//	int a;
//	cout << "enter the number:" << endl;
//	cin >> a;
//	//isarmstrong(a);
//	if (isarmstrong(a))
//		cout << "It is arlfh";
//	else
//		cout << "It is  not arlfh";
//}