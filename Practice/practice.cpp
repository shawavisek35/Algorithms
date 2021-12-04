#include <iostream>

namespace print {
    void cout(int a, int b){
        std :: cout << "Checking " << a << " and " << b;
    }
}

class A{

    public:
        A(){
            print :: cout(5,6);
        }

        
};

int main(){
    A *a = new A();
}