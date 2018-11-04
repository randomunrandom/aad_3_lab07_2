//
// Created by danai on 18/10/18.
//

#include <iostream>
using namespace std;
#ifndef AAD_3_LAB07_1_Q_H
#define AAD_3_LAB07_1_Q_H


class Q {
private:
    int n;
    float *a;
public:
    Q();
    Q(int nn);
    Q(int nn, int *aa);

    int user_input();
    void print();
    float* fun();
};


#endif //AAD_3_LAB07_1_Q_H