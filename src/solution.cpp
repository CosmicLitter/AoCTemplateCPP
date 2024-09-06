#include "solution.h"
#include <iostream>
#include <iomanip>

void Solution::Solve() {
  std::cout << "Day " << Name() << "\n";

  auto [result1, time1] = TimeSolution([this] { return Part1(); });
  auto [result2, time2] = TimeSolution([this] { return Part2(); });

  std::cout << std::fixed << std::setprecision(3);
  std::cout << "Part 1: " << result1 << " (" << time1.count() / 1000.0 << " ms)\n";
  std::cout << "Part 2: " << result2 << " (" << time2.count() / 1000.0 << " ms)\n";
  std::cout << "Total Time: " << (time1 + time2).count() / 1000.0 << " ms\n\n";
}
