//#include<iostream>
//using namespace std;
//void diamond(int x)
//{
//	int z = x / 2;
//	int y = x / 2;
//	for (int i = 1; i<=x/2; i++)
//	{
//		int t = i;
//		for (int j = z; j > 0; j--)
//		{
//			cout << " ";
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			if (t > 9)
//			{
//				t = 0;
//			}
//			cout << t;
//			t++;
//		}
//		for (int j = 1; j < i; j++)
//		{
//			cout << t;
//			t--;
//		}
//		for (int j = z; j > 0; j--)
//		{
//			cout << " ";
//		}
//		
//		z--;
//		cout << endl;
//	}
//	int u = 0;
//	for (int i = x/2; i>0; i--)
//	{
//		int t = i;
//		//for (int j = y; j > 0; j--)
//		//{
//		//	if (t > 9)
//		//	{
//		//		t = 0;
//		//	}
//		//	cout << t;
//		//	t++;
//		//}
//		//for (int j = 0; j <= i; j++)
//		//{
//		//	/*if (t > 9)
//		//	{
//		//		t = 0;
//		//	}
//		//	cout << t;
//		//	t++;*/
//		//	cout << " ";
//		//}
//		//for (int j = 0; j < i; j++)
//		//{
//		//	cout << " ";
//		//}
//		//for (int j = y; j > 0; j--)
//		//{
//		//	cout << t;
//		//	t--;
//		//	
//		//}
//
//		//y--;
//		//cout << endl;
//		for (int j = 0; j <= u; j++)
//		{
//			cout << " ";
//		}
//		for (int j = y-1; j > 0; j--)
//		{
//			if (t > 9)
//			{
//				t = 0;
//			}
//			cout << t;
//			t++;
//		}
//		for (int j = y; j > 0; j--)
//		{
//			/*if (t > 9)
//			{
//				t = 0;
//			}*/
//			cout << t;
//			t--;
//		}
//		for (int j = 0; j < u; j++)
//		{
//			cout << " ";
//		}
//		
//		u++;
//		y--;
//		cout << endl;
//	}
//}
//int main()
//{
//	int size;
//	cout << "enter the size of the diamond u wanna print:" << endl;
//	cin >> size;
//	diamond(size);
//	
//}