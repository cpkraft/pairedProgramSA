#include "handlers.h"

#include <iostream>
#include <cassert>

void normalCase()
{
   httplib::Request req;
   httplib::Response res;
   std::string userAgent = "jimbo-jambo";
   std::string contentType = "text/plain";

   req.set_header("User-Agent", userAgent);

   hiHandler(req, res);
   assert(res.status == successCode);
   assert(res.body == userAgent);
   assert(res.get_header_value("Content-Type") == contentType);
}

void noUserAgent()
{
   httplib::Request req;
   httplib::Response res;
   std::string contentType = "text/plain";

   hiHandler(req, res);
   assert(res.status == genericClientErrorCode);
   assert(res.body == userAgentNotFound);
   assert(res.get_header_value("Content-Type") == contentType);
}

// this will call our function and make some assertions
int main() {
    std::cout << "start tests\n";

    normalCase();
    noUserAgent();
}
