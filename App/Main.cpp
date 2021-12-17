#include <httplib.h>
#include <iostream>

int main()
{
    httplib::Client cli("http://www.google.com");

    if (auto res = cli.Get("/"))
    {
        std::cout << res->status << std::endl;
        std::cout << res->get_header_value("Content-Type") << std::endl;
        std::cout << res->body << std::endl;
    }
    else
    {
        std::cout << "error code: " << res.error() << std::endl;
    }

    return 0;
}
