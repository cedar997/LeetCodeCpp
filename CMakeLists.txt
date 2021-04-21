# CMakeList.txt: LeetCodeCpp 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("LeetCodeCpp")

# 将源代码添加到此项目的可执行文件。
add_executable (LeetCodeCpp "LeetCodeCpp.cpp" "LeetCodeCpp.h" "tree/maxDepth.cpp"   "tree/Solution.hpp" "string/reverseWords.cpp" "string/Solution.hpp"  "numbers/Solution.hpp" "numbers/majorityElement.cpp")
add_executable (CppTest "cpp/test.cpp" "string/reverseWords.cpp" "string/Solution.hpp" "numbers/Solution.hpp" "numbers/majorityElement.cpp")
add_executable (singleNumber "numbers/singleNumber.cpp" "numbers/Solution.hpp" "numbers/majorityElement.cpp")
# TODO: 如有需要，请添加测试并安装目标。
