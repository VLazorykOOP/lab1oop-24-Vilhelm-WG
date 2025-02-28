#include <iostream>
#include <vector>

//7. Із одновимірного масиву А розміру N побудувати масив В із елементів, які більші числа 10

using namespace std;

void task_1() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> A(N);
    vector<int> B;

    for (int i = 0; i < N; i++) {
        cout << "Enter A[" << i << "]: ";
        cin >> A[i];
        if (A[i] > 10) {
            B.push_back(A[i]);
        }
    }


    cout << "Array B (elements > 10): ";
    for (int x : B) {
        cout << x << " ";
    }
    cout << endl;
    ;
}

//7. Знайти номер останнього мінімального елемента серед елементів, менших Т1 і розташованих до першого елемента, більшого Т2.

void task_2() {
        int N, T1, T2;

        cout << "Enter N: ";
        cin >> N;
        cout << "Enter T1: ";
        cin >> T1;
        cout << "Enter T2: ";
        cin >> T2;

        int A[N];


        cout << "Enter array elements:" << endl;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }


        int lastMinIndex = -1;
        int minValue = INT_MAX;


        int limitIndex = N;
        for (int i = 0; i < N; i++) {
            if (A[i] > T2) {
                limitIndex = i;
                break;
            }
        }


        for (int i = 0; i < limitIndex; i++) {
            if (A[i] < T1 && A[i] <= minValue) {
                minValue = A[i];
                lastMinIndex = i;
            }
        }


        if (lastMinIndex != -1) {
            cout << "Last min element index: " << lastMinIndex << endl;
        } else {
            cout << "No such element found." << endl;
        }

    }

int main() {
    int choice;

    cout << "Choose a task to run:" << endl;
    cout << "1. Task 1 " << endl;
    cout << "2. Task 2 " << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            task_1();
        break;
        case 2:
            task_2();
        break;
        default:
            cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
