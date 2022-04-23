

#include "threadedPrint.hpp"



ThreadedPrint::ThreadedPrint() {
    std::cout << "Threaded Print class initialised" << std::endl;
    // std::thread printingThreadThread(&ThreadedPrint::InterruptPrint, this);
}

void ThreadedPrint::InterruptPrint(bool* interrupt) {

    // std::this_thread::sleep_for(std::chrono::seconds(10));
    while (!*interrupt)
    std::cout << "This prints every 10 seconds";
    std::this_thread::sleep_for(std::chrono::seconds(10));

}

void ThreadedPrint::otherFunction(bool* interrupt) {
    std::cout << "Running other function" << std::endl;
    std::thread aThreadHere(&ThreadedPrint::InterruptPrint, this, interrupt);
    aThreadHere.join();
}