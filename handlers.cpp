#include "handlers.h"

void hiHandler(const httplib::Request& req, httplib::Response &res) {
    std::string userAgent;
    if (req.has_header("User-Agent")) 
    {
        userAgent = req.get_header_value("User-Agent");
        res.status = successCode;
    }
    else
    {
        userAgent = userAgentNotFound;
        res.status = genericClientErrorCode;
    }
    // set body and Content-Type to text/plain
    res.set_content(userAgent, "text/plain");
}
