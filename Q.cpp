//
// Created by danai on 18/10/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new float[n];
}

Q::Q(int nn) {
    n=nn;
    a=new float[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new float[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

int Q::user_input() {
    cout << "введите размер массива : ";
    cin >> n;
    while(n < 2) {
        cout << "введите положительное число не менее 2 : ";
        cin >> n;
    }
    a = new float[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
    return n;
}

float* Q::fun() {
    auto *res = new float[n];
    int k = -1;
    for (int i = 0; i < n; ++i) res[i] = a[i];
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == 1/a[i+1]) {
            k = i;
            i = n;
        }
    }
    if (k != -1) {
        swap(*(res+k), *res);
        swap(*(res+k+1), *(res+1));
    }
    return res;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}