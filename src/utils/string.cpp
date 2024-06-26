#pragma once

#include <fstream>
#include <string>
#include <sstream>

std::string readFileToString(const std::string& filePath) {
    std::ifstream file(filePath);  // Open the file
    if (!file.is_open()) {  // Check if the file was opened successfully
        throw std::runtime_error("Could not open file");
    }

    std::stringstream buffer;
    buffer << file.rdbuf();  // Read the file into the stringstream
    return buffer.str();  // Return the string from the stringstream
}


bool beginsWith(std::string main, std::string substr)
{
    for (int i = 0; i < substr.length(); i++)
    {
        if (main[i] != substr[i])
            return false;
    }
    return true;
}