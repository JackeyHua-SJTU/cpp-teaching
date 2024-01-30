#include <iostream>

using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[10] = {1, 2, 3, 4, 5}; // automatically fill the rest with 0
    int arr3[10] = {0};
    int arr4[] = {1, 2, 3, 4, 5};

    char arr5[5] = {'a', 'b', 'c', 'd', 'e'};
    char arr6[] = {'a', 'b', 'c', 'd', 'e'};
    char arr7[] = "abcde";

    char arr8[10];
    cin.getline(arr8, 10);
    for (int i = 0; i < 10; ++i) {
        cout << arr8[i] << (arr8[i] == '\0' ? " (null)" : "") << endl;
    }

    char arr9[10];
    cin >> arr9;
    for (int i = 0; i < 10; ++i) {
        cout << arr9[i] << (arr9[i] == '\0' ? " (null)" : "") << endl;
    }


    return 0;
}