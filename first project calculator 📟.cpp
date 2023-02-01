#include<iostream>
using namespace std;

int main()
{
  char op;
int n1, n2;
cout<<"enter op:+,-,*,/"<<endl;
cin>>op;
cout<<"enter two no:";
cin>>n1>>n2;
switch(op)
{
case '+':
cout<<n1<<"+"<<n2<<"="<<(n1+n2);
break;
case '-':
cout<<n1<<"-"<<n2<<"="<<(n1-n2);
break;
case '*':
cout<<n1<<"*"<<n2<<"="<<(n1-n2);
break;
case '/':
if(n2!=0)
cout<<n1<<"/"<<n2<<"="<<(n1/n2);
else
cout<<"divided by zero situation:";
break;
default:
cout<<"invalid num"<<op;
}
    return 0;
}