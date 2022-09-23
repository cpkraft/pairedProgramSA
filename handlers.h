#pragma once

#include "httplib.h"

#include <string>

using namespace httplib;

const int genericClientErrorCode = 400;
const int successCode = 200;
const std::string userAgentNotFound = "User-Agent not found!";

void hiHandler(const httplib::Request& req, httplib::Response &res);