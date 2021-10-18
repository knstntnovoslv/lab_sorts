#pragma once
#include "ISorter.hpp"
#include "makeSeqHelp.hpp"

void keyboard_int_test(int choose){
    Sequence<int>* pointer;
    BubbleSorter<int> q;
    QuickSorter<int> w;
    ShellSorter<int> e;
    cout<<"Input dimension"<<"\n";
    int dimension;
    cin>>dimension;
    int* array = makeSequence<int>(dimension);
    if(choose == 1){
        ArraySequence<int> a(array, dimension);
        ArraySequence<int> b(array, dimension);
        ArraySequence<int> c(array, dimension);
        cout<<"Tested Array"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &a;
        q.sort(pointer);
        cout<<"Bubble Sort"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &b;
        w.sort(pointer);
        cout<<"Quick Sort"<<"\n";
        b.Print();
        cout<<"\n";
        pointer = &c;
        e.sort(pointer);
        cout<<"Shell Sort"<<"\n";
        c.Print();
    }
    else{
        ListSequence<int> a(array, dimension);
        ListSequence<int> b(array, dimension);
        ListSequence<int> c(array, dimension);
        cout<<"Tested List"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &a;
        q.sort(pointer);
        cout<<"Bubble Sort"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &b;
        w.sort(pointer);
        cout<<"Quick Sort"<<"\n";
        b.Print();
        cout<<"\n";
        pointer = &c;
        e.sort(pointer);
        cout<<"Shell Sort"<<"\n";
        c.Print();
    }
}

void keyboard_float_test(int choose){
    Sequence<float>* pointer;
    BubbleSorter<float> q;
    QuickSorter<float> w;
    ShellSorter<float> e;
    cout<<"Input dimension"<<"\n";
    int dimension;
    cin>>dimension;
    float* array = makeSequence<float>(dimension);
    if(choose == 1){
        ArraySequence<float> a(array, dimension);
        ArraySequence<float> b(array, dimension);
        ArraySequence<float> c(array, dimension);
        cout<<"Tested Array"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &a;
        q.sort(pointer);
        cout<<"Bubble Sort"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &b;
        w.sort(pointer);
        cout<<"Quick Sort"<<"\n";
        b.Print();
        cout<<"\n";
        pointer = &c;
        e.sort(pointer);
        cout<<"Shell Sort"<<"\n";
        c.Print();
    }
    else{
        ListSequence<float> a(array, dimension);
        ListSequence<float> b(array, dimension);
        ListSequence<float> c(array, dimension);
        cout<<"Tested List"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &a;
        q.sort(pointer);
        cout<<"Bubble Sort"<<"\n";
        a.Print();
        cout<<"\n";
        pointer = &b;
        w.sort(pointer);
        cout<<"Quick Sort"<<"\n";
        b.Print();
        cout<<"\n";
        pointer = &c;
        e.sort(pointer);
        cout<<"Shell Sort"<<"\n";
        c.Print();
    }
}

