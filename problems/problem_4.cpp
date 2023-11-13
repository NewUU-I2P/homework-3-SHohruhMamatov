#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    int octet = macAddress[0]+macAddress[1];
    if(octet/2==0){
        result ='Unicast';
    }else if(octet/2 !=0){
        result = 'Multicast';
    }else{
        result = 'Broadcast';
    }
    // make use of control flow statements
    return result;
}
