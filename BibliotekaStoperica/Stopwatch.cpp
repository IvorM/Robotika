#include <arduino.h>
#include "Stopwatch.h"

void Stopwatch::start() {
time_start = millis();
}
bool Stopwatch::has_elapsed(unsigned long milliseconds) {
return (millis() - time_start >= milliseconds);
}
void Stopwatch::reset() {
time_start = millis();
}