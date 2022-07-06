#include <iostream>

using namespace std;

void reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n - i - 1);
}
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout<<"Enter array of "<<n<<" element : "<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(0, arr, n);

    cout << "Reverse array is : " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " " << endl;

    return 0;
}