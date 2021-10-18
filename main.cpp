#pragma once
#include <iostream>
#include "keyboard_test.hpp"
#include "ready_test.hpp"
#include "Time_test.hpp"
#include "ISorter.hpp"
#include "QuickSort.hpp"
#include "ShellSort.hpp"
#include "for_visualisation.hpp"
using namespace std;
int main() {
    int zero = 0;
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int fifth = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    while (first != 4) {
        cout << endl << "Choose Test:" << endl;
        cout << "1. Ready test" << endl << "2. Keyboard test" << endl << "3. Time test" << endl << "4. Exit"
             << "\n";
        cin >> first;
        cout << "\n";
        switch (first) {
            case 1: {
                second = 0;
                while (second != 3) {
                    cout << endl << "Choose Type:" << endl;
                    cout << "1. Int sort test" << endl << "2. Float sort test" << endl << "3. back" << endl;
                    cin >> second;
                    cout << "\n";
                    switch (second) {
                        case 1: {
                            third = 0;
                            while (third != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Array" << endl << "2. list" << endl << "3. back" << endl;
                                cin >> third;
                                cout << "\n";
                                switch (third) {
                                    case 1: {
                                        ready_int_sort_test(1);
                                        break;
                                    }
                                    case 2: {
                                        ready_int_sort_test(2);
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default:
                                        cout << "Enter a number from the list";
                                        break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            fourth = 0;
                            while (fourth != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Array" << endl << "2. list" << endl << "3. back" << endl;
                                cin >> fourth;
                                cout << "\n";
                                switch (fourth) {
                                    case 1: {
                                        ready_float_sort_test(1);
                                        break;
                                    }
                                    case 2: {
                                        ready_float_sort_test(2);
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default:
                                        cout << "Enter a number from the list";
                                        break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            break;
                        }
                        default: {
                            cout << "Enter a number from the list";
                            break;
                        }
                    }
                }
                break;
            }
            case 2: {
                fifth = 0;
                while (fifth != 3) {
                    cout << endl << "Choose Type:" << endl;
                    cout << "1. Int sort test" << endl << "2. Float sort test" << endl << "3. back" << endl;
                    cin >> fifth;
                    cout << "\n";
                    switch (fifth) {
                        case 1: {
                            six = 0;
                            while (six != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Array" << endl << "2. list" << endl << "3. back" << endl;
                                cin >> six;
                                cout << "\n";
                                switch (six) {
                                    case 1: {
                                        keyboard_int_test(1);
                                        break;
                                    }
                                    case 2: {
                                        keyboard_int_test(2);
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list";
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        case 2: {
                            seven = 0;
                            while (seven != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Array" << endl << "2. list" << endl << "3. back" << endl;
                                cin >> seven;
                                cout << "\n";
                                switch (seven) {
                                    case 1: {
                                        keyboard_float_test(1);
                                        break;
                                    }
                                    case 2: {
                                        keyboard_float_test(2);
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list";
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        case 3: {
                            break;
                        }
                        default: {
                            cout << "Enter a number from the list";
                            break;
                        }
                    }
                }
                break;
            }
            case 3: {
                time_test(1000);
                break;
            }
            case 4: {
                break;
            }
            default: {
                cout << "Enter a number from the list";
                break;
            }
        }
    }
}


