// C++ program to implements
// normal iterators
 
#include <iostream>
#include <vector>
using namespace std;
 
// Function to implements
// normal iterators
void normal_iterator(vector<int> my_iterable)
{
 
    // Printing the iterable before making
    // any changes
    cout << "Value before modification: ";
    for (int my_iterator : my_iterable) {
        cout << my_iterator << " ";
    }
 
    // Case where the iterator
    // makes a temporary copy
    // of the current loop item
    for (int my_iterator : my_iterable) {
        // changing the value of the iterator
        my_iterator += 3;
        cout<<my_iterator<<"  ";
    }
 
    cout << "\nValue after modification : ";
 
    // Printing the iterable
    // to see if any changes
    // has been made in the
    // original container or not
    for (int my_iterator : my_iterable) {
        cout << my_iterator << " ";
    }
}
// Driver Code
int main()
{
    // Initialising a standard
    // template container
    vector<int> my_iterable;
    my_iterable.push_back(101);
    my_iterable.push_back(102);
    my_iterable.push_back(103);
    my_iterable.push_back(106);
 
    normal_iterator(my_iterable);
 
    return 0;
}