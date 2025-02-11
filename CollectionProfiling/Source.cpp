// Includes
#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <deque>

// Constants
const int NUM_ELEMENTS = 1000000;

// Functions declarations
void ProfileBackInsertVector(std::vector<int>& vec);
void ProfileRandomAccessVector(std::vector<int>& vec);

void ProfileBackInsertList(std::list<int>& list);
void ProfileFrontInsertList(std::list<int>& list);

void ProfileBackInsertDeque(std::deque<int>& deque);
void ProfileFrontInsertDeque(std::deque<int>& deque);
void ProfileRandomAccessDeque(std::deque<int>& deque);


// Functions Definitions
int main()
{
    std::vector<int> vec;
    ProfileBackInsertVector(vec);
    // TODO: Profile RandomAccessVector
    ProfileRandomAccessVector(vec);

    // TODO: Create list
    std::list<int> list;

    // TODO: ProfileBackInsertList
    ProfileBackInsertList(list);
    // TODO: ProfileFrontInsertList
    ProfileFrontInsertList(list);

    // TODO: Create deque
    std::deque<int> deque;

    // TODO: ProfileBackInsertDeque
    ProfileBackInsertDeque(deque);

    // TODO: ProfileFrontInsertDeque
    ProfileFrontInsertDeque(deque);

    // TODO: ProfileRandomAccessDeque
    ProfileRandomAccessDeque(deque);

    return 0;
}

void ProfileBackInsertVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::vector: " << duration.count() << " ms\n";
}

void ProfileRandomAccessVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    std::cout << vec.at(5) << std::endl;

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to random access for std::vec: " << duration.count() << " ms\n";
}

void ProfileBackInsertList(std::list<int>& list)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        list.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::list: " << duration.count() << " ms\n";
}

void ProfileFrontInsertList(std::list<int>& list)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        list.push_front(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::list: " << duration.count() << " ms\n";
}

void ProfileBackInsertDeque(std::deque<int>& deque)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        deque.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::deque: " << duration.count() << " ms\n";
}

void ProfileFrontInsertDeque(std::deque<int>& deque)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        deque.push_front(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::deque: " << duration.count() << " ms\n";
}

void ProfileRandomAccessDeque(std::deque<int>& deque)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    std::cout << deque.at(5) << std::endl;

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to random access for std::deque: " << duration.count() << " ms\n";
}
