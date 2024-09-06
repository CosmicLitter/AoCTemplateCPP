#include "day01.h"
#include <fstream>

Day01::Day01() {
  ReadInput("days/day01/input");
}
void Day01::ReadInput(const std::string& file_name) {
  std::ifstream file(file_name);
  std::string line;
  while (std::getline(file, line)) {
    lines.push_back(line);
  }
}

std::string Day01::Part1() {
  for (const auto line : lines) {

  }

  return "no solution";
}

std::string Day01::Part2() {
  for (const auto line : lines) {

  }

  return "no solution";
}
