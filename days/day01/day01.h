#ifndef ADVENTOFCODE_DAY01_H
#define ADVENTOFCODE_DAY01_H

#include "solution.h"
#include <vector>

class Day01 : public Solution {
public:
  Day01();
protected:
  std::string Name() const override { return "01"; }
  void ReadInput(const std::string& file_name) override; 
  std::string Part1() override;
  std::string Part2() override;

private:
  std::vector<std::string> lines;
};


#endif
