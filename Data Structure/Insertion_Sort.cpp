#include <iostream>
using namespace std;

void insertionSort(int ara[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = ara[i];
        int j = i - 1;


        while (j >= 0 && ara[j] > key) {
            arr[j + 1] = ara[j];
            j = j - 1;
        }
        ara[j + 1] = key;
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(ara, n);

    for(int i = 0; i < n; ++i){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
