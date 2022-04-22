default:
	g++ blink.cpp threadedPrint.cpp -o blink.app -std=c++2a
	./blink.app
