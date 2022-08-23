#include <iostream>
#include <vector>

int main() {
    std::vector<int> storage(20);
    while(true){
        int add_number;
        std::cout << "Input number: ";
        std::cin >> add_number;
        if (add_number == -1) {
            for (int i = 0; i < storage.size(); ++i) std::cout << storage[i] << " ";
        }
        else{
            for (int i = 0; i < storage.size() - 1; ++i) {
                std::swap(storage[i], storage[i+1]);
            }
            storage[19] = add_number;
        }
    }
}
