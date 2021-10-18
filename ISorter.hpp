#pragma once
#include "sequence.hpp"
#include "ArraySequence.hpp"
#include "ListSequence.hpp"
#include "BubbleSort.hpp"

template<typename T>
class ISorter {
public:
    virtual void sort(Sequence<T>* seq) = 0;
};

template<typename T>
class BubbleSorter : public ISorter<T> {
public:
    void sort(Sequence<T>* seq) override{
        BubbleSort(seq);
    }
};

template<typename T>
class QuickSorter : public ISorter<T> {
public:
    void sort(Sequence<T>* seq) override {
        QuickSort(seq, 0, seq->GetSize() - 1);
    }
};

template<typename T>
class ShellSorter : public ISorter<T> {
public:
    void sort(Sequence<T>* seq) override{
        ShellSort(seq);
    }
};
