#pragma once
#include <vector>
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count); 
void print(const std::vector<std::shared_ptr<int>>& vec);
