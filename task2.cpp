#include <iostream>
#include <string>
#include <cmath>

class Numbers {   // from task1
public:
    int n1;
    int n2;
    void set(int a, int b) {
        n1 = a;
        n2 = b;
    }
    void print() {
        std::cout << "Numbers(" << n1 <<
        ", " << n2 << ")\n";
    }
};

class Route {
private:
    std::string first_name, last_name;
    Numbers p1, p2;
    double distance;
    void _calc() {
        distance = sqrt(pow((p1.n1 - p2.n1),2) +
        pow((p1.n2 - p2.n2),2));
    }
public:
    void set_start(std::string name, Numbers numbers) {
        first_name = name;
        p1 = numbers;
    }
    void set_end(std::string name, Numbers numbers) {
        last_name = name;
        p2 = numbers;
    }
    void print_distance() {
        _calc();
        std::cout << "Distance between " <<
        first_name << " and " << last_name <<
        " is: " << distance << std::endl;
    }
};

int main() {
    Route MskLon;
    MskLon.set_start("Moskow", {300, 300});
    MskLon.set_end("London", {450, 450});

    MskLon.print_distance();

    return 0;
}