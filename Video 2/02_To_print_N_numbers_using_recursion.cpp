# include <iostream>

using namespace std;

int a = 0;
void f()
{
    if(a==15)
    {
        return ;
    }
    else
    {   
    cout<<1<<endl;
    a++; 
    f();
    }
}

int main()
{
    f();
    return 0;
}