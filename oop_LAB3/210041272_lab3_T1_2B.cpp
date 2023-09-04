
#include<iostream>

class Counter {
private:
    int count;           // Private member variable to store the count
    int incrementStep;   // Private member variable to store the increment step

public:
    // Constructor to initialize count and incrementStep
    Counter() : count(0), incrementStep(1) {}

    // Function to set the value of Increment Step
    void setIncrementStep(int step_val) {
        incrementStep = step_val;
    }

    // Function to get the current count value
    int getCount() {
        return count;
    }

    // Function to increment the count by increment step
    void increment() {
        count += incrementStep;
    }

    // Function to reset the count to 0
    void resetCount() {
        count = 0;
    }

    // Function to check if the count is even
    bool isEven() {
        return count % 2 == 0;
    }
};

int main() {
    Counter myCounter;
    myCounter.setIncrementStep(5);

    std::cout << "Initial Count: " << myCounter.getCount() << std::endl;

    myCounter.increment();
    std::cout << "Count after increment: " << myCounter.getCount() << std::endl;

    myCounter.resetCount();
    std::cout << "Count after reset: " << myCounter.getCount() << std::endl;

    myCounter.increment();
    std::cout << "Count after another increment: " << myCounter.getCount() << std::endl;

    if (myCounter.isEven()) {
        std::cout << "Count is even." << std::endl;
    } else {
        std::cout << "Count is not even." << std::endl;
    }

    return 0;
}
