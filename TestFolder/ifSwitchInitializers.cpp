auto it = myMap.find(key);
if (it != myMap.end()) {
    std::cout << it->second;
}

if (auto it = myMap.find(key); it != myMap.end()) {
    std::cout << it->second;
}

if (std::ifstream file{"data.txt"}; file.is_open()) {
    std::string line;
    std::getline(file, line);
}

switch (auto len = str.size(); len) {
    case 0:  std::cout << "empty\n"; break;
    case 1:  std::cout << "one char\n"; break;
    default: std::cout << len << " chars\n"; break;
}

