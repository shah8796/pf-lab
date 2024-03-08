//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int id, arrh, arrm, serh, serm,arrinmin,serinmin,waittime,customer=0,tot=0;
//	ifstream fin;
//	ofstream fout;
//	int servicetime[10];
//	fin.open("ali.txt");
//	while (!fin.eof())
//	{
//		fin >> id;
//		fin >> arrh;
//		fin >> arrm;
//		fin >> serh;
//		fin >> serm;
//		arrinmin = arrh * 60 + arrm;
//		serinmin = serh * 60 + serm;
//		waittime = serinmin - arrinmin;
//		servicetime[customer] = waittime;
//		tot += waittime;
//		customer++;
//	}
//	cout << "wait time is:" << tot / customer << endl;
//}