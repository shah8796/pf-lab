//#include <stdio.h>
//int size = 0;
//void swap(int* a, int* b)
//{
//    int temp = *b;
//    *b = *a;
//    *a = temp;
//}
//void heapify(int array[], int size, int i)
//{
//    if (size == 1) {
//        printf("Only Single element is there in the heap");
//    }
//    else {
//        int largee = i;
//        int l = 2 * i + 1;
//        int r = 2 * i + 2;
//        if (l < size && array[l] > array[largee])
//            largee = l;
//        if (r < size && array[r] > array[largee])
//            largee = r;
//        if (largee != i)
//        {
//            swap(&array[i], &array[largee]);
//            heapify(array, size, largee);
//        }
//    }
//}
//void insert(int array[], int newNumb)   //***INSERT FUNCTION***
//{
//    if (size == 0)
//    {
//        array[0] = newNumb;
//        size += 1;
//    }
//    else
//    {
//        array[size] = newNumb;
//        size += 1;
//        for (int i = size / 2 - 1; i >= 0; i--)
//        {
//            heapify(array, size, i);
//        }
//    }
//}
//void deleteRoot(int array[], int num) {   //***DELETE FUNCTION***
//    int i;
//    for (i = 0; i < size; i++)
//    {
//        if (num == array[i])
//            break;
//    }
//    swap(&array[i], &array[size - 1]);
//    size -= 1;
//    for (int i = size / 2 - 1; i >= 0; i--)
//    {
//        heapify(array, size, i);
//    }
//}
//void printArray(int array[], int size)     //***DISPLAY FUNCTION**
//{
//    for (int i = 0; i < size; ++i)
//        printf("%d ", array[i]);
//    printf("\n");
//}
//int main()
//{
//    int array[11];
//
//    insert(array,12 );                    //INSERTING ELEMENTS INTO THE HEAP...
//    insert(array, 21);
//    insert(array, 89);
//    insert(array, 76);
//    insert(array, 45);
//    insert(array, 23);
//    insert(array, 1);
//    insert(array, 0);
//    insert(array, 67);
//    insert(array, 45);
//    insert(array, 56);
//    insert(array, 90);
//
//    printf("Max-Heap array:: ");
//    printArray(array, size);            //Calling display function.. 
//    deleteRoot(array, 8);               //Calling deleting function.
//    printf("After deleting an element: ");
//    printArray(array, size);
//}     //After deleting heap calling display function.