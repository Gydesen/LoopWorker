//
// Created by DillerSoft, so this probaly have many flaws and may set your greenhouse on fire.
//
//
// LoopWorker class is a really easy way to set up scheduled jobs on the arduino
//
// 31-05-2016 LoopWorker 0.1.0 - Dennis Gydesen
//
//
//
//  USER GUIDE
// use LoopWorker(5) for set up a job running every fifth milli second
// use LoopWorker(5, "ms") for set up a job running every fifth milli second
// use LoopWorker(5, "s") for setting up a job running every fifth second
// use LoopWorker(5, "m") for setting up a job running every fifth minute
// use LoopWorker(5, "h") for setting up a job running every fifth hour
// use LoopWorker(5, "d") for setting up a job running every fifth day
//
// to see if your job is supposed to run, check for boolean true with LoopWorker.rdy()
//
//
//
// Known flaws
// As now there is no solution for when the long int runs out of numbers and get reset. This will happend every 49.7 day
//
//


#include "ARDUINO.h"

#ifndef LoopWorker_H
#define LoopWorker_H

class LoopWorker{
  public:
    LoopWorker(unsigned long interval);
    LoopWorker(unsigned long interval, String timeScale);
    bool rdy();                                 //see if times has passed and it is ready to work again
  private:
    unsigned long _jobInterval;
    unsigned long _lastRun;
};
#endif
