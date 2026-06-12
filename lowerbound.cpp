#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;
    int count;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] >= key)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "Not found";
}
