#include <iostream>
#include <cstdlib>
#include "ArrayList.h"

using namespace std;

int main() {
    try {
        ArrayList list(100);
        cout << "Is the list empty: " << list.isEmpty() << endl;
        list.add(23);
        list.add(42);
        list.add(14);
        list.add(33);
        list.show();
        list.add(1, 99);
        list.show();
        list.add(5, 100);
        list.show();
        list.remove(2);
        list.show();
        list.remove(0);
        list.show();
        list.remove(3);
        list.show();
        cout << "Does the list contain 33? " << list.contains(33) << endl;
        cout << "Does the list contain 111? " << list.contains(111) << endl;
        cout << "Size of array is " << list.size() << endl;
        cout << "Is the list empty: " << list.isEmpty() << endl;
        cout << "get(2) = " << list.get(2) << endl;
        cout << "get(99) = " << list.get(99) << endl;
        return 0;
    }
    catch (logic_error error) {
        cout << error.what();
        exit(EXIT_FAILURE);
    }
}