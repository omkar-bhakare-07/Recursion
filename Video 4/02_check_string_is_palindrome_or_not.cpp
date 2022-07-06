# include <iostream>

using namespace std;

bool check(int i, string str[],int n)
{
    if(i>=n/2){
        return true;
    }
    if(str[i] != str[n-i-1]){
        return false;
    }
    return check(i+1, str, n);
}

int main()
{
    int n;
    cout<<"Enter the size of string : "<<endl;
    cin>>n;
    string str[n];
    cout<<"Enter the string of "<<n<<" elements : "<<endl;
    
    for(int i=0; i<n; i++) cin>>str[i];
    cout<<"Answer of string is palindrome or not is : "<<check<<endl;

    return 0;
}