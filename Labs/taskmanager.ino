#include <TaskManagerIO.h>

int lamps[6] = {LOW, LOW, LOW, LOW, LOW, LOW};

int pins = LED_BUILTIN;

void setup() {
  // set the digital pin as output:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);


  taskManager.scheduleFixedRate(10000, [] 
  {
      if (lamps[0] == LOW) 
      {
        lamps[0] = HIGH;
      } else {
        lamps[0] = LOW;
      }


      digitalWrite(11, lamps[0]);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(20000, [] 
  {
    if (lamps[1] == LOW) {
      lamps[1] = HIGH;
    } else {
      lamps[1] = LOW;
    }


    digitalWrite(10, lamps[1]);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(40000, [] 
  {
    if (lamps[2] == LOW) {
      lamps[2] = HIGH;
    } else {
      lamps[2] = LOW;
    }

    digitalWrite(9, lamps[2]);
	}, TIME_MICROS);


  taskManager.scheduleFixedRate(60000, [] 
  {
    if (lamps[3] == LOW) {
      lamps[3] = HIGH;
    } else {
      lamps[3] = LOW;
    }

    digitalWrite(6, lamps[3]);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(80000, [] 
  {
    if (lamps[4] == LOW) 
    {
      lamps[4] = HIGH;
    } else {
      lamps[4] = LOW;
    }

    digitalWrite(5, lamps[4]);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(100000, [] 
  {
    if (lamps[5] == LOW) 
    {
      lamps[5] = HIGH;
    } else {
      lamps[5] = LOW;
    }

    digitalWrite(3, lamps[5]);
	}, TIME_MICROS);
}

void loop() 
{
  taskManager.runLoop();
}