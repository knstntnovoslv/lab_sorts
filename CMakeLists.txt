cmake_minimum_required(VERSION 3.17)
project(sort_laboratornaya)

set(CMAKE_CXX_STANDARD 14)

add_executable(sort_laboratornaya main.cpp sequence.hpp LinkedList.hpp ArraySequence.hpp ListSequence.hpp QuickSort.hpp BubbleSort.hpp ShellSort.hpp ISorter.hpp ready_test.hpp keyboard_test.hpp Time_test.hpp for_visualisation.hpp time_struct.hpp makeSeqHelp.hpp)