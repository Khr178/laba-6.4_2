// лаба 6.4.2.cpp 

#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <cassert>
using namespace std;
float* initialize(int size) {
    float* arr = new float[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter element number " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    return arr;
}

float find_min_elemenet(float arr[], int size) {
    float minEl = arr[0];

    for (int i = 1; i < size; i++) {
        if (minEl > arr[i]) {
            minEl = arr[i];
        }
    }

    return minEl;
}

float find_first_negative_elemenet(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            return arr[i];
        }
    }
    return 0;
}

float find_second_negative_elemenet(float arr[], int size) {
    int q = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            ++q;
            if (q == 2) {
                return arr[i];
            }
        }
    }
}


int find_index(float arr[], int size, float el) {
    // якщо в масиві два мінімальні елементи, то буде повернутий індекс першого із них
    // якщо необхідного елементу немає. то функція поверне нуль

    for (int i = 0; i < size; i++) {
        if (el == arr[i]) {
            return i;
        }
    }

    return 0;
}

float sum_of_elements_in_range(float arr[], int size, int limit1, int limit2) {
    assert((limit1 >= 0) || (limit2 <= size) || (limit1 < limit2));

    float sum = 0;
    for (int i = limit1; i < limit2; i++) {
        sum += arr[i];
    }

    return sum;
}

void sort_array_by_abs(float arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {

        for (j = 0; j < size - i - 1; j++) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                float tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void print_array(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::setw(6);
    }
    std::cout << std::endl;
}