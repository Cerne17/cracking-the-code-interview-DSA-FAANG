#include<iostream>
#include<vector>

using namespace std;


int main() {
    // Declaring a vector: vector<type> name; (This is a static vector)
    vector<int> staticVector;

    vector<int> *dynamicVector = new vector<int>; // This is a dynamic vector
    // The static vector deletes itself when it goes out of scope.
    // The dynamic vector does not delete itself when it goes out of scope. We would've have to delete it manually.
    
    // Adding elements to the vector
    staticVector.push_back(10);
    staticVector.push_back(20);
    staticVector.push_back(30);
    staticVector.push_back(40);
    staticVector.push_back(50);
    staticVector.push_back(60);
    staticVector.push_back(70);
    /*
     * Note: never use vector[index] to add elements to the vector. Always use push_back() to add elements to the vector.
    */

    // Accessing elements of the vector
    cout << staticVector[0] << endl; // This is the first element of the vector
    int test = staticVector.at(3); // This is the fourth element of the vector
    cout << test << endl;
    
    // Removing elements from the vector
//    int removed = staticVector.pop_back(); // This removes the last element of the vector
//   cout << removed << endl;

    // Current capacity of the vector
    // Difference between size and capacity: size is the number of elements in the vector,
    // capacity is the number of elements the vector can hold.
    cout << staticVector.capacity() << endl;

    vector<int> vector2;
    for (int i = 0; i< 100; i++) {
        vector2.push_back(i);
        cout << "Size " << vector2.size();
        cout << "     Capacity " << vector2.capacity()<< endl;
    }
    // Initializing a vector with a custom size and default values:
    vector<int> vector3(10, 4); // This creates a vector of size 10 with all elements initialized to 4.
    for (int i = 0; i< vector3.size(); i++) {
        cout << vector3[i] << endl;
    }
    
    // Sorting a vector
    vector<int> vector4;
    vector4.push_back(30);
    vector4.push_back(10);
    vector4.push_back(60);
    vector4.push_back(70);
    vector4.push_back(20);
    vector4.push_back(50);
    vector4.push_back(40);

    sort(vector4.begin(), vector4.end()); // This sorts the vector in ascending order

    return 0;
}
