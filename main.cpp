#include <iostream>
#include <list>
class Logger {
private:
    inline static int counter = 0;

    const int id;

public:
    Logger(): id(++counter) {
        std::cout << "Logger(): " << id << "\n";
    }

    Logger(const Logger& other): id(++counter) {
        std::cout << "Logger(const Logger&): " << id << " " << other.id << "\n";
    }

    Logger& operator = (const Logger& other) {

        std::cout << "Logger& operator = (const Logger&) " << id << " " << other.id << "\n";
        return *this;
    }

    ~Logger() {
        std::cout << "~Logger() " << id << "\n";
    }
};

int main() {
    Logger x1(1);
    Logger x2(2);
    x2=x1;
}
