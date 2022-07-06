# include <iostream>

using namespace std;

void sum(int i, int n)
{
    if(i<1)
    {
        cout<<n<<endl;
    }
    else{
        sum(i-1,n+i);
    }
}

int main()
{
    int i;
    cout<<"Enter the number : "<<endl;
    cin>>i;
    sum(i,0);
    return 0;
}