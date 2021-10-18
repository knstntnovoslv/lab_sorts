#pragma once
#include<cstdlib>
#include "ISorter.hpp"
#include "time_struct.hpp"
#include <cassert>
#include <chrono>
#include "makeSeqHelp.hpp"

void print_result(const string &test, for_time time){
    cout<<test<<"\n";
    cout<<"Bubble sort time"<<" "<<time.bubble_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Quick sort time"<<" "<<time.quick_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Shell sort time"<<" "<<time.shell_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"\n";
}
for_time time_test_int_for_array(int dimension){
    int* array = makeSeq<int>(dimension);
    ArraySequence<int> a(array, dimension);
    ArraySequence<int> b(array, dimension);
    ArraySequence<int> c(array, dimension);
    BubbleSorter<int> q;
    QuickSorter<int> w;
    ShellSorter<int> e;
    Sequence<int>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

for_time time_test_float_for_array(int dimension){
    float* array = makeSeq<float>(dimension);
    ArraySequence<float> a(array, dimension);
    ArraySequence<float> b(array, dimension);
    ArraySequence<float> c(array, dimension);
    BubbleSorter<float> q;
    QuickSorter<float> w;
    ShellSorter<float> e;
    Sequence<float>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

for_time time_test_int_for_list(int dimension){
    int* array = makeSeq<int>(dimension);
    ListSequence<int> a(array, dimension);
    ListSequence<int> b(array, dimension);
    ListSequence<int> c(array, dimension);
    BubbleSorter<int> q;
    QuickSorter<int> w;
    ShellSorter<int> e;
    Sequence<int>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

for_time time_test_float_for_list(int dimension){
    float* array = makeSeq<float>(dimension);
    ListSequence<float> a(array, dimension);
    ListSequence<float> b(array, dimension);
    ListSequence<float> c(array, dimension);
    BubbleSorter<float> q;
    QuickSorter<float> w;
    ShellSorter<float> e;
    Sequence<float>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

void time_test(int dimension){
    print_result("Test for int array",time_test_int_for_array(dimension));
    print_result("Test for float array",time_test_float_for_array(dimension));
    print_result("Test for int list",time_test_int_for_list(dimension));
    print_result("Test for float list",time_test_float_for_list(dimension));
}