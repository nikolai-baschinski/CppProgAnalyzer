auto lambda = [](auto x, auto y) -> auto {
    return x + y;
};

void demo_generic_lambda() {
    std::cout << "1. Generic lambdas:\n";
    auto add = [](auto a, auto b) { return a + b; }; // Parameter mit auto
    std::cout << "   add(2, 3) = " << add(2, 3) << "\n";
    std::cout << "   add(1.5, 2.5) = " << add(1.5, 2.5) << "\n\n";
}
