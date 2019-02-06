#ifndef _STOPWATCH_H_
#define _STOPWATCH_H_

class Stopwatch {
private:
unsigned long time_start;
public:
void start();
bool has_elapsed(unsigned long milliseconds);
void reset();
};
#endif
