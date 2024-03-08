//#include<iostream>
//using namespace std;
//int main()
//{
//	int h1, h2, m1, m2,time=0,minute=0,cost=0,cost1=0;
//	cout << "input the start time of the call:" << endl;
//	cin >> h1;
//	cin >> m1;
//	cout << "input the end time of the call:" << endl;
//	cin >> h2;
//	cin >> m2;
//	if (h1 >= 8 && h2 <= 18)
//	{
//		if (m2 >= m1)
//		{
//			minute = m2 - m1;
//			
//		}
//		if (m1 >= m2)
//		{
//			minute = m1 - m2;
//		}
//		
//		time = h2 - h1;
//		time *= 60;
//		time += minute;
//		cout << time << endl;
//		cost = time * 6;
//		cout << "cost is:" << cost << endl;
//		
//	}
//	if ((h1 < 8 && h2 < 8) || (h1 > 18 && h2 > 18))
//	{
//		if (m2 >= m1)
//		{
//			minute = m2 - m1;
//
//		}
//		if (m1 >= m2)
//		{
//			minute = m1 - m2;
//		}
//
//		time = h2 - h1;
//		time *= 60;
//		time += minute;
//		
//		cost = time * 3.75;
//		cout << "cost is:" << cost << endl;
//	}
//	if ((h1 < 8 &&( h2>8||(h2==8&&m2>0) )))
//	{
//
//		if (m2 >= m1)
//		{
//			minute = m2 - m1;
//
//		}
//		if (m1 >= m2)
//		{
//			minute = m1 - m2;
//		}
//		int rem1 = 0;
//		rem1 = 60 - m1;
//		int rem = 0;
//		rem = 8 - h1;
//		time = h2 - h1;
//		minute -= rem1;
//
//		rem *= 60;
//		rem += rem1;
//		cost1 = 3.75 * rem;
//		time *= 60;
//		time -= rem;
//		time += minute;
//		cost = time * 6;
//		cout << "cost is:"<<cost+cost1 << endl;
//
//		
//
//
//	}
//
//}