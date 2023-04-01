#include<iostream>
using namespace std;
class employee
{
int empno;
char empname[50];
int basic;
int da;
int it;
int gs;
int ns;
public:
void getdata()
{
cout<<"enter the employee number: ";
cin>>empno;
cout<<"enter the employee name: ";
cin>>empname;
cout<<"enter the basic salary,da,it: ";
cin>>basic>>da>>it;
gs=da+it;
ns=gs+basic;
}
void putdata()
{
cout<<"\nEmployee number: "<<empno;
cout<<"\nEmployee name: "<<empname;
cout<<"\nbasic\tda\tit\n "<<basic<<da<<it;
cout<<"\n gross salary\n net salary"<<gs<<ns;
}
};
int main()
{
employee e;
e.getdata();
e.putdata();
return 0;
}
