#ifndef THREADED_SLEEP_H
#define THREADED_SLEEP_H

#include <iostream>
#include <thread>


class ThreadedPrint {

    public:

    ThreadedPrint();

    void InterruptPrint(bool* interrupt);

    void otherFunction(bool* interrupt);
};

#endif // THREADED_SLEEP_H