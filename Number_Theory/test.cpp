#include <iostream>
#include <chrono>

int main() {
    int iterations = 0;
    auto startTime = std::chrono::high_resolution_clock::now();
    
    while (true) {
        // Do some simple operation here
        iterations++;
        auto currentTime = std::chrono::high_resolution_clock::now();
        auto elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(currentTime - startTime).count();
        
        if (elapsedTime >= 1) {
            std::cout << "Iterations per second: " << iterations << std::endl;
            break;
        }
    }

    return 0;
}
