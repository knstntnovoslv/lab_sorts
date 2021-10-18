#include<fstream>
#include "ISorter.hpp"
#include<cstdlib>
#include "makeSeqHelp.hpp"
//Пузырьковая сортировка
template<typename T>
float BubbleSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = makeSeq<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSeq<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_bubble_sort.csv");
    fout<<"int_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_bubble_sort.csv");
    fout<<"float_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_bubble_sort.csv");
    fout<<"int_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_list_bubble_sort.csv");
    fout<<"float_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<float>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
//Быстрая сортировка
template<typename T>
float QuickSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = makeSeq<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSeq<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_quick_sort.csv");
    fout<<"int_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_quick_sort.csv");
    fout<<"float_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_quick_sort.csv");
    fout<<"int_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_list_quick_sort.csv");
    fout<<"float_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<float>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
template<typename T>
float ShellSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = makeSeq<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSeq<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_shell_sort.csv");
    fout<<"int_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShellSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_shell_sort.csv");
    fout<<"float_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShellSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_shell_sort.csv");
    fout<<"int_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShellSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_list_shell_sort() {
    float time;
    ofstream fout;
    fout.open("float_list_shell_sort.csv");
    fout << "float_list_shell_sort" << "\n";
    for (int i = 0; i < 1000; i += 20) {
        time = ShellSortHelp<float>(i, 2);
        fout << time << "\n";
    }
    fout.close();
}
//граничные случаи
template<typename T>
float equal_bubble_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_equal_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_bubble_sort.csv");
    fout<<"int_equal_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_bubble_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_bubble_sort.csv");
    fout<<"int_equal_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_bubble_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}
template<typename T>
float equal_quick_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_equal_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_quick_sort.csv");
    fout<<"int_equal_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = equal_quick_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_quick_sort.csv");
    fout<<"int_equal_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = equal_quick_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}
template<typename T>
float equal_shell_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_equal_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_shell_sort.csv");
    fout<<"int_equal_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shell_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_shell_sort.csv");
    fout<<"int_equal_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_quick_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}
template<typename T>
float sorted_bubble_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_sorted_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_bubble_sort.csv");
    fout<<"int_sorted_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_bubble_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_sorted_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_bubble_sort.csv");
    fout<<"int_sorted_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_bubble_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}
template<typename T>
float sorted_quick_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_sorted_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_quick_sort.csv");
    fout<<"int_sorted_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_quick_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_sorted_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_quick_sort.csv");
    fout<<"int_sorted_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_quick_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}
template<typename T>
float sorted_shell_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_sorted_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_shell_sort.csv");
    fout<<"int_sorted_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shell_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_sorted_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_shell_sort.csv");
    fout<<"int_sorted_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shell_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}
//xlsx формат ексель файла
//csv формат csv файла
void shell_random_files(){
    for_int_array_shell_sort();
    for_float_array_shell_sort();
    for_int_list_shell_sort();
    for_float_list_shell_sort();
}
void bubble_random_files(){ 
    for_int_array_bubble_sort();
    for_float_array_bubble_sort();
    for_int_list_bubble_sort();
    for_float_list_bubble_sort();
}
void quick_random_files(){
    for_int_array_quick_sort();
    for_float_array_quick_sort();
    for_int_list_quick_sort();
    for_float_list_quick_sort();
}
void bubble_equal_files(){
    for_int_equal_array_bubble_sort();
    for_int_equal_list_bubble_sort();
}
void quick_equal_files(){
    for_int_equal_array_quick_sort();
    for_int_equal_list_quick_sort();
}
void shell_equal_files(){
    for_int_equal_array_shell_sort();
    for_int_equal_list_shell_sort();
}

void bubble_sorted_files(){
    for_int_sorted_array_bubble_sort();
    for_int_sorted_list_bubble_sort();
}
void quick_sorted_files(){
    for_int_sorted_array_quick_sort();
    for_int_sorted_list_quick_sort();
}
void shell_sorted_files(){
    for_int_sorted_array_shell_sort();
    for_int_sorted_list_shell_sort();
}