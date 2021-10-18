#pragma once
#include "sequence.hpp"
#include "ArraySequence.hpp"
#include "ISorter.hpp"
void ready_int_sort_test(int choose){
    BubbleSorter<int> q;
    QuickSorter<int> w;
    ShellSorter<int> e;
    Sequence<int> *seq;
    int test_arr[10] = {3, 2, 4, 10, 51, 43, 24, 8, 1, 103};
    if(choose == 1) {
        ArraySequence<int> a(test_arr, 10);
        ArraySequence<int> b(test_arr, 10);
        ArraySequence<int> c(test_arr, 10);
        cout << "Tested Array" << "\n";
        a.Print();
        cout << "\n";
        seq = &a;
        q.sort(seq);
        cout << "Bubble Sort" << "\n";
        a.Print();
        cout << "\n";
        seq = &b;
        e.sort(seq);
        cout<<"Shell Sort"<<"\n";
        b.Print();
        cout<<"\n";
        seq = &c;
        w.sort(seq);
        cout<<"Quick Sort"<<"\n";
        c.Print();
    }
    else {
        ListSequence<int> a(test_arr, 10);
        ListSequence<int> b(test_arr, 10);
        ListSequence<int> c(test_arr, 10);
        cout << "Tested List" << "\n";
        a.Print();
        cout << "\n";
        seq = &a;
        q.sort(seq);
        cout << "Bubble Sort" << "\n";
        a.Print();
        cout << "\n";
        seq = &b;
        e.sort(seq);
        cout<<"Shell Sort"<<"\n";
        b.Print();
        cout<<"\n";
        seq = &c;
        w.sort(seq);
        cout<<"Quick Sort"<<"\n";
        c.Print();
    }
}

void ready_float_sort_test(int choose){
    BubbleSorter<float> q;
    QuickSorter<float> w;
    ShellSorter<float> e;
    Sequence<float> *seq;
    float test_arr[10] = {3.2, 2.71, 4.0, 10.56, 51.11, 43.72, 24.39, 8.1, 1.9, 103.6};
    if(choose == 1) {
        ArraySequence<float> a(test_arr, 10);
        ArraySequence<float> b(test_arr, 10);
        ArraySequence<float> c(test_arr, 10);
        cout << "Tested Array" << "\n";
        a.Print();
        cout << "\n";
        seq = &a;
        q.sort(seq);
        cout << "Bubble Sort" << "\n";
        a.Print();
        cout << "\n";
        seq = &b;
        e.sort(seq);
        cout<<"Shell Sort"<<"\n";
        b.Print();
        cout<<"\n";
        seq = &c;
        w.sort(seq);
        cout<<"Quick Sort"<<"\n";
        c.Print();
    }
    else {
        ListSequence<float> a(test_arr, 10);
        ListSequence<float> b(test_arr, 10);
        ListSequence<float> c(test_arr, 10);
        cout << "Tested List" << "\n";
        a.Print();
        cout << "\n";
        seq = &a;
        q.sort(seq);
        cout << "Bubble Sort" << "\n";
        a.Print();
        cout << "\n";
        seq = &b;
        e.sort(seq);
        cout<<"Shell Sort"<<"\n";
        b.Print();
        cout<<"\n";
        seq = &c;
        w.sort(seq);
        cout<<"Quick Sort"<<"\n";
        c.Print();
    }
}
