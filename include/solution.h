#ifndef ADVENTOFCODE_SOLUTION_H
#define ADVENTOFCODE_SOLUTION_H

#include <chrono>
#include <string>

class Solution {
public:
  virtual ~Solution() = default;
  Solution() = default;
  void Solve();

protected:
  virtual std::string Name() const = 0;
  virtual void ReadInput(const std::string& file_name) = 0;
  virtual std::string Part1() = 0;
  virtual std::string Part2() = 0;

private:
  template<typename F>
  std::pair<std::string, std::chrono::microseconds> TimeSolution(F&& function) {
    auto start = std::chrono::high_resolution_clock::now();
    std::string result = function();
    auto end = std::chrono::high_resolution_clock::now();
    return {result, std::chrono::duration_cast<std::chrono::microseconds>(end - start)};
  }
};

#endif
