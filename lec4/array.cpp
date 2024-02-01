#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    cout << arr1[1] << endl;
    int arr2[10] = {1, 2, 3, 4, 5}; // automatically fill the rest with 0
    int arr3[10] = {0};
    int arr4[] = {1, 2, 3, 4, 5};

    char arr5[5] = {'a', 'b', 'c', 'd', 'e'};
    char arr6[] = {'a', 'b', 'c', 'd', 'e'};
    char arr7[] = "abcde";
    // \0
    // "abcde" -> 'a' 'b' 'c' 'd' 'e' '\0'
    
    char arr8[10];
    cin.getline(arr8, 10);

    // char [] input;
    // cin.getline(input, 10);
    // arr8 = input;

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