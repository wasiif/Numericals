#include<iostream>
#include<cmath> // for abs() and fabs()
using namespace std;

double calc (double x){
    return (x*x*x)-(2*x)-5;
}
void bisection(double a, double b){
    if(calc(a)*calc(b)>0)
    cout<<"Invalid Values Taken \n";
return;
}

double c;
while(((b-a)>0.00001) || ((a-b)>0.00001)){
    c=(a+b)/2;
    if(calc(c)==0)
{
cout <<"Exact Root found"<<c<<"f(c)= "<<calc(c)<<endl;
return;
}
if(calc(a)*calc(c)<0)
b=c;
else
a=c;
cout<<"Root approximation = "<<c<<"f(c)="<<calc(c)<<endl; 
}

int main(){
    double a,b;
    cout<<"Enter value for a: ";
    cin>>a;
    cout<<"Enter value for b: ";
    cin>>b;
    bisection(a,b);
    return 0;
}
