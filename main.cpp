#include <iostream>

#include "handlers.h"

// Task / Requirements:
// assumption: using curl for client
// implement HTTP server to ...
// 1. listen on port
// 2. respond to get
// 2.a. respond with User-Agent, which is in the request

// plan
// 1. use github httplib.h for server
//   - https://github.com/yhirose/cpp-httplib
// 2. Get is the eventHandler for server
// 3. implement get method

// Question: how do we parse the the request

// conditionally include this 
int main() {
    std::cout << "start server\n";

    httplib::Server svr;

    svr.Get("/hi", hiHandler);

    svr.listen("0.0.0.0", 8080);
}
