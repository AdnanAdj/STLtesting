    #include <iostream>
    #include <vector>

    int main() {
        // Creating a vector of integers
        std::vector<int> myVector;

        // Adding elements to the vector using push_back
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);

        // Displaying the elements of the vector
        std::cout << "Vector elements: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Size of the vector
        std::cout << "Size of the vector: " << myVector.size() << std::endl;

        // Maximum size the vector can reach due to system or library implementation
        std::cout << "Max size of the vector: " << myVector.max_size() << std::endl;

        // Resizing the vector to contain 5 elements with a default value of 0
        myVector.resize(5, 0);

        // Displaying the resized vector
        std::cout << "Resized vector: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Checking if the vector is empty
        std::cout << "Is the vector empty? " << (myVector.empty() ? "Yes" : "No") << std::endl;

        // Capacity of the vector (the maximum number of elements it can hold without reallocation)
        std::cout << "Capacity of the vector: " << myVector.capacity() << std::endl;

        // Reversing the order of elements in the vector
        std::reverse(myVector.begin(), myVector.end());

        // Displaying the reversed vector
        std::cout << "Reversed vector: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Accessing the first element using front()
        std::cout << "Front element: " << myVector.front() << std::endl;

        // Accessing the last element using back()
        std::cout << "Back element: " << myVector.back() << std::endl;

        // Accessing an element at a specific index using at()
        std::cout << "Element at index 2: " << myVector.at(2) << std::endl;

        // Inserting a value before a specific position
        auto it = myVector.begin() + 2;
        myVector.insert(it, 99);

        // Displaying the vector after insert
        std::cout << "Vector after insert: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Inserting 3 values before a specific position
        myVector.insert(it, 3, 55);

        // Displaying the vector after inserting n values before a position
        std::cout << "Vector after inserting 3 values: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Popping the last element
        myVector.pop_back();

        // Displaying the vector after pop_back
        std::cout << "Vector after pop_back: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Erasing an element at a specific position
        myVector.erase(it);

        // Displaying the vector after erase
        std::cout << "Vector after erase: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Erasing a range of elements
        myVector.erase(myVector.begin() + 1, myVector.begin() + 3);

        // Displaying the vector after erasing a range
        std::cout << "Vector after erasing a range: ";
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // Clearing the vector
        myVector.clear();

        // Checking if the vector is empty after clearing
        std::cout << "Is the vector empty after clearing? " << (myVector.empty() ? "Yes" : "No") << std::endl;

        return 0;
    }
