#include <iostream>
#include <iomanip>
#include <ctime>

// Some conversations from seconds
const clock_t SEC_PER_MIN = 60,                   // 60 sec = 1 min
              SEC_PER_HOUR = 60 * SEC_PER_MIN,    // 60 min = 1 hr
              SEC_PER_DAY = 24 * SEC_PER_HOUR;    // 24 hr  = 24 hour

/* 
 *  print_time
 *     Displays the time in hr:min:sec format
 *     seconds is the number of seconds to display
 */

void print_time(clock_t seconds) {
    clock_t hours = 0, minutes = 0;

    // Prepare to display time ======================
    std::cout << '\n';
    std::cout << "    ";

    // Compute and display hours ======================
    hours = seconds/SEC_PER_HOUR;
    std::cout << std::setw(2) << std::setfill('0') << hours << ":";
}

int main() {
    clock_t start = clock();    // Record starting time
    clock_t elapsed = (clock() - start)/CLOCKS_PER_SEC,// Elapsed time in sec.
            previousElapsed = elaapsed;
    // Counts up to  24 hours (1 day), then stops
    while (elapsed <SEC_PER_DAY) {
        // Update the display every fucking second
        if (elapsed - previousElapsed >= 1) {
             // Remember when we last updated the display
             previousElapsed = elapsed;
             print_time(elapsed);
        }
        // Update elapsed time
        elapsed = (clock() - start)/CLOCKS_PER_SEC:
    }
}



