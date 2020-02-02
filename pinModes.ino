int pinModes()
{
  if (strcmp(cmd, "0INPUT")  == 0) {
    Serial.println("Command received: 0INPUT");
    pinMode(0, INPUT);
    statePin0 = "INPUT";
    return 1;
  } if (strcmp(cmd, "1INPUT")  == 0) {
    Serial.println("Command received: 1INPUT");
    pinMode(1, INPUT);
    statePin1 = "INPUT";
    return 1;
  }if (strcmp(cmd, "2INPUT")  == 0) {
    Serial.println("Command received: 2INPUT");
    pinMode(2, INPUT);
    statePin2 = "INPUT";
    return 1;
  }if (strcmp(cmd, "3INPUT")  == 0) {
    Serial.println("Command received: 3INPUT");
    pinMode(3, INPUT);
    statePin3 = "INPUT";
    return 1;
  }if (strcmp(cmd, "4INPUT")  == 0) {
    Serial.println("Command received: 4INPUT");
    pinMode(4, INPUT);
    statePin4 = "INPUT";
    return 1;
  }if (strcmp(cmd, "5INPUT")  == 0) {
    Serial.println("Command received: 5INPUT");
    pinMode(5, INPUT);
    statePin5 = "INPUT";
    return 1;
  }if (strcmp(cmd, "6INPUT")  == 0) {
    Serial.println("Command received: 6NPUT");
    pinMode(6, INPUT);
    statePin6 = "INPUT";
    return 1;
  }if (strcmp(cmd, "7INPUT")  == 0) {
    Serial.println("Command received: 7INPUT");
    pinMode(7, INPUT);
    statePin7 = "INPUT";
    return 1;
  }if (strcmp(cmd, "8INPUT")  == 0) {
    Serial.println("Command received: 8INPUT");
    pinMode(8, INPUT);
    statePin8 = "INPUT";
    return 1;
  }if (strcmp(cmd, "9INPUT")  == 0) {
    Serial.println("Command received: 9INPUT");
    pinMode(9, INPUT);
    statePin9 = "INPUT";
    return 1;
  }if (strcmp(cmd, "10INPUT")  == 0) {
    Serial.println("Command received: 10INPUT");
    pinMode(10, INPUT);
    statePin10 = "INPUT";
    return 1;
  }if (strcmp(cmd, "11INPUT")  == 0) {
    Serial.println("Command received: 11INPUT");
    pinMode(11, INPUT);
    statePin11 = "INPUT";
    return 1;
  }if (strcmp(cmd, "12INPUT")  == 0) {
    Serial.println("Command received: 12INPUT");
    pinMode(12, INPUT);
    statePin12 = "INPUT";
    return 1;
  }if (strcmp(cmd, "13INPUT")  == 0) {
    Serial.println("Command received: 13INPUT");
    pinMode(13, INPUT);
    statePin13 = "INPUT";
    return 1;
  }

  if (strcmp(cmd, "0OUTPUT")  == 0) {
    Serial.println("Command received: 0OUTPUT");
    pinMode(13, OUTPUT);
    statePin0 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "1OUTPUT")  == 0) {
    Serial.println("Command received: 1OUTPUT");
    pinMode(13, OUTPUT);
    statePin1 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "2OUTPUT")  == 0) {
    Serial.println("Command received: 2OUTPUT");
    pinMode(13, OUTPUT);
    statePin2 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "3OUTPUT")  == 0) {
    Serial.println("Command received: 3OUTPUT");
    pinMode(13, OUTPUT);
    statePin3 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "4OUTPUT")  == 0) {
    Serial.println("Command received: 4OUTPUT");
    pinMode(13, OUTPUT);
    statePin4 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "5OUTPUT")  == 0) {
    Serial.println("Command received: 5OUTPUT");
    pinMode(13, OUTPUT);
    statePin5 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "6OUTPUT")  == 0) {
    Serial.println("Command received: 6OUTPUT");
    pinMode(13, OUTPUT);
    statePin6 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "7OUTPUT")  == 0) {
    Serial.println("Command received: 7OUTPUT");
    pinMode(13, INPUT);
    statePin7 = "INPUT";
    return 1;
  }if (strcmp(cmd, "8OUTPUT")  == 0) {
    Serial.println("Command received: 8OUTPUT");
    pinMode(13, OUTPUT);
    statePin8 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "9OUTPUT")  == 0) {
    Serial.println("Command received: 9OUTPUT");
    pinMode(13, OUTPUT);
    statePin9 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "10OUTPUT")  == 0) {
    Serial.println("Command received: 10OUTPUT");
    pinMode(13, OUTPUT);
    statePin10 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "11OUTPUT")  == 0) {
    Serial.println("Command received: 11OUTPUT");
    pinMode(13, OUTPUT);
    statePin11 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "12OUTPUT")  == 0) {
    Serial.println("Command received: 12OUTPUT");
    pinMode(13, OUTPUT);
    statePin12 = "OUTPUT";
    return 1;
  }if (strcmp(cmd, "13OUTPUT")  == 0) {
    Serial.println("Command received: 13OUTPUT");
    pinMode(13, OUTPUT);
    statePin13 = "OUTPUT";
    return 1;
  }
  else {
    return 0;
  }
}
