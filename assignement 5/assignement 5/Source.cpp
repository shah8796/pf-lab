//#include<iostream>
//using namespace std;
//class intervalheap {
//	int size;
//	int* heap;
//	int currsize;
//public:
//	intervalheap()
//	{
//		size = 0;
//		heap = nullptr;
//		currsize = 0;
//	}
//	void swap(int element1, int element)
//	{
//		int temp = heap[element1];
//		heap[element1] = heap[element];
//		heap[element] = temp;
//	}
//	void insert(int element)
//	{
//		if (heap == NULL)
//		{
//			heap = new int[10];
//			heap[currsize] = element;
//		}
//		else
//		{
//			currsize++;
//			heap[currsize] = element;
//			for (int i = 0; i <= currsize; i++)
//			{
//				if (i % 2 != 0)
//				{
//					if ((2 * i) + 1 <= currsize)
//					{
//						if (heap[i] > heap[(2 * i) + 1])
//						{
//							swap(i, (2 * i) + 1);
//						}
//					}
//					if ((2 * i) + 2 <= currsize)
//					{
//					    if (heap[i] > heap[(2 * i) + 2])
//					    {
//						    swap(i, (2 * i) + 2);
//					    }
//					}
//				}
//				if (i % 2 == 0)
//				{
//					if ((2 * i) + 1 <= currsize)
//					{
//						if (heap[i] < heap[(2 * i) + 1])
//						{
//							swap(i, (2 * i) + 1);
//						}
//					}
//					if ((2 * i) + 2 <= currsize)
//					{
//						if (heap[i] < heap[(2 * i) + 2])
//						{
//							swap(i, (2 * i) + 2);
//						}
//					}
//				}
//			}
//		}
//
//	}
//	void heapify()
//	{
//		for (int i = 0; i <= currsize; i++)
//		{
//			if (i % 2 != 0)
//			{
//				if ((2 * i) + 1 <= currsize)
//				{
//					if (heap[i] > heap[(2 * i) + 1])
//					{
//						swap(i, (2 * i) + 1);
//					}
//				}
//				if ((2 * i) + 2 <= currsize)
//				{
//					if (heap[i] > heap[(2 * i) + 2])
//					{
//						swap(i, (2 * i) + 2);
//					}
//				}
//			}
//			if (i % 2 == 0)
//			{
//				if ((2 * i) + 1 <= currsize)
//				{
//					if (heap[i] < heap[(2 * i) + 1])
//					{
//						swap(i, (2 * i) + 1);
//					}
//				}
//				if ((2 * i) + 2 <= currsize)
//				{
//					if (heap[i] < heap[(2 * i) + 2])
//					{
//						swap(i, (2 * i) + 2);
//					}
//				}
//			}
//		}
//	}
//	void deleteinterval(int index)
//	{
//		if (index > currsize)
//		{
//			cout << "invalid command" << endl;
//		}
//		else
//		{
//			swap(index, currsize);
//			currsize--;
//			heapify();
//		}
//	}
//	void update(int index, int element)
//	{
//		heap[index] = element;
//		heapify();
//	}
//	void print()
//	{
//		for (int i = 0; i <= currsize; i++)
//		{
//			cout << heap[i] << " ";
//		}
//	}
//};
//int main()
//{
//	intervalheap s1;
//	s1.insert(12);
//	s1.insert(21);
//	s1.insert(89);
//	s1.insert(76);
//	s1.insert(45);
//	s1.insert(23);
//	s1.insert(1);
//	s1.insert(0);
//	s1.insert(67);
//	s1.insert(45);
//	s1.insert(56);
//	s1.insert(90);
//	s1.print();
//	s1.deleteinterval(4);
//	cout << endl;
//	s1.print();
//	s1.update(10,100);
//	cout << endl;
//	s1.print();
//
//}