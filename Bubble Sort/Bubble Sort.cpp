#include <iostream> 
using namespace std;

class Bubble {
public:
    void bubblesort(int arr[], int count) {
        for (int i = 0; i < count - 1; i++) {
            for (int j = count - 1; j > i ; j--) {
                if (arr[j] < arr[j - 1]) {
                    swap(arr[j], arr[j - 1]);
                }
            }
        }
    }
};

void swap(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
}

void input(int arr[], int count) {
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }
    cout << endl;
}

void output(int arr[], int count) {
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int count;
    cout << "Amount of the elements: ";
    cin >> count;
    int* arr = new int[count];
    Bubble Sort;
    input(arr, count);
    Sort.bubblesort(arr, count);
    output(arr, count);
    return 0;
}