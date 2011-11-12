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
  cout<<ReverseInt(456)<<endl;
  cout<<ReverseInt(123456789)<<endl;
  return 0;
}

