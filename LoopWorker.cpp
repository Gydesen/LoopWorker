#include "LoopWorker.h"


LoopWorker::LoopWorker(unsigned long interval){
  _jobInterval = interval;
  _lastRun = millis();
}
LoopWorker::LoopWorker(unsigned long interval, String timeScale){
  if(timeScale == "ms"){
    _jobInterval = interval;
  }else if(timeScale == "s"){
    _jobInterval = interval * 1000;
  }else if(timeScale == "m"){
    _jobInterval = interval * 1000 * 60;
  }else if(timeScale == "h"){
    _jobInterval = interval * 1000 * 60 * 60;
  }else if(timeScale == "d"){
    _jobInterval = interval * 1000 * 60 * 60 * 24;
  }else _jobInterval = interval;
  
  _lastRun = millis();
}

//check if time of jobInterval has passed since last rdy()
bool LoopWorker::rdy(){
  if((millis() - _lastRun) >= _jobInterval){
    _lastRun = millis();
    return 1;
  }else {
    return 0;
  }
}

