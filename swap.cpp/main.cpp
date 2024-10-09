//
//  main.cpp
//  swap.cpp
//
//  Created by Isaac Adeleke on 10/8/24.
//

#include <iostream>
using namespace std;

// Function to swap two variables using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 2;
    int num2 = 1;

    // Swap the values using the swap function
    swap(&num1, &num2);

    cout << "Hello\n" << num1 << " " << num2 << endl;
    return 0;
}
