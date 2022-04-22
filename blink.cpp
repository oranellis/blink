#include "threadedPrint.hpp"

#include <iostream>
#include <thread>
#include <chrono>

int main(void) {

        int i = 0;

        std::chrono::time_point<std::chrono::steady_clock> programEpoch = std::chrono::steady_clock::now();

        // std::this_thread::sleep_for(std::chrono::seconds(5));

        int anInt = 5;

        ThreadedPrint printingThreadInstance;
        // std::thread printingThreadThread(&ThreadedPrint::InterruptPrint, &printingThreadInstance);
        std::cout << "instance created" << std::endl;
        printingThreadInstance.otherFunction();
        

        while(true) {

                std::cout << "Time elapsed: " << i << "s" << std::endl;
                std::this_thread::sleep_until(programEpoch + std::chrono::seconds(i));
                i++;


        }

        return 0;
}
