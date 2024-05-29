#include <iostream>

using namespace std;
#include <iostream>
 using namespace std;
 int range(int x,int low,int high)
{
    if(x>=low&&x<=high)
    {
        return 0;
    }
    if(x>high)
    {
        return 1;
    }
    if(x>low)
    {
        return -1;
    }
}
 char inrange(char x,char low,char high)
{

    if(x>=low&&x<=high)
    {
        return '0';
    }
    if(x>high)
    {
        return '1';
    }
    if(x>low)
    {
        return '-1';
    }

}
  int main( )
 {
  int num,lownum,highnum;
  char a,lowa,higha;
  cin>>num>>lownum>>highnum;
   (num,lownum,highnum)=range(num,lownum,highnum);
  cin>>(a,lowa,higha);
   (a,lowa,higha)=inrange(a,lowa,higha);
  return 0;
 }
