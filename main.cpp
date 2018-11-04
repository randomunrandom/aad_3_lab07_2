/*
 * created by Danil Kireev, PFUR NFI-201, 18.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 46
 * Определите, имеется ли в заданном массиве A(N)
 * хотя бы одна пара соседних чисел,
 * являющихся взаимообратными и
 * переставьте их в начало и конец массива.
 */

int main() {
    cout << "проверка на наличие сеседних взаимообратных чисел и перемещение их в начало" << endl;
    Q obj;
    int n;
    float *res;
    n = obj.user_input();
    obj.print();
    res = obj.fun();
    cout << "вывод получееного массива: " << endl;
    for(int i=0; i<n; i++) cout << res[i] << " ";
    cout << endl;
    cout << "вывод оригинального массива: " << endl;
    obj.print();
    return 0;
}