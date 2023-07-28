# include <iostream>
# include <random>
# include <thread>
# include <chrono>

// program execution starts from here
int main(int argc, char** argv){
    // random number generator
    std::random_device rd;
    std::mt19937 mt(rd());

    // welcoming message
    std::cout << "WELCOME TO DILLUSIONERS STRAIGHT-O-METER.\n\n";
    std::cout << "Currently determining your straightness...\n\n";
    
    // sleeping for 5 seconds
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    // generating the random number and printing to the terminal
    std::cout << "You are " << mt() % 100 << "% straight.";

    return 0;
}