#include <iostream>
using namespace std;

extern "C" {
    void Greet() {
       printf("Hello World");
    }
}
