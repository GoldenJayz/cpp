
#include <iostream>


int main() {
    int i; //this is the number the user enters
    std::cout << "Please enter a number" << std::endl;
    std::cin >> i;
    if (i > 1000) {
        std::cout << "Your number is over 1000! Try again." << std::endl;
    } else {
        for (i >= 1000; i = i + 10;) {
            std::cout << i << std::endl;
            if (i >=1000) {
                return 0;
            }
        }
    }
    //for (int f = 0, f > 1000; f++) {
            //std::cout << i;
       // }
    //}
    return 0;
}




//now make a program that uses a loop to keep adding 1 to the users number until it gets to 1000 if number is greater than 1000 exit the code
