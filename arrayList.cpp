#include <iostream>
#include "ArrayList.h"

using namespace std;

ArrayList::ArrayList(int cap) {
    if (cap > 0) {
        capacity = cap;
        num_items = 0;
        data = new int[capacity];
    }	
    else throw logic_error("Capacity of array has to be greater than 0");
}
ArrayList::~ArrayList() {
    delete data;
}
void ArrayList::add(int item) {
    add(num_items, item);
}
void ArrayList::add(int pos, int item) {
        if (num_items < capacity) {
            if (pos >= 0 && pos <= num_items) {
                for (int i = num_items - 1; i >= pos; i--)
                    data[i + 1] = data[i];
                data[pos] = item;
                num_items++;
            }
            else throw out_of_range("Position of an element has to be between 0 and total items - 1");
        }
        else throw logic_error("Array is full");
}
bool ArrayList::contains(int item) {
    for (int i = 0; i < num_items; i++)
        if (data[i] == item)
            return true;
    return false;
}
int ArrayList::size() {
    return num_items;
}
bool ArrayList::isEmpty() {
    if (num_items == 0) return true;
    else return false;
}
int ArrayList::get(int pos) {
    if (pos >= 0 && pos < num_items)
        return data[pos];
    else throw out_of_range("Position of an element has to be between 0 and total items - 1");
}
void ArrayList::remove(int pos) {
    if (pos >= 0 && pos < num_items) {
        for (int i = pos; i < num_items - 1; i++)
            data[i] = data[i + 1];
        num_items--;
    }
        else throw out_of_range("Position of an element has to be between 0 and total items - 1");
}//  Ask him does he want the remove function to return an int or not
void ArrayList::show() {
    if (num_items > 0) {
        cout << "[ ";
        for (int i = 0; i < num_items; i++)
            cout << data[i] << " ";
        cout << "]\n";
    }
    else cout << "[]\n";
}
