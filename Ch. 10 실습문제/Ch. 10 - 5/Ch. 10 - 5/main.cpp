#include <iostream>
#include <string>
using namespace std;


template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
    T* result = new T[sizea + sizeb];
    for (int i = 0; i < sizea; i++)
        result[i] = a[i];
    for (int i = 0; i < sizeb; i++)
        result[i + sizea] = b[i];
    return result;
}

int main() {
    int a1[] = { 1, 2, 3 };
    int b1[] = { 4, 5, 6, 7, 8, 9, 10};
    int* result1 = concat(a1, size(a1), b1, size(b1));

    for (int i = 0; i < size(a1) + size(b1); i++) {
        cout << result1[i] << " ";
    }
    cout << endl;
    delete[] result1;

    double a2[] = { 0.1, 0.2, 0.3, 0.4 };
    double b2[] = { 0.5, 0.6, 0.7, 0.8 };
    double* result2 = concat(a2, size(a2), b2, size(b2));

    for (int i = 0; i < size(a2) + size(b2); i++)
        cout << result2[i] << " ";
    cout << endl;
    delete[] result2;

    string a3[] = { "Hello" };
    string b3[] = { "good", "morning" };
    string* result3 = concat(a3, size(a3), b3, size(b3));

    for (int i = 0; i < size(a3) + size(b3); i++)
        cout << result3[i] << " ";
    cout << endl;
    delete[] result3;

    return 0;
}
