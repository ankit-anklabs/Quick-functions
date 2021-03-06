//Variable Declaration:
const int seg_a = 11;
const int seg_b = 10;
const int seg_c = 9;
const int seg_d = 8;
const int seg_e = 7;
const int seg_f = 6;
const int seg_g = 5;
const int seg_dp = 4;
const int com = 12;

void setup() {
  pinMode(seg_a, OUTPUT);
  pinMode(seg_b, OUTPUT);
  pinMode(seg_c, OUTPUT);
  pinMode(seg_d, OUTPUT);
  pinMode(seg_e, OUTPUT);
  pinMode(seg_f, OUTPUT);
  pinMode(seg_g, OUTPUT);
  pinMode(seg_dp, OUTPUT);
  pinMode(com, OUTPUT);
}

void loop() {
  Common_Cathode();
  Common_Anode();
}

void Common_Cathode() {
  digitalWrite(com, LOW); // set common anode HIGH (5V)
  for (int i = 0; i < 10; i++) { // count 0 - 9
    switch (i) { // switch statemet to select the number

      case 0: // set relevent segments HIGH and others LOW
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, LOW);
        break;

      case 1:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, LOW);
        break;

      case 2:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

      case 3:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

      case 4:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

      case 5:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

      case 6:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

      case 7:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, LOW);
        break;

      case 8:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

      case 9:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, LOW);
        break;

    }
    delay(1000); // Show each number for 1 second
  }
}
void Common_Anode() {
  digitalWrite(com, HIGH); // set common anode HIGH (5V)

  for (int i = 0; i < 10; i++) {

    switch (i) {

      case 0:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, HIGH);
        break;

      case 1:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, HIGH);
        break;

      case 2:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

      case 3:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

      case 4:
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

      case 5:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

      case 6:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

      case 7:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        digitalWrite(seg_dp, HIGH);
        break;

      case 8:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

      case 9:
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        digitalWrite(seg_dp, HIGH);
        break;

    }
    delay(1000);
  }
}
