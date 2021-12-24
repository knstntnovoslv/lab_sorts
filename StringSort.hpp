#pragma once
#include "string"
using namespace std;
int* bubbler(int* c, int dimension){
    for (int i = 0; i < dimension; i++) {
        for (int j = (dimension - 1); j > i; j--) {
            if (c[j - 1] > c[j]) {
                int temp = c[j - 1];
                c[j - 1] = c[j];
                c[j] = temp;
            }
        }
    }
    return c;
}

string bubble(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = bubbler(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}

int* quicker(int *numbers, int left, int right)
{
    int pivot; // разрешающий элемент
    int l_hold = left; //левая граница
    int r_hold = right; // правая граница
    pivot = numbers[left];
    while (left < right) // пока границы не сомкнутся
    {
        while ((numbers[right] >= pivot) && (left < right))
            right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
            left++; // сдвигаем левую границу вправо
        }
        while ((numbers[left] <= pivot) && (left < right))
            left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
            right--; // сдвигаем правую границу вправо
        }
    }
    numbers[left] = pivot; // ставим разрешающий элемент на место
    pivot = left;
    left = l_hold;
    right = r_hold;
    if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
        quicker(numbers, left, pivot - 1);
    if (right > pivot)
        quicker(numbers, pivot + 1, right);
    return numbers;
}

string quick(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = quicker(numbers, 0, alpha.size() - 1);
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}

int* sheller(int* c, int dimension)
{
    int i, j, step;
    int tmp;
    for (step = dimension / 2; step > 0; step /= 2) {
        for (i = step; i < dimension; i++) {
            tmp = c[i];
            for (j = i; j >= step; j -= step) {
                if (tmp < c[j - step])
                    c[j] = c[j - step];
                else
                    break;
            }
            c[j] = tmp;
        }
    }
    return c;
}

string shell(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = sheller(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}
