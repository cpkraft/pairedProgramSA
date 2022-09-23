app: handlers.h handlers.cpp main.cpp
	g++ -std=c++11 handlers.cpp main.cpp -o app

.PHONY: run
run: app
	@./app

.PHONY: test
test: handlers.h handlers.cpp test.cpp
	g++ -std=c++11 handlers.cpp test.cpp -o test
	./test
	rm ./test

#.PHONY: publish
#publish:
#	docker build . -t app