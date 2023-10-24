
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter age ";
    cin>>a;
    try
    {
      if(a>=18)
    {
        cout<<"Eligible "<<a;
    }
    else
    {
throw a;
    }
}
catch(int e)
{
    cout<<"\nNot Eligible"<<" error";
}
return 0;
}
/*Output

Enter age 23
Eligible 23
*/