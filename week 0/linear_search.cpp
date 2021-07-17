#include <iostream>
using namespace std;
int main()
{
    int t, n, j, i, key, flag = 0, index, comparison = 0;
    cout << "Enter number of test cases : ";
    cin >> t;
    for (i = 0; i < t; i++)
    {
        flag = 0;
        cout << endl << "Enter number of element in the array : ";
        cin >> n;
        int a[n];
        cout << endl << "Enter elements in the array : ";
        for (j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cout << endl << "Enter key value : ";
        cin >> key;
        for (j = 0; j < n; j++)
        {
            comparison++;
            if (a[j] == key)
            {
                flag = 1;
                index = j;
                break;
            }
        }
        if (flag == 0)
            cout <<endl << "Number Is not present in the array." << endl;
        else
        {
            cout <<endl << "Number is present in the array at index = " << index;
            cout << "\n\nNumber of comparisions made = " << comparison << endl;
        }
    }
    return 0;
}