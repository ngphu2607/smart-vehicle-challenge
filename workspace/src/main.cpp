#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  int result2 = myFunction(5, 7);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
void
  setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    int result = myFunction(2, 3);
    Serial.println(result); // Output: 5
    int result2 = myFunction(5, 7);
    Serial.println(result2); // Output: 12
  }   