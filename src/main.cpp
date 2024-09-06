#include "solution.h"
#include <chrono>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

// Include day solution headers
#include "../days/day01/day01.h"


int main(int argc, char* argv[]) {
  std::vector<std::unique_ptr<Solution>> solutions;
  solutions.push_back(std::make_unique<Day01>());
  // Add other days to the vector and include their header
  // ...

  auto total_start = std::chrono::high_resolution_clock::now();

  if (argc > 1) {
    for (int i = 1; i < argc; ++i) {
      int day = std::stoi(argv[i]) - 1;
      if (day >= 0 && day < static_cast<int>(solutions.size())) {
        solutions[day]->Solve();
      } else {
        std::cout << "Invalid day: " << argv[i] << std::endl;
      }
    }
  } else {
    for (auto& solution : solutions) {
      solution->Solve();
    }
  }

  auto total_end = std::chrono::high_resolution_clock::now();
  auto total_duration = std::chrono::duration_cast<std::chrono::milliseconds>(total_end - total_start);
  return 0;
}
