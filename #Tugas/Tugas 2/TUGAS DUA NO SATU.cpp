#include <iostream>
using namespace std;

class HelloWorld {
public:
    void sayHello() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    HelloWorld hello;
    hello.sayHello();
    return 0;
}

