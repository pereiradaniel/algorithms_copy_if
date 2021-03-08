// Algorithms - Copy If
// copy_if.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// OutputIterator copy_if(InputIterator f, InputIterator l, OutputIterator o, Fn predicate)
// copy all of the elements within range[f, l) into the range starting at o that satisfy predicate

// This program copies from the first 10 elements of vector v those elements that are
// odd into vector c and displays the all of the elements in c.


#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> v = { 1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43 };
    std::vector<int> c(15);
    std::copy_if(v.begin(), v.begin() + 10, c.begin(),
        [](int i) -> bool { return i % 2; });
    for (auto e : c)
        if (e) std::cout << e << std::endl;
}