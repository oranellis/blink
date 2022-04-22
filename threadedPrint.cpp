

#include "threadedPrint.hpp"



ThreadedPrint::ThreadedPrint() {
    std::cout << "Threaded Print class initialised" << std::endl;
    // std::thread printingThreadThread(&ThreadedPrint::InterruptPrint, this);
}

void ThreadedPrint::InterruptPrint() {

    // std::this_thread::sleep_for(std::chrono::seconds(10));

    std::cout << "This prints every 10 seconds: ";
    std::this_thread::sleep_for(std::chrono::seconds(1));

}

void ThreadedPrint::otherFunction() {
    std::cout << "Running other function" << std::endl;
    std::thread aThreadHere3e(&ThreadedPrint::InterruptPrint, this);
}