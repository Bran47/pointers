#include <iostream>
using namespace std;
int Product(int array[], int size)
{
 int result = 1;
 for(int i=0; i<size; i++)
 {
 result = result * array[i];
 }
 return result;
}

void printArrayElements(int array[], int size)
{
 for(int i=0; i<size; i++)
 {
 cout << array[i] << " ";
 }
 cout << endl;
}

int main()
{
 int array[] = {10,20,30,40,50,60,70,80,90,100};
 int size = sizeof(array)/sizeof(array[0]);
 cout << "Array :" << endl;
 printArrayElements(array, size);
 cout << "Product of the array elements: " << Product(array, size) << endl;
return 0;
}
