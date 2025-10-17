#include <iostream>

struct A {
    void foo() const { std::cout << "A::foo()\n"; }
};

struct B {
    void bar() const { std::cout << "B::bar()\n"; }
};

struct C {
    void baz() const { std::cout << "C::baz()\n"; }
};

template<typename... Bases>
struct Combined : Bases... {
    using Bases::operator=...; 
};

int main() {
    Combined<A, B, C> obj;

    obj.A::foo();
    obj.B::bar();
    obj.C::baz();

    return 0;
}