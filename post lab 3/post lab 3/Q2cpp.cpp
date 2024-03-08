//#include<iostream>
//using namespace std;
//int main()
//{
//	int fiverup, tworup, amount, pro = 1, pro1 = 1, numoffiverup = 0, numoftworup = 0, numofonerup = 0, rem = 0, rem1 = 0;
//	cout << "number of five rupee coins that u have:" << endl;
//	cin >> fiverup;
//	cout << "number of two rupee coins that u have:" << endl;
//	cin >> tworup;
//	cout << "Amount:" << endl;
//	cin >> amount;
//	pro = fiverup * 5;
//	pro1 = tworup * 2;
//	if (pro < amount)
//	{
//		numoffiverup = fiverup;
//		rem = amount - pro;
//		if (pro1 < rem)
//		{
//			numoftworup = tworup;
//			rem1 = rem - pro1;
//			numofonerup = rem1;
//
//		}
//		if (pro1 == rem)
//		{
//			numoftworup = tworup;
//		}
//		if (pro1 > rem)
//		{
//			numoftworup = rem / 2;
//			rem1 = rem % 2;
//			numofonerup = rem1;
//		}
//	}
//	if (pro == amount)
//	{
//		numoffiverup = fiverup;
//
//	}
//	if (pro > amount)
//	{
//		numoffiverup = amount / 5;
//		rem = amount % 5;
//		if (pro1 < rem)
//		{
//			numoftworup = tworup;
//			rem1 = rem - pro1;
//			numofonerup = rem1;
//
//		}
//		if (pro1 == rem)
//		{
//			numoftworup = tworup;
//		}
//		if (pro1 > rem)
//		{
//			numoftworup = rem / 2;
//			rem1 = rem % 2;
//			numofonerup = rem1;
//		}
//
//	}
//	cout << "num of 5 rup:" << numoffiverup << "\nnum of 2 rup:" << numoftworup << "\nnum of one rup:" << numofonerup << endl;
//}