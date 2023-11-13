#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream ss(macAddress);
    std::string token;
    std::getline(ss, token, ':');
    int firstOctet = std::stoi(token, nullptr, 16);

    if (firstOctet % 2 == 0) {
        return "Unicast";
    } else if (firstOctet == 255) {
        return "Broadcast";
    } else {
        return "Multicast";
    }
}
