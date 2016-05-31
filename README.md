# LoopWorker
A very simple class to set up scheduled task on arduino. It uses millis() and it can be used as a fast and simple way to avoid delay()

Created by DillerSoft, so this probably have many flaws and may set your greenhouse on fire.


31-05-2016 LoopWorker 0.1.0  The first version - Dennis Gydesen

USER GUIDE

For easy use, download the newest ZIP file and add it to the Arduino IDE as a library. 

There is an example in the zip file.

use LoopWorker(5) for set up a job running every fifth milli second

use LoopWorker(5, "ms") for set up a job running every fifth milli second

use LoopWorker(5, "s") for setting up a job running every fifth second

use LoopWorker(5, "m") for setting up a job running every fifth minute

use LoopWorker(5, "h") for setting up a job running every fifth hour

use LoopWorker(5, "d") for setting up a job running every fifth day

When the desired time has passed, LoopWorker.rdy() will get boolean true

if(myWorker.rdy()){ // Do work }

