#include <iostream>
#include <string>

int main() {
    std::string url;
    std::getline(std::cin, url);

    std::string hostname;
    size_t i = 0;

    while (i < url.size() - 2 && (url[i] != ':' || url[i + 1] != '/' || url[i + 2] != '/')) {
        i++;
    }

    if (i < url.size() - 2 && url[i] == ':' && url[i + 1] == '/' && url[i + 2] == '/') {
        i += 3;  
    }

    while (i < url.size() && url[i] != '/' && url[i] != ':') {
        hostname += std::tolower(url[i]); 
        i++;
    }

    std::cout << hostname << std::endl;

    return 0;
}
