# include <iostream>

 using namespace std;

 void f(int i,int n)
 {
     if(1>i)
        return;
    cout<<i<<endl;
    f(i-1,n);
 }


int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    f(n,n);
    return 0;
}

// void f(int n)
//  {
//      if(1>n)
//         return;
//     cout<<n<<endl;
//     f(n-1);
//  }


// int main()
// {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     f(n);
//     return 0;
// }