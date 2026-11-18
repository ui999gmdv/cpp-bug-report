#include <iostream>
#include <cstring>

using namespace std

int divide(int a, int b) {
    return a / b;
}

int* createAndReturnLocal() {
    int localVar = 42;
    return &localVar;
}

void modifyValue(int x) {
    x = x + 10;
}

int main() {
    int uninitializedVar;
    int result = uninitializedVar + 5;

    int x = 10;
    if (x = 5) {
        std::cout << "x is 5" << std::endl;
    }

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int* dynArr = new int[10];
    dynArr[0] = 100;
    delete dynArr;

    int* leakedPtr = new int(25);

    int* nullPtr = nullptr;
    *nullPtr = 50;

    int zero = 0;
    int divRes = divide(10, zero);

    int* dangling = createAndReturnLocal();
    std::cout << *dangling << std::endl;

    int val = 5;
    modifyValue(val);
    if (val == 15) {
        std::cout << "Modified!" << std::endl;
    }

    char smallBuf[5];
    strcpy(smallBuf, "HelloWorld");

    int counter = 0;
    while (counter < 5); {
        counter++;
    }

    double precise = 3.99;
    int truncated = precise;

    int choice = 1;
    switch (choice) {
        case 1:
            std::cout << "One" << std::endl;
        case 2:
            std::cout << "Two" << std::endl;
            break;
    }

    int* uninitPtr;
    *uninitPtr = 123;

    return 0;
}
