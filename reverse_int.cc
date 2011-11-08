// reverse_int.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
void ReverseInt(int num, int *array)
{
	if (!num)
		return;
	*array=num%10;
	ReverseInt(num/10,array+1);
}

int main()
{
	int a=456;
	int result[100]={0};
	ReverseInt(a,result);
	for (int i=0;result[i]>0;i++)
		cout<<result[i];
	cout<<endl;
	return 0;
}

