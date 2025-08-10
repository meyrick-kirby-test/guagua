#include <time.h>

#include "date_common.h"

int get_utc_year() {

    // Get unix timestamp.
    time_t now;
    time(&now);

    // Get UTC year from unix timestamp.
    tm* p_now = gmtime(&now);
    int year = p_now->tm_year;
    return year + 1900;
}
