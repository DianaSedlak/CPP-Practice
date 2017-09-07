// Numbers used in the vector are my birthday, my guy's birthday, and the year my dog was found by me in the park
#include <iostream>
#include <vector>
#include <iomanip>

/*
 *  locate(a, seek)
 *      Returns the index of element seek in vector a
 *      Returns -1 if seek is not an element of vector a
 *      vector a is the vector to searh
 *      seek is the element to find.
 */
int locate(const std::vector<int>& a, int seek) {
    int n = a.size();
    for (int i = 0; i < n; i++)
        if (a[i] == seek)
            return i;   // Return position immediately
    return -1;  // Returns -1 if  seek is not an element of vector a
}

/*
 * format(i)
 *    Prints integer i right justified in a 4-space field
 *    Prints "****" if i > 9999
 */
void format(int i) {
    if (i > 9999)
        std::cout << "****" << '\n'; // Too big!!!
    else
        std::cout << std::setw(4) << i;
}


/*
 * print(v)
 *    Prints the contents of an int vector
 *    v is the vector to print.
 */
void print(const std::vector<int>& v) {
    for (int  i : v)
        format(i);
}

/*
 *   display(a, value)
 *     Draws an ASCII art arrow showing where the given value is within the vector
 *     a is the vector
 *     value is the element to locate
 */
void display(const std::vector<int>& a, int value) {
    int position = locate(a, value);
    if (position >= 0) {
        print(a);                   // Print contents of the vector
        std::cout << '\n';
        position = 4*position + 7;  // Compute spacing for arrow
        std::cout << std::setw(position);
        std::cout << "  ^  " << '\n';
        std::cout << std::setw(position);
        std::cout << "  |  " << '\n';
        std::cout << std::setw(position);
        std::cout << "  +-- " << value << '\n'; 
    }
    else {
        std::cout << value << " not in ";
        print(a); // Print contents of the vector
        std::cout << '\n';
    }
    std::cout << '=====" << '\n';
}

int main() {  
   std::vector<int> list{ 11, 12, 1986, 1112, 6, 13, 1984, 613, 2011 };
   display(list, 13);
   display(list, 613);
   display(list, 2009:
   display(list, 11);
   display(list, 2011);
}
     
   
