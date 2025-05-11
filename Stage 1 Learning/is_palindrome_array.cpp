#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n)
{ 
    for (int i = 0; i < n/2; i++)
    {
        int j = n - i - 1;
        if (arr[i] != arr[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    if (isPalindrome(arr, n))
    {
        cout << "Is a palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
    
}
