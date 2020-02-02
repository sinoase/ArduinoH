int outputStates()
{
  if (strcmp(cmd, "0ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 0ON");
    digitalWrite(0, 1);

    return 1;

  }
  if (strcmp(cmd, "1ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 1ON");
    digitalWrite(1, 1);

    return 1;

  }
  if (strcmp(cmd, "2ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 2ON");
    digitalWrite(2, 1);

    return 1;

  }
  if (strcmp(cmd, "3ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 3ON");
    digitalWrite(3, 1);

    return 1;

  }
  if (strcmp(cmd, "4ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 4ON");
    digitalWrite(4, 1);

    return 1;

  }
  if (strcmp(cmd, "5ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 5ON");
    digitalWrite(5, 1);

    return 1;

  }
  if (strcmp(cmd, "6ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 6ON");
    digitalWrite(6, 1);

    return 1;

  }
  if (strcmp(cmd, "7ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 7ON");
    digitalWrite(7, 1);

    return 1;

  }
  if (strcmp(cmd, "8ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 8ON");
    digitalWrite(8, 1);

    return 1;

  }
  if (strcmp(cmd, "9ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 9ON");
    digitalWrite(9, 1);

    return 1;

  }
  if (strcmp(cmd, "10ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 10ON");
    digitalWrite(10, 1);

    return 1;

  }
  if (strcmp(cmd, "11ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 11ON");
    digitalWrite(11, 1);

    return 1;

  }
  if (strcmp(cmd, "12ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 12ON");
    digitalWrite(12, 1);

    return 1;

  }
  if (strcmp(cmd, "13ON")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 13ON");
    digitalWrite(13, 1);

    return 1;

  }
  
  
  
  
  
  
  if (strcmp(cmd, "0OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 0OFF");
    digitalWrite(0, 0);

    return 1;
  }
   if (strcmp(cmd, "1OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 1OFF");
    digitalWrite(1, 0);

    return 1;
  } if (strcmp(cmd, "2OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 2OFF");
    digitalWrite(2, 0);

    return 1;
  } if (strcmp(cmd, "3OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 3OFF");
    digitalWrite(3, 0);

    return 1;
  } if (strcmp(cmd, "4OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 4OFF");
    digitalWrite(4, 0);

    return 1;
  } if (strcmp(cmd, "5OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 5OFF");
    digitalWrite(5, 0);

    return 1;
  } if (strcmp(cmd, "6OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 6OFF");
    digitalWrite(6, 0);

    return 1;
  } if (strcmp(cmd, "7OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 7OFF");
    digitalWrite(7, 0);

    return 1;
  } if (strcmp(cmd, "8OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 8OFF");
    digitalWrite(8, 0);

    return 1;
  } if (strcmp(cmd, "9OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 9OFF");
    digitalWrite(9, 0);

    return 1;
  } if (strcmp(cmd, "10OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 10OFF");
    digitalWrite(10, 0);

    return 1;
  } if (strcmp(cmd, "11OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 11OFF");
    digitalWrite(11, 0);

    return 1;
  } if (strcmp(cmd, "12OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 12OFF");
    digitalWrite(12, 0);

    return 1;
  } if (strcmp(cmd, "13OFF")  == 0 && statePin13 == "OUTPUT") {
    Serial.println("Command received: 13OFF");
    digitalWrite(13, 0);

    return 1;
  }

}
