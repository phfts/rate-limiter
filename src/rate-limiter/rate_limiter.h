#pragma once
#include <string>
#include <vector>
#include <map>

class RateLimiter
{
private:
    bool _hasGlobalRateLimit;
    std::string timeUnit;
    int timeInterval;
    int maxRequests;
    std::vector<std::string> identificationMethods;
    std::map<std::string, std::vector<int>> timestampsPerIp; 

    void validateTimeUnit(std::string _timeUnit);
    void validateIdentificationMethod(std::string idMethod);

public:
    RateLimiter(std::string timeUnit, int timeInterval, int maxRequests, std::vector<std::string> identificationMethods);
    RateLimiter(std::string file);
    bool hasGlobalRateLimit();
    void setHasGlobalLimit(bool _hasGlobalRateLimit);
    void setMaxRequests(int _maxRequests);
    void setIdentificationMethods(std::vector<std::string> idMethods);
    void setTimeInterval(int _timeInterval);
    void setTimeUnit(std::string _timeUnit);
    int getRateLimitIntervalInSeconds();
    bool checkGlobally(std::string ip);
};