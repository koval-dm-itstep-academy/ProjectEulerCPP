#include <iostream>
#include <string>

int solve(){
    std::string letter = "";
    int letter_count = 0;

    for (int i = 1; i <= 1000; ++i) {
        if (i / 1000 == 1) {
            letter += "onethousand";
        }
        //
        //
        //
        if (i / 100 == 9) {
            letter += "nine";
        }
        if (i / 100 == 8) {
            letter += "eight";
        }
        if (i / 100 == 7) {
            letter += "seven";
        }
        if (i / 100 == 6) {
            letter += "six";
        }
        if (i / 100 == 5) {
            letter += "five";
        }
        if (i / 100 == 4) {
            letter += "four";
        }
        if (i / 100 == 3) {
            letter += "three";
        }
        if (i / 100 == 2) {
            letter += "two";
        }
        if (i / 100 == 1) {
            letter += "one";
        }
        if (i > 100 && i % 100 != 0) {
            letter += "hundredand";
        }
        if (i % 100 == 0 && i != 1000) {
            letter += "hundred";
        }
        //
        //
        //
        if (i % 100 / 10 == 9) {
            letter += "ninety";
        }
        if (i % 100 / 10 == 8) {
            letter += "eighty";
        }
        if (i % 100 / 10 == 7) {
            letter += "seventy";
        }
        if (i % 100 / 10 == 6) {
            letter += "sixty";
        }
        if (i % 100 / 10 == 5) {
            letter += "fifty";
        }
        if (i % 100 / 10 == 4) {
            letter += "forty";
        }
        if (i % 100 / 10 == 3) {
            letter += "thirty";
        }
        if (i % 100 / 10 == 2) {
            letter += "twenty";
        }
        //
        //
        //
        //
        //
        //
        if (i % 100 < 10 || (i % 100 > 13 && i % 100 != 15)) {
            if (i % 10 == 9) {
                letter += "nine";
            }
            if (i % 10 == 8) {
                letter += "eight";
            }
            if (i % 10 == 7) {
                letter += "seven";
            }
            if (i % 10 == 6) {
                letter += "six";
            }
            if (i % 10 == 5) {
                letter += "five";
            }
            if (i % 10 == 4) {
                letter += "four";
            }
            if (i % 10 == 3) {
                letter += "three";
            }
            if (i % 10 == 2) {
                letter += "two";
            }
            if (i % 10 == 1) {
                letter += "one";
            }
        }
        if (i % 100 == 10) {
            letter += "ten";
        }
        if (i % 100 == 11) {
            letter += "eleven";
        }
        if (i % 100 == 12) {
            letter += "twelve";
        }
        if (i % 100 == 13) {
            letter += "thir";
        }
        if (i % 100 == 15) {
            letter += "fif";
        }
        if (i % 100 > 12 && i % 100 < 20 && i % 100 != 18) {
            letter += "teen";
        }
        if (i % 100 == 18) {
            letter += "een";
        }
    }
    for (auto i = letter.begin(); i < letter.end(); ++i) {
        letter_count++;
    }
    return letter_count;
}

int main()
{
    std::cout << solve() << "\n";
}


