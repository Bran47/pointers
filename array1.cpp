#include <iostream>
using namespace std;
int main()
{
	int array[] = {10,20,30,40,50,60,70,80,90,100};
    int sum=0;
	int p=10;
	for(int i =0; i<p; i++)
	{
		 sum+= array[i];
	}
	cout<<"sum of array"<<sum;
	return 0;
	
}
