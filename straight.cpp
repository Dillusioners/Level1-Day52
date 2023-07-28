# include <iostream>
# include <vector>

int points = 0;

/// @brief This function allows for automated questioning process
/// @param question The question to be printed
/// @param options All the options for the question
/// @param answer The correct option for the question
void question(std::string question, std::vector<std::string> options, char answer){
    std::string input;
    static int total_questions = 1;
    char option = 'A', inp;
    answer = toupper(answer); // uppercasing the answer for safety

    // printing the question and the all of the options
    std::cout << total_questions << ". " << question << "\n\n";
    for(auto elem : options) std::cout << option++ << ". " << elem << '\n';
    std::cout << ">> ";
    
    // recieving input from user and making it uppercase
    std::cin >> input;
    inp = toupper(input[0]);

    // checking if the given input is equal to the answer
    if(inp == answer) std::cout << "Correct Answer!";
    else std::cout << "Wrong Answer! The correct answer is " << options[answer - 65];

    // appending static variable
    total_questions++;
    points += (inp == answer);
    std::cout << "\n\n";
}

// main method of the program
int main(int argc, char** argv){
    std::cout << "WELCOME TO DILLUSIONERS STRAIGHT TEST.\n";
    std::cout << "THIS TEST WILL DETERMINE HOW STRAIGHT YOU ACTUALLY ARE.\n\n";

    // asking user questions to answer
    question(
        "Do you like James Charles?",
        {"Yes", "No", "Maybe", "Who is James Charles"},
        'b'
    );

    question(
        "Which month of the year is the pride month?",
        {"No Idea", "June", "July"},
        'a'
    );

    question(
        "Would you consider an RGB setup not straight?",
        {"Yes", "No", "Maybe", "IDK"},
        'b'
    );

    question(
        "Are you actually straight?",
        {"No", "Yes", "Maybe", "IDK"},
        'd'
    );

    // if the user scores enough points, they are deemed straight, else not
    if(points >= 3) std::cout << "Congrats! You are a straight man.";
    else std::cout << "Oh no. You are not straight unfortunately.....";
    std::cout << std::endl;
    return 0;
}