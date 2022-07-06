# include <iostream>

 using namespace std;

 void f(int i,int n)
 {
     if(1>i)
        return;
    f(i-1,n);
    cout<<i<<endl;
 }


int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    f(n,n);
    return 0;
}