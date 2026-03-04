#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    std::vector<std::string> myVector = {"Hello ", "World ", "C++26 is great! "};
    for (const std::string& words: myVector) {
        std::cout << words << std::endl;
    }

    cout << "Size of vector: " << myVector.size() << endl;
    cout << "Capacity of vector: " << myVector.capacity() << endl;
    cout << "Max size of vector: " << myVector.max_size() << endl;
    cout << "Is vector empty? " << (myVector.empty() ? "Yes" : "No") << endl;
    cout << "First element: " << myVector.front() << endl;
    cout << "Last element: " << myVector.back() << endl;
    cout << "Element at index 1: " << myVector.at(1) << endl;
    cout << "Element at index 2: " << myVector.at(2) << endl;
    cout << "Element at index 0: " << myVector.at(0) << endl;

    cout << "Element index 1 using operator[]: " << myVector[1] << endl;
    cout << "Elemnt index 2 using operator[]: " << myVector[2] << endl;
    cout << "Element index 0 using operator[]: " << myVector[0] << endl;

    myVector.push_back("Let's learn C++26 together!");
    cout << "After push_back: " << myVector.back() << endl;
    myVector.pop_back();

    


    return 0;



}