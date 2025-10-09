auto [a, b] = p;

#include <tuple>
#include <iostream>
int main() {
    std::tuple<int, std::string> t{1, "Alice"};
    auto [id1, name1] = t;
    auto& [id2, name2] = t;
    const auto& [id3, name3] = t;
    id2 = 42; 
    std::cout << std::get<0>(t) << " " << std::get<1>(t) << "\n";
}

auto [quotient, remainder] = divide(10, 3);

#include <iostream>
#include <tuple>
#include <string>

int main() {
    std::tuple<int, std::string, double> person{42, "Alice", 3.14};
    auto [id, name, score] = person;
    std::cout << "ID: " << id << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Score: " << score << "\n";
    auto& [ref_id, ref_name, ref_score] = person;
    ref_id = 100;
    ref_score = 4.5;
    std::cout << "Updated ID: " << std::get<0>(person) << "\n";
    std::cout << "Updated Score: " << std::get<2>(person) << "\n";
}
