// reverse_int.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
int ReverseInt(int num)
{
  int result=0;
  while (num)
  {
    result=result*10+num%10;
    num/=10;
  }
  return result;
}

int main()
{
  int a=456;
  cout<<ReverseInt(a)<<endl;
  return 0;
}

